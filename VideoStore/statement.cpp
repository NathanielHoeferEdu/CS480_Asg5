//==============================================================================
// CS 480 - Video Store
//==============================================================================
/*
    File: statement.cpp
    Author: Nathaniel Hoefer
    Student ID: X529U639
    Class: CS480 - Spring 2018
    Date: 4/28/2018

******************************************************************************/

#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
#include "statement.h"
#include "transaction.h"
#include "movie.h"

Statement::Statement(std::vector<Transaction> &transactions) : mTransactions(transactions)
{
    mTotalCost = calcTotalCost();
    mTotalRentersPoints = calcTotalRentersPoints();
}

void Statement::printStatement()
{
    std::cout << std::setfill('*');
    std::cout << std::setw(36) << "";
    std::cout << std::endl << std::endl << std::setfill(' ');

    std::cout << std::left << std::setw(20) << "Title";
    std::cout << std::right << std::setw(10) << "Price";
    std::cout << std::right << std::setw(6) << "Days";
    std::cout << std::endl << std::setfill('-');
    std::cout << std::setw(36) << "";
    std::cout << std::endl << std::setfill(' ');

    for (int i = 0; i < (int)mTransactions.size(); i++) {
        std::vector<Movie*> t_movies = mTransactions[i].getMovies();
        for (int j = 0; j < (int)t_movies.size(); j++) {
            std::cout << std::left << std::setw(20) << t_movies[j]->getTitle();
            std::cout << std::right << " $ " << std::setw(7) << t_movies[j]->getPrice();
            std::cout << std::right << std::setw(6) << t_movies[j]->getRentDays();
            std::cout << std::endl;
        }
    }

    std::cout << std::setfill('-');
    std::cout << std::setw(36) << "";
    std::cout << std::endl << std::setfill(' ');
    std::cout << std::left << std::setw(24) << "Total";
    std::cout << std::right << std::setw(7) << " $ " << mTotalCost;
    std::cout << std::endl << std::endl;

    std::cout << std::left << std::setw(25) << "Renter Points";
    std::cout << std::right << std::setw(11) << mTotalRentersPoints;
    std::cout << std::setfill('*');
    std::cout << std::endl << std::setw(36) << "";
}

double Statement::calcTotalCost()
{
    double cost = 0.0;
    for (int i = 0; i < (int)mTransactions.size(); i++) {
        std::vector<Movie*> t_movies = mTransactions[i].getMovies();
        for (int j = 0; j < (int)t_movies.size(); j++) {
            double mov_price = t_movies[j]->getPrice();
            int days_rented = t_movies[j]->getRentDays();
            cost += mov_price * days_rented;
        }
    }
    return cost;
}

int Statement::calcTotalRentersPoints()
{
    int points = 0;
    for (int i = 0; i < (int)mTransactions.size(); i++) {
        std::vector<Movie*> t_movies = mTransactions[i].getMovies();
        for (int j = 0; j < (int)t_movies.size(); j++) {
            points += t_movies[j]->getRenterPoints();
        }
    }
    return points;
}

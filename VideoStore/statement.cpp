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

Statement::Statement(std::vector<Movie *> &movies) : mMovies(movies)
{
    mTotalCost = calcTotalCost();
    mTotalRentersPoints = calcTotalRentersPoints();
}

void Statement::printStatement()
{
    std::cout << std::setfill('*');
    std::cout << std::setw(36) << "" << std::endl;
    std::cout << "Video Store Transaction" << std::endl;
    std::cout << std::setw(36) << "";
    std::cout << std::endl << std::endl << std::setfill(' ');

    std::cout << std::left << std::setw(20) << "Title";
    std::cout << std::right << std::setw(10) << "Price";
    std::cout << std::right << std::setw(6) << "Days";
    std::cout << std::endl << std::setfill('-');
    std::cout << std::setw(36) << "";
    std::cout << std::endl << std::setfill(' ');

    for (int i = 0; i < (int)mMovies.size(); i++) {
        std::cout << std::left << std::setw(20) << mMovies[i]->getTitle();
        std::cout << std::right << " $ " << std::setw(7) << mMovies[i]->getPrice();
        std::cout << std::right << std::setw(6) << mMovies[i]->getRentDays();
        std::cout << std::endl;
    }

    std::cout << std::setfill('-');
    std::cout << std::setw(36) << "";
    std::cout << std::endl << std::setfill(' ');
    std::cout << std::left << std::setw(25) << "Total";
    std::cout << std::right << std::setw(7) << " $ " << mTotalCost;
    std::cout << std::endl << std::endl;

    std::cout << std::left << std::setw(25) << "Renter Points";
    std::cout << std::right << std::setw(11) << mTotalRentersPoints;
    std::cout << std::setfill('*');
    std::cout << std::endl << std::setw(36) << "";

    std::cout << "\n\nThank you, please come again\n" << std::endl;
}

double Statement::calcTotalCost()
{
    double cost = 0.0;
    for (int i = 0; i < (int)mMovies.size(); i++) {
        cost += mMovies[i]->getPrice();
    }
    return cost;
}

int Statement::calcTotalRentersPoints()
{
    int points = 0;
    for (int i = 0; i < (int)mMovies.size(); i++) {
        points += mMovies[i]->getRenterPoints();
    }
    return points;
}

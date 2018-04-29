//==============================================================================
// CS 480 - Video Store
//==============================================================================
/*
    File: statement.h
    Author: Nathaniel Hoefer
    Student ID: X529U639
    Class: CS480 - Spring 2018
    Date: 4/28/2018

******************************************************************************/

#ifndef STATEMENT_H
#define STATEMENT_H

#include <vector>
#include "transaction.h"

class Statement
{
public:
    Statement(std::vector<Transaction> &transactions);

    /**
     * @brief Print to console the statement containing all of the movies and their total cost, along with the renter points that are accrued.
     */
    void printStatement();

private:
    double mTotalCost = 0.0;
    int mTotalRentersPoints = 0;
    std::vector<Transaction> mTransactions;

    /**
     * @brief Calculate the total cost of all the movies
     * @return Total cost of movies
     */
    double calcTotalCost();

    /**
     * @brief Calculates the total rental points for all the movies
     * @return Total rental points for movies
     */
    int calcTotalRentersPoints();
};

#endif // STATEMENT_H

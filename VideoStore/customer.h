//==============================================================================
// CS 480 - Video Store
//==============================================================================
/*
    File: customer.h
    Author: Nathaniel Hoefer
    Student ID: X529U639
    Class: CS480 - Spring 2018
    Date: 4/28/2018

******************************************************************************/

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <vector>
#include "transaction.h"


class Customer
{
public:
    Customer(int id);

    /**
     * @brief Prints to console the statement of all the transactions of the customer
     */
    void printStatement();

    void addTransaction(Transaction &transaction);

private:
    std::vector<Transaction> mTransactions;
    int mId;
};

#endif // CUSTOMER_H

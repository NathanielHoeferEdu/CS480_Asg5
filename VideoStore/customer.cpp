//==============================================================================
// CS 480 - Video Store
//==============================================================================
/*
    File: movie.h
    Author: Nathaniel Hoefer
    Student ID: X529U639
    Class: CS480 - Spring 2018
    Date: 4/28/2018

******************************************************************************/

#include <vector>
#include <iostream>
#include "customer.h"
#include "transaction.h"
#include "statement.h"

Customer::Customer(int id) : mId(id)
{
    mTransactions = std::vector<Transaction>();
}

void Customer::printStatement()
{
    Statement statement = Statement(mTransactions);
    std::cout << "Customer " << mId << "'s Statement" << std::endl;
    statement.printStatement();
}

void Customer::addTransaction(Transaction &transaction)
{
    mTransactions.push_back(transaction);
}

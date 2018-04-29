//==============================================================================
// CS 480 - Video Store
//==============================================================================
/*
    File: transaction.h
    Author: Nathaniel Hoefer
    Student ID: X529U639
    Class: CS480 - Spring 2018
    Date: 4/28/2018

******************************************************************************/

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <vector>
#include "movie.h"

class Transaction
{
public:
    Transaction(std::vector<Movie*> movies);
    ~Transaction();

    /**
     * @brief Adds an additional movie to the transaction
     * @param movie
     */
    void addMovie(Movie *movie);

    /**
     * @brief Returns a copy of all of the current movies within the transaction
     * @return Movies in transaction
     */
    std::vector<Movie*> getMovies();

    /**
     * @brief Removes the movie based on matching id's. If movie doesn't exist within transaction, this method is simply a no-op
     * @param movie
     */
    void removeMovie(Movie *movie);

private:
    std::vector<Movie*> mMovies;
};

#endif // TRANSACTION_H

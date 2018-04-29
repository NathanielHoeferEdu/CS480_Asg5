//==============================================================================
// CS 480 - Video Store
//==============================================================================
/*
    File: transaction.cpp
    Author: Nathaniel Hoefer
    Student ID: X529U639
    Class: CS480 - Spring 2018
    Date: 4/28/2018

******************************************************************************/

#include "transaction.h"

Transaction::Transaction(std::vector<Movie *> movies) : mMovies(movies)
{
    // Intentionally empty
}

Transaction::~Transaction()
{
    for (int i = 0; i < (int)mMovies.size(); i++) {
        delete mMovies[i];
    }
}

void Transaction::addMovie(Movie *movie)
{
    mMovies.push_back(movie);
}

std::vector<Movie *> Transaction::getMovies()
{
    return mMovies;
}

void Transaction::removeMovie(Movie *movie)
{
    int id = movie->getId();
    for (int i = 0; i < (int)mMovies.size(); i++) {
        if (mMovies[i]->getId() == id) {
            delete mMovies[i];
            mMovies.erase(mMovies.begin() + i);
            return;
        }
    }
}

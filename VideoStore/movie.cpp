//==============================================================================
// CS 480 - Video Store
//==============================================================================
/*
    File: movie.cpp
    Author: Nathaniel Hoefer
    Student ID: X529U639
    Class: CS480 - Spring 2018
    Date: 4/28/2018

******************************************************************************/

#include "movie.h"

const double Movie::PRICE = 0.99;
const int Movie::RENTER_POINTS = 0;
const double NewMovie::NEW_PRICE = 2.99;
const int NewMovie::NEW_RENTER_POINTS = 10;

Movie::Movie(int id, std::string title, int rentDays) : mId(id), mTitle(title), mRentDays(rentDays)
{
    // Intentionally empty
}

Movie::~Movie()
{
    // Intentionally empty
}

double Movie::getPrice()
{
    return PRICE;
}

int Movie::getRenterPoints()
{
    return RENTER_POINTS;
}

int Movie::getId()
{
    return mId;
}

std::string Movie::getTitle()
{
    return mTitle;
}

int Movie::getRentDays()
{
    return mRentDays;
}

void Movie::setRentDays(int days)
{
    mRentDays = days;
}

RegularMovie::RegularMovie(int id, std::string title, int rentDays) : Movie(id, title, rentDays)
{
    // Intentionally empty
}

RegularMovie::~RegularMovie()
{
    // Intentionally empty
}

ChildrenMovie::ChildrenMovie(int id, std::string title, int rentDays) : Movie(id, title, rentDays)
{
    // Intentionally empty
}

ChildrenMovie::~ChildrenMovie()
{
    // Intentionally empty
}

NewMovie::NewMovie(int id, std::string title, int rentDays) : Movie(id, title, rentDays)
{
    // Intentionally empty
}

NewMovie::~NewMovie()
{
    // Intentionally empty
}

double NewMovie::getPrice()
{
    return NEW_PRICE;
}

int NewMovie::getRenterPoints()
{
    return NEW_RENTER_POINTS;
}

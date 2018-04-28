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

#ifndef MOVIE_H
#define MOVIE_H

#include <string>

class Movie
{
private:
    static const double PRICE;
    static const int RENTER_POINTS;

public:

    Movie(int id, std::string title, int rentDays);
    virtual ~Movie();

    /**
     * @return Price of movie
     */
    virtual double getPrice();

    /**
     * @return Renter points
     */
    virtual int getRenterPoints();

    /**
     * @return ID of movie
     */
    virtual int getId();

    /**
     * @return Title of movie
     */
    virtual std::string getTitle();

    /**
     * @return Days of rent
     */
    virtual int getRentDays();

    /**
     * @brief Set the number of days to rent
     * @param number of days
     */
    virtual void setRentDays(int days);

private:
    int mId;
    std::string mTitle;
    int mRentDays;
};


class RegularMovie: public Movie {
public:
    RegularMovie(int id, std::string title, int rentDays);
    ~RegularMovie();
};

class ChildrenMovie: public Movie {
public:
    ChildrenMovie(int id, std::string title, int rentDays);
    ~ChildrenMovie();
};

class NewMovie: public Movie {
private:
    static const double NEW_PRICE;
    static const int NEW_RENTER_POINTS;

public:
    NewMovie(int id, std::string title, int rentDays);
    ~NewMovie();

    /**
     * @return Price of movie
     */
    double getPrice();

    /**
     * @return Renter points
     */
    int getRenterPoints();
};
#endif // MOVIE_H

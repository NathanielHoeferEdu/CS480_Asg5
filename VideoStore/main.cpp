#include <iostream>
#include <vector>
#include <string>
#include "movie.h"
#include "transaction.h"
#include "customer.h"

int main()
{
    // Prefill movies for example transaction
    std::vector<Movie *> first_movies;
    first_movies.push_back(new NewMovie(1, "Star Wars", 2));
    first_movies.push_back(new RegularMovie(2, "Titanic", 1));
    first_movies.push_back(new ChildrenMovie(3, "Spongebob", 3));
    Transaction first_transaction(first_movies);
//    std::vector<Movie *> second_movies;
//    second_movies.push_back(new NewMovie(1, "Star Wars", 2));
//    Transaction second_transaction(second_movies);

    Customer customer = Customer(1);
    customer.addTransaction(first_transaction);
//    customer.addTransaction(second_transaction);
    customer.printStatement();

    // Delete movies
    for (int i = 0; i < (int)first_movies.size(); i++) {
        delete first_movies[i];
    }

    return 0;
}

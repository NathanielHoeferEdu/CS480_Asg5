#include <iostream>
#include <vector>
#include <string>
#include "movie.h"
#include "transaction.h"
#include "customer.h"

int main()
{
    // Prefill movies for example transaction
    std::vector<Movie *> movies;
    movies.push_back(new NewMovie(1, "Star Wars", 2));
    movies.push_back(new RegularMovie(2, "Titanic", 1));
    movies.push_back(new ChildrenMovie(3, "Spongebob", 3));
    movies.push_back(new NewMovie(4, "Star Trek", 2));
    Transaction transaction(movies);

    // Print Customer's Statement
    Customer customer = Customer(1);
    customer.addTransaction(transaction);
    customer.printStatement();

    // Delete movies
    for (int i = 0; i < (int)movies.size(); i++) {
        delete movies[i];
    }

    return 0;
}

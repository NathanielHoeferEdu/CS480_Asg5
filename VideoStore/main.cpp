#include <iostream>
#include <vector>
#include <string>
#include "movie.h"
#include "statement.h"

int main()
{
    // Prefill movies for example transaction
    std::vector<Movie *> movies;
    movies.push_back(new NewMovie(1, "Star Wars", 2));
    movies.push_back(new RegularMovie(2, "Titanic", 1));
    movies.push_back(new ChildrenMovie(3, "Spongebob", 3));

    Statement statement = Statement(movies);
    statement.printStatement();

    for (int i = 0; i < (int)movies.size(); i++) {
        delete movies[i];
    }

    return 0;
}

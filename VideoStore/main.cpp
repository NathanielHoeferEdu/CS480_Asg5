#include <iostream>
#include <vector>
#include <string>
#include "movie.h"

int main()
{
    std::vector<Movie*> movies;
    movies.push_back(new NewMovie(1, "Star Wars", 2));
    movies.push_back(new RegularMovie(2, "Titanic", 1));
    movies.push_back(new ChildrenMovie(3, "Spongebob", 3));

    for (int i = 0; i < (int)movies.size(); i++) {
        std::cout << movies[i]->getPrice() << ", ";
        std::cout << movies[i]->getRenterPoints() << ", ";
        std::cout << movies[i]->getId() << ", ";
        std::cout << movies[i]->getTitle() << ", ";
        std::cout << movies[i]->getRentDays();
        std::cout << std::endl;
    }

    for (int i = 0; i < (int)movies.size(); i++) {
        delete movies[i];
    }

    return 0;
}

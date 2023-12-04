//
// Created by Miguel Salvador on 12/3/23.
//

#ifndef MOVIEDATABASEPROJECT_MOVIE_H
#define MOVIEDATABASEPROJECT_MOVIE_H

#include <iostream>
#include "People.h"

class Movie {
private:
    std::string title;
    int releaseYear;
    std::string genre;
    double rating;
    Director director;
    Actor actor;

public:
    Movie (const std::string& t, int year, const std::string& g, double r,
           const std::string& directorName, int directorBirthYear, const std::string& actorName, int actorBirthYear);
};


#endif //MOVIEDATABASEPROJECT_MOVIE_H

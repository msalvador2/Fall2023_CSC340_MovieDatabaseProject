//
// Created by Miguel Salvador on 12/3/23.
//

#include "Movie.h"

Movie::Movie(const std::string &t, int year, const std::string &g, double r, const std::string &directorName,
             int directorBirthYear, const std::string &actorName, int actorBirthYear)
             : title(t), releaseYear(year), genre(g), rating(r),
               director(directorName, directorBirthYear),
               actor(actorName, actorBirthYear) {}

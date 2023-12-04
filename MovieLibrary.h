//
// Created by Miguel Salvador on 12/3/23.
//

#ifndef MOVIEDATABASEPROJECT_MOVIELIBRARY_H
#define MOVIEDATABASEPROJECT_MOVIELIBRARY_H

#include "LinkedList.h"
#include "Movie.h"

class MovieLibrary {
private:
    LinkedList<Movie> movieList;
    LinkedList<Director> directorList;
    LinkedList<Actor> actorList;

public:
    MovieLibrary();

    //  Setters
    void setMovieList(const LinkedList<Movie> &movieList);
    void setDirectorList(const LinkedList<Director> &directorList);
    void setActorList(const LinkedList<Actor> &actorList);

    //  Getters
    const LinkedList<Movie> &getMovieList() const;
    const LinkedList<Director> &getDirectorList() const;
    const LinkedList<Actor> &getActorList() const;
};


#endif //MOVIEDATABASEPROJECT_MOVIELIBRARY_H

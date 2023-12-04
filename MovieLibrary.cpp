//
// Created by Miguel Salvador on 12/3/23.
//

#include "MovieLibrary.h"

MovieLibrary::MovieLibrary() : movieList(), directorList(), actorList(){}

void MovieLibrary::setMovieList(const LinkedList<Movie> &movieList) {
    MovieLibrary::movieList = movieList;
}

void MovieLibrary::setDirectorList(const LinkedList<Director> &directorList) {
    MovieLibrary::directorList = directorList;
}

void MovieLibrary::setActorList(const LinkedList<Actor> &actorList) {
    MovieLibrary::actorList = actorList;
}

const LinkedList<Movie> &MovieLibrary::getMovieList() const {
    return movieList;
}

const LinkedList<Director> &MovieLibrary::getDirectorList() const {
    return directorList;
}

const LinkedList<Actor> &MovieLibrary::getActorList() const {
    return actorList;
}

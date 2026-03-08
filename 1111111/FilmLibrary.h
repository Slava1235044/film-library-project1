#ifndef FILMLIBRARY_H
#define FILMLIBRARY_H

#include <vector>
#include "Film.h"

class FilmLibrary
{
private:
    std::vector<Film> films;

public:
    void addFilm(const Film& film);
    void removeFilm(std::string title);
    void findFilm(std::string title);
    void showFilms();

    void sortByYear();
    void sortByTitle();
    void sortByRating();
};

#endif
#include "FilmLibrary.h"
#include <algorithm>
#include <iostream>

void FilmLibrary::addFilm(const Film& film)
{
    films.push_back(film);
}

void FilmLibrary::removeFilm(std::string title)
{
    auto it = std::remove_if(films.begin(), films.end(),
        [title](Film& f) {return f.getTitle() == title;});

    if (it != films.end())
    {
        films.erase(it, films.end());
        std::cout << "Фильм удален" << std::endl;
    }
    else
    {
        std::cout << "Фильм не найден" << std::endl;
    }
}

void FilmLibrary::findFilm(std::string title)
{
    auto it = std::find_if(films.begin(), films.end(),
        [title](Film& f) {return f.getTitle() == title;});

    if (it != films.end())
    {
        it->printInfo();
    }
    else
    {
        std::cout << "Фильм не найден" << std::endl;
    }
}

void FilmLibrary::showFilms()
{
    for (const Film& f : films)
    {
        f.printInfo();
    }
}

void FilmLibrary::sortByYear()
{
    std::sort(films.begin(), films.end(),
        [](Film& a, Film& b) {return a.getYear() < b.getYear();});
}

void FilmLibrary::sortByTitle()
{
    std::sort(films.begin(), films.end(),
        [](Film& a, Film& b) {return a.getTitle() < b.getTitle();});
}

void FilmLibrary::sortByRating()
{
    std::sort(films.begin(), films.end(),
        [](Film& a, Film& b) {return a.getRating() > b.getRating();});
}
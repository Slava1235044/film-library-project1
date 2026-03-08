#include "Film.h"

Film::Film()
{
    title = "";
    year = 0;
    rating = 0;
}

Film::Film(std::string title, int year, double rating)
{
    this->title = title;
    this->year = year;
    this->rating = rating;
}

std::string Film::getTitle() const
{
    return title;
}

int Film::getYear() const
{
    return year;
}

double Film::getRating() const
{
    return rating;
}

void Film::setTitle(std::string t)
{
    title = t;
}

void Film::setYear(int y)
{
    year = y;
}

void Film::setRating(double r)
{
    rating = r;
}

void Film::printInfo() const
{
    std::cout << "Название " << title << " Год " << year << " Рейтинг " << rating << std::endl;
}
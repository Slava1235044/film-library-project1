#ifndef FILM_H
#define FILM_H

#include <string>
#include <iostream>

class Film
{
private:
    std::string title;
    int year;
    double rating;

public:
    Film();
    Film(std::string title, int year, double rating);

    std::string getTitle() const;
    int getYear() const;
    double getRating() const;

    void setTitle(std::string t);
    void setYear(int y);
    void setRating(double r);

    void printInfo() const;
};

#endif
#include <iostream>
#include "FilmLibrary.h"

int main()
{
    FilmLibrary library;

    int choice;

    while (true)
    {
        std::cout << "1 Добавить фильм" << std::endl;
        std::cout << "2 Удалить фильм" << std::endl;
        std::cout << "3 Найти фильм" << std::endl;
        std::cout << "4 Показать все фильмы" << std::endl;
        std::cout << "5 Сортировать по году" << std::endl;
        std::cout << "6 Сортировать по названию" << std::endl;
        std::cout << "7 Сортировать по рейтингу" << std::endl;
        std::cout << "0 Выход" << std::endl;

        std::cin >> choice;

        if (choice == 0)
        {
            break;
        }

        if (choice == 1)
        {
            std::string title;
            int year;
            double rating;

            std::cout << "Название ";
            std::cin >> title;

            std::cout << "Год ";
            std::cin >> year;

            std::cout << "Рейтинг ";
            std::cin >> rating;

            Film film(title, year, rating);
            library.addFilm(film);
        }

        if (choice == 2)
        {
            std::string title;
            std::cout << "Введите название ";
            std::cin >> title;
            library.removeFilm(title);
        }

        if (choice == 3)
        {
            std::string title;
            std::cout << "Введите название ";
            std::cin >> title;
            library.findFilm(title);
        }

        if (choice == 4)
        {
            library.showFilms();
        }

        if (choice == 5)
        {
            library.sortByYear();
        }

        if (choice == 6)
        {
            library.sortByTitle();
        }

        if (choice == 7)
        {
            library.sortByRating();
        }
    }

    return 0;
}
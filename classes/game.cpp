#include <iostream>
#include <vector>

#include "game.hpp"

Game::Game(std::string new_title, std::string new_developer, std::vector<std::string> new_genre, double new_price)
    : title(new_title), developer(new_developer), genre(new_genre), price(new_price) {}

Game::~Game() {
    std::cout << "Goodbye " << title << "\n";
}


std::string Game::get_title()
{
    return title;
}
std::string Game::get_developer() {
    return developer;
}
double Game::get_price()
{
    return price;
}
std::vector<std::string> Game::get_genre()
{
    return genre;
}

void Game::print_genres() {
    std::cout << "Genres: ";
    for(int i=0; i < genre.size()-1; i++) {
        std::cout << genre[i] << ", ";
    }
    std::cout << genre[genre.size()-1] << "\n";
}

void Game::get_info()
{
    std::cout << title << ", developed by " 
    << developer << ".\nPriced at SGD " << price << ".\n";
}

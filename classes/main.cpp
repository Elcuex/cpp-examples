#include <iostream>

#include "game.hpp"


int main() {
    Game MHRise("Monster Hunter Rise", "Capcom", {"Action","Online Co-Op","RPG","Hunting"}, 54.00);
    Game DRG("Deep Rock Galactic", "Ghost Ship Games", {"FPS","Shooter","PvE","Online Co-Op","Class Based"}, 26.00);
    Game SWJS("Star Wars Jedi: Survivor", "Respawn", {"Action","Adventure","Souls-like","Singleplayer","Third Person"}, 84.90);

    MHRise.get_info();
    MHRise.print_genres();
    std::cout << "\n";
    DRG.get_info();
    DRG.print_genres();
    std::cout << "\n";
    SWJS.get_info();
    SWJS.print_genres();
    std::cout << "\n";
}
#include <string>
#include <vector>

class Game {

    std::string title;
    std::string developer;
    std::vector<std::string> genre = {"123"};
    double price;

    public:
        Game(std::string new_title, std::string new_developer, std::vector<std::string> new_genre, double new_price);
        ~Game();

        void print_genres();
        void get_info();
        std::string get_title();
        std::string get_developer();
        double get_price();
        std::vector<std::string> get_genre();
};


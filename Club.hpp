#ifndef _CLUB_H_
#define _CLUB_H_
#include <string>
#include <vector>
#include "Footballer.hpp"

class Club {
private:    
   std::vector<Footballer> club_players{};
   
public:
    void display_vec();
    bool add_footballer(std::string name, int overall, int apps, int goals, int assists, double average_rating);
    bool change_overall(std::string name, int new_overall);
    bool incrementing_apps(std::string name);
    bool erase_footballer(std::string name, int overall);

    Club();
    ~Club();

};

#endif // _CLUB_H_

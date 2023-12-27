#include "Club.hpp"
#include "Footballer.hpp"
#include <iostream>
#include <vector>


void Club::display_vec() {
    if (club_players.size() == 0) {
       std::cout << "No players in club" << std::endl; 
    } else {
      for (Footballer &footballer: club_players) 
         footballer.display_footballer();
    }
}

bool Club::add_footballer(std::string name, int overall, int apps, int goals, int assists, double average_rating) {
    for (Footballer &footballer: club_players) {
        if (footballer.get_name() == name && footballer.get_overall() == overall)
            return false;
    }  
    
    Footballer new_footballer {name, overall, apps, goals, assists, average_rating};
    club_players.push_back(new_footballer);
    return true;
}
    
    bool Club::incrementing_apps(std::string name) {
        for (Footballer &footballer: club_players)
        if (footballer.get_name()==name) {
            footballer.increment_apps();
            return true; 
        }
   return false;
}

    bool Club::erase_footballer(std::string name, int overall) {
         for (int i{1}; i<club_players.size(); ++i) {
            if (club_players[i].get_name() == name && club_players[i].get_overall() == overall) {
                 club_players.erase (club_players.begin() + i);
                 i = 1;
                 return true;
            }
    }    
             
     return false;        
}
    
    
bool Club::change_overall(std::string name, int new_overall) {
     for (Footballer &footballer: club_players)
         if (footballer.get_name() == name) {
            footballer.set_overall(new_overall);
            return true;
     } 
     
   return false;
}    
    




Club::Club() {
    
}

Club::~Club() {
    
}


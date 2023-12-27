#include <iostream>
#include <memory>
#include "Club.hpp"
#include "Club.cpp"
#include "Footballer.hpp"
#include "Footballer.cpp"

void adding_footballer(Club &c, std::string name, int overall, int apps, int goals, int assists, double average_rating);
void increment_apps_check(Club &c, std::string name);
void increment_goals_check(Club &c, std::string name);
void increment_assists_check(Club &c, std::string name);
void erasing_footballer(Club &c, std::string name, int overall);
void changing_overall(Club &c, std::string name, int change);

void adding_footballer(Club &c, std::string name, int overall, int apps, int goals, int assists, double average_rating) {
 if (overall<=0 || overall>100) 
      std::cout << "Cannot add " << name << ". Overall of " << overall << " is not in range (1-100)" << std::endl;
  else if (apps<0) 
      std::cout << "Appearances cannot be negative" << std::endl;
  
  else if (goals<0) 
      std::cout << "Goals cannot be negative" << std::endl;
  
  else if (assists<0) 
      std::cout << "Assists cannot be negative" << std::endl; 
  
  else if (average_rating<=0.00 || average_rating>10.00) 
      std::cout << "Average rating cannot be negative, 0, or over 10.00" << std::endl;  
  else {
       if (c.add_footballer(name, overall, apps, goals, assists, average_rating)) {
       std::cout << name << " added" << std::endl;
    } else {
        std::cout << name << " already exists " << std::endl;
  }    
}
  
}

void increment_apps_check(Club &club, std::string name) {
    if (club.incrementing_apps(name)) 
       std::cout << "Appearances for " << name << " incremented" << std::endl;
     else 
       std::cout << name << " not found" << std::endl;
    
}

void erasing_footballer (Club &c, std::string name, int overall) {
     if (c.erase_footballer(name, overall)) 
        std::cout << name << " removed from club" << std::endl;
     else
        std::cout << name << " not found" << std::endl; 
}

void changing_overall(Club &c, std::string name, int new_overall) {
 if (new_overall>100 || new_overall<0) {
    std::cout << "Cannot change " << name << "'s overall. Overall of " << new_overall << " is not in range (1-100)" << std::endl;  
 } else {
    if (c.change_overall(name, new_overall)) 
       std::cout << name << "'s overall changed" << std::endl;
    else
       std::cout << name << " not found" << std::endl; 
 }      
}




int main() {
    Club empoli;
    
    adding_footballer(empoli, "Antonelli", 74, 150, 12, 40, 8.20);
    adding_footballer(empoli, "Krunic", 79, 300, 70, 80, 8.50);
    adding_footballer(empoli, "Di Lorenzo", 76, 250, 37, 60, 8.30);
    adding_footballer(empoli, "Bennacer", 83, 300, 90, 100, 8.80);
    adding_footballer(empoli, "Aina", 123, 200, 30, 40, 7.90);
    
    changing_overall(empoli, "Bennacer", -5);
    changing_overall(empoli, "Krunic", 80);
    changing_overall(empoli, "Di Lorenzo", 78);
    
    increment_apps_check(empoli, "Di Lorenzo");
    increment_apps_check(empoli, "Krunic");
    increment_apps_check(empoli, "Caputo");
    
    
    empoli.display_vec();
    
    erasing_footballer(empoli, "Mounie", 70);
    erasing_footballer(empoli, "Bennacer", 82);
    erasing_footballer(empoli, "Bennacer", 83);
    erasing_footballer(empoli, "Krunic", 79);
    erasing_footballer(empoli, "Krunic", 80);
    erasing_footballer(empoli, "Krunic", 79);
    
    changing_overall(empoli, "Antonelli", 72);
   
    empoli.display_vec();
    
    Club torino;
    
    adding_footballer(torino, "Jovic", 90, 250, 200, 60, 8.90);
    adding_footballer(torino, "Lo Celso", 87, 200, 70, 130, 8.70);
    adding_footballer(torino, "Lukic", 77, 300, 15, 30, 8.10);
    adding_footballer(torino, "Lafont", 86, 350, 0, 1, 8.40);
    adding_footballer(torino, "Chiesa", 89, 350, 175, 175, 8.00);
    

}
#include "Footballer.hpp"
#include <iostream>


void Footballer::display_footballer() const {
 std::cout << "Name: " << name << ", Overall: " << overall << ", Appearances: " << apps << ", Goals: " << goals << ", Assists: " << assists << ", Average Rating: " << average_rating << std::endl;
}



Footballer::Footballer(std::string name_val, int overall_val, int apps_val, int goals_val, int assists_val, double average_rating_val) : name{name_val}, overall{overall_val}, apps{apps_val}, goals{goals_val}, assists{assists_val}, average_rating(average_rating_val) {
    
}

Footballer::~Footballer(){
    
}


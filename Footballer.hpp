#ifndef _FOOTBALLER_H_
#define _FOOTBALLER_H_
#include <string>

class Footballer {
private:
     std::string name;
     int overall;
     int apps;
     int goals;
     int assists;
     double average_rating;
    
public:
    std::string get_name() const {
        return name;
    } 
    
    void set_overall(int new_overall) {
        overall = new_overall;
    }
    
    int get_overall() const {
        return overall;
    }
    
    void display_footballer() const;
    
    int increment_apps() {
     return ++apps; 
}
    
    Footballer(std::string name_val = "Vacant", int overall_val = 50, int apps_val = 0, int goals_val = 0, int assists_val = 0, double average_rating_val = 6.00);
    ~Footballer();

};

#endif // _FOOTBALLER_H_

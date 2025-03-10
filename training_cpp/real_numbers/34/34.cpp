#include <iostream>

int main() {

    double V_calm = 0;
    double U_river = 0;
    
    std::cout << "Enter speed of a boat in still water and river flow speed: \n";
    std::cin >> V_calm >> U_river;

    // exception for check non-negative speeds
    if(V_calm <= 0 || U_river < 0) {
        std::cout << "Error: Speeds must be non-negative! \n";
        return 1;
    }

    // exception (V < U)
    if(V_calm < U_river) { 
        std::cout << "Invalid values!! \n";
        return 1;
    }

    // T1
    double boat_travel_time_on_the_lake = 0; 
    // T2
    double time_against_the_current = 0;

    std::cout << "Enter boat travel time on the lake and time against the current: \n";
    std::cin >> boat_travel_time_on_the_lake >> time_against_the_current;

    // exception for check non-negative times
    if(boat_travel_time_on_the_lake < 0 || time_against_the_current < 0) {
        std::cout << "Error: Times must be non-negative! \n";
        return 1;
    }
    //calculating against speed
    double V_against = V_calm - U_river;
      
    // calculating path
    double S1 = V_calm * boat_travel_time_on_the_lake;    
    double S2 = U_river * time_against_the_current;   
    double S = S1 + S2;

    std::cout << "The path traveled: \t" << S << "\n"; 

    return 0;
}

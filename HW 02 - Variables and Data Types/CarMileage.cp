#include <iostream>

/* CarMilage.cp - With the given the vehicles tank capacity and city/highway mpg, deteremine the number of miles the car can potentially drive.
*
* Author: Matt Sheehan
*/
int main () {
     int vehicle_tank_capacity = 20;
     double vehicle_city_mpg = 23.5;
     double vehicle_highway_mpg = 28.9;
     double number_of_miles_with_city_mpg = (vehicle_tank_capacity * vehicle_city_mpg);
     double number_of_miles_with_highway_mpg = (vehicle_tank_capacity * vehicle_highway_mpg);
     
     std::cout << "Total City Miles: " << number_of_miles_with_city_mpg << "\n";
     std::cout << "Total Highway Miles: " << number_of_miles_with_highway_mpg << "\n";

     system("pause");
     return 0;   
}

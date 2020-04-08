 #include <iostream>
 using namespace std;

/*
 * CarMileage.cpp - Calculate total distance potential of a car in the city 
 * and on the highway.
 * Author: Matthew Sheehan
 * Module: 2
 * Project: Homework 2, Project 2
 * Description: Given a tank capacity and average city/highway mpg, calculate
 * the total distance the vehicle can travel.
 * 
 * Algorithm:
 * 
 * 1. Create a variable of type int called tank_capacity and initialize it to
 * 20, as our vehicle's tank is caoable of storing 20 gallons of gas.
 *
 * 2. Create two variables of type double, one called city_mpg, and the other
 * called highway_mpg. city_mpg will be initialized to 23.5 and highway_mpg
 * will be initialized to 28.9. 
 * 
 * 3. Create two variables called potential_city_miles, and potential_highway_miles.
 * These variables will be initialized to their respective variables created in
 * step two, multiplied by the tank_capacity (I.e. potential_city_miles = city_mpg *
 * tank_capcity).
 *
 * 4. Print the total potential miles for both the city and the highway to the user.
 *
 */ 
 int main ( ) {
     int tank_capacity  = 20;
     double city_mpg    = 23.5;
     double highway_mpg = 28.9;
     double potential_city_miles    = ( tank_capacity * city_mpg );
     double potential_highway_miles = ( tank_capacity * highway_mpg );
     
     cout << "Total City Miles: "    << potential_city_miles    << "\n;
     cout << "Total Highway Miles: " << potential_highway_miles << "\n;

     system("pause");
     return 0;   
}// End main.

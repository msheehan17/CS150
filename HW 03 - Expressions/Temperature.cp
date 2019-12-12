/* Temperature.cpp - 
 * Author: Matthew Sheehan
 * Project: HW 3, Project 2
 * Description: This program will convert farenheit temperatures to those in
 * celcius.
 *
 * Algortihm: 
 *
 * 1. Prompt the user to enter a temperature in farenheit.  Because the 
 * temperature will be stored as an integer, the user will need to enter the 
 * temperature as a whole number.
 *
 * 2. To determine the temperature in celcius, we must use the formula 
 * Celcius = 5 (farenheit - 32) / 9.  Celcius can be stored as a double, so
 * type casting must be performed on the formula in order to avoid integer 
 * division complicating the formula.
 *
 * 3. Print the results to the user.
 */
 
 # include <iostream>
 
 using namespace std;
 
 int main()
 {
     int farenheit;
     double celcius;
     
     cout << "Hello user, please enter a temperature in farenheit (be sure" << endl;
     cout << "to use whole numbers): ";
     
     cin  >> farenheit;
     
     cout << endl;
     
     // Convert farenheit temperature to celcius.
     celcius = (double) (5.0 * (farenheit - 32.0) / 9.0);
     
     cout << "The temperature you entered, in celcius, is: " << celcius; 
     cout << " degrees." << endl; 
     
     system("pause");
     return 0;      
 }

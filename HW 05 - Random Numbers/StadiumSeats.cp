/* Stadium_Seats.cpp - Calculates total of all seats sold in the stadium.
 * Author: Matthew Sheehan
 * Project: HW5, Part 1.
 *
 * Algorithm:
 *
 * 1. Prompt the user to enter the number of class A, B, and C seats sold in
 * the stadium.
 *
 * 2. Multiply the number of seats sold by their respective seat price.
 * 
 * 3. Add the total for class A, B, and C seats, and print the breakdown, plus 
 * sum to the user.
 */
 
 # include <iostream>
 # include <iomanip> // Needed for formatting the price breakdown.
 # include <string>  // A border for the formatted printout.
 using namespace std;
 
 int main()
{
     // Ticket price constants.
     const double CLASS_A_SEAT_PRICE = 15.00;
     const double CLASS_B_SEAT_PRICE = 12.00;
     const double CLASS_C_SEAT_PRICE =  9.00;
     
     // Instance variables.
     int    class_a_seats, class_b_seats, class_c_seats;
     double class_a_total, class_b_total, class_c_total, sum;
     string border; // A border for the formatted printout.
     
     
     // Prompt user for seat breakdown.
     cout << "Hello, please enter the number of class A seats sold: ";
     cin  >> class_a_seats;
     cout << endl;
     
     cout << "Now please enter the number of class B seats sold: ";
     cin  >> class_b_seats;
     cout << endl;
     
     cout << "Finally, enter the number of class C seats sold: ";
     cin  >> class_c_seats;
     cout << endl;
     
     // Calculate the day's sales total.
     class_a_total = (double)(class_a_seats * CLASS_A_SEAT_PRICE); 
     class_b_total = (double)(class_b_seats * CLASS_B_SEAT_PRICE); 
     class_c_total = (double)(class_c_seats * CLASS_C_SEAT_PRICE);
     sum = (class_a_total + class_b_total + class_c_total);
     
     // Print breakdown to user.      
     cout << "SALE BREAKDOWN:" << endl;
     
     border.assign(40, '_');
     
     cout << border << endl << endl;
     
     cout << left  << setw(20) << "Class A seats sold: " 
          << right << setw(6)  << class_a_seats << setw(11) << " Total: $" 
          << setw(10) << fixed << setprecision(2) << class_a_total << endl;
          
     cout << left  << setw(20) << "Class B seats sold: " 
          << right << setw(6)  << class_b_seats << setw(11) << " Total: $" 
          << setw(10) << fixed << setprecision(2) << class_b_total << endl;
          
     cout << left  << setw(20) << "Class C seats sold: " 
          << right << setw(6)  << class_c_seats << setw(11) << " Total: $" 
          << setw(10) << fixed << setprecision(2) << class_c_total << endl;
          
     cout << endl << "Total sales: $" << sum << endl << endl;
          
     system("pause");
     return 0;
} // End main.
     
 

/* Floor_to_Ceiling.cpp 
 * Author: Matthew Sheehan
 * Project: HW 4, Project 2
 * Description: Based on the user's input, display the input rounded up, rounded
 * down, and the absolute value of that number.
 *
 * Algorithm: 
 *
 * 1. Declare variables that will store the user's number, the rounded-up number,
 * rounded-down number, and the absolute value of the number.
 *
 * 2. Prompt the user to enter their number (specify the number must be a decimal).
 *
 * 3. Assign the rounded up number variable equal to the ceil function, with the
 * user's number entered as the argument.
 * 
 * 4. Assign the rounded down number variable equal to the floor functions, with
 * the user's number entered as the argument.
 *
 * 5. Assign the absolute value variable equal to the absolute value function,
 * with the user's number entered as the argument. To prevent possible logical
 * errors, type cast the converted value as an integer.
 *
 * 6. Echo the input to the user, then output the user's converted values to the screen.
 *
 */
 
 # include <iostream>
 # include <cmath>   // Included to use ceil, floor, and abs functions.
 
 using namespace std;
 
 int main ()
 {
     double user_number; // Stores the user's number.
     double ceiling_val; // The user's number, rounded up.
     double floor_val;   // The user's number, rounded down.
     int absolute_val;   // The absolute value of the user's number.
     
     // Prompt user to enter their number.
     cout << "Hello! Please enter a number with a decimal: ";
     cin  >> user_number;
     cout << endl;
     
     // Convert the numbers.
     ceiling_val  = ceil(user_number);
     floor_val    = floor(user_number);
     absolute_val = (int) abs(user_number);
     
     // Echo the input to the user.
     cout << "You entered " << user_number << "." << endl << endl;
     
     // Output the converted numbers to the user.
     cout << "Your number rounded up is: "   << ceiling_val << endl;
     cout << "Your number rounded down is: " << floor_val   << endl;
     cout << "The absolute value of your number is: " << absolute_val << endl << endl;
     
     system("pause");
     return 0;
 }

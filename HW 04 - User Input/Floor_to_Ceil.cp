 #include < iostream >
 #include < cmath >   // Included to use ceil, floor, and abs functions.
 using namespace std;
 
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
 int main ( ) {
     double user_number, ceiling_val, floor_val;
     int absolute_val; 
     
     // Prompt user to enter their number.
     cout << "Hello! Please enter a number with a decimal: ";
     cin  >> user_number;
     cout << "\n";
     
     // Convert the numbers.
     ceiling_val  = ceil  ( user_number );
     floor_val    = floor ( user_number );
     absolute_val = ( int ) abs ( user_number) ;
     
     // Echo the input to the user.
     cout << "You entered " << user_number << "." << "\n\n";
     
     // Output the converted numbers to the user.
     cout << "Your number rounded up is: "   << ceiling_val << "\n";
     cout << "Your number rounded down is: " << floor_val   << "\n";
     cout << "The absolute value of your number is: " << absolute_val << "\n\n";
     
     system("pause");
     return 0;
 }

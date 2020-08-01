 #include <iostream>
 #include <cmath>

/* Floor_to_Ceil.cp - Deteremines the floor, ceiling, and absolute value of a number given by the user.
 *
 * Author: Matt Sheehan
 */
 int main () {
     double user_number;
     double ceiling_of_user_number;
     double floor_of_user_number;
     int absolute_value_of_user_number;
     
     std::cout << "Hello! Please enter a number with a decimal: ";
     std::cin  >> user_number;
     std::cout << "\n";
     
     ceiling_of_user_number = ceil(user_number);
     floor_of_user_number = floor(user_number);
     absolute_value_of_user_number = (int) std::abs(user_number);
     
     std::cout << "You entered " << user_number << ".\n\n";
     
     std::cout << "Your number rounded up is: " << ceiling_of_user_number << "\n";
     std::cout << "Your number rounded down is: " << floor_of_user_number << "\n";
     std::cout << "The absolute value of your number is: " << absolute_value_of_user_number << "\n\n";
     
     system("pause");
     return 0;
 }

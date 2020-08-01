 #include <iostream>
 
/* Change.cp - Based on the item price given by the user, determine the change.
 *
 * Author: Matt Sheehan
 */
 int main () {
     int dollar_bill_in_cents = 100;
     int item_price;
     int total_change_to_break_up;
     int quarters_returned;
     int dimes_returned;
     int nickels_returned;
     int pennies_returned;
     
     std::cout << "Hello user, please enter the price of your item: ";
     std::cin  >> item_price;
     std::cout << "\n\n";
     
     total_change_to_break_up = (dollar_bill_in_cents - item_price);
     
     quarters_returned = (total_change_to_break_up / 25);
     total_change_to_break_up = (total_change_to_break_up % 25);
     
     dimes_returned = (total_change_to_break_up / 10);
     total_change_to_break_up = (total_change_to_break_up % 10);
     
     nickels_returned = (total_change_to_break_up / 5);
     total_change_to_break_up = (total_change_to_break_up % 5);
     
     pennies_returned = total_change_to_break_up;
     
     std::cout << "Your change is " << quarters_returned << " quarter(s), " << dimes_returned << " dime(s), " << nickels_returned << " nickel(s), and " <<
     pennies_returned << " pennie(s).\n\n";
     
     system("pause");
     return 0;
 }

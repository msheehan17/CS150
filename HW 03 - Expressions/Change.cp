 #include < iostream >
 using namespace std;
 
/* Change.cpp - 
 * Author: Matthew Sheehan
 * Project: HW 3, Project 3
 * Description: Determine change based on item price, and payment of $1.00
 *
 * Algortihm: 
 *
 * 1. Prompt the user to enter the cost of their item. Because the user will 
 * only be able to pay with $1.00, we will subtract the item price (which is
 * in cents) from 100 to determine the amount of change we will need to give
 * back to the user.
 *
 * 2. The user's change will be paid back in terms of quarters, dimes, and nickels.
 * In order determine how many quarters to give back, we will need to use integer
 * division to see how many times 25 (the quarter in cents) goes into the change
 * amount.  Because there can still be some change remaining after quarters have
 * been given, we will take that remaining amount (determined by using the %) and
 * divide that by 10 to reprsent the dimes.  From the remainder after dimes have
 * been given, we will divide by 5 to determine how many nickels will need to be
 * given back. Since all item prices are in 5-cent increments, we will not need
 * to plan for giving back pennies as change.
 *
 * 3. Print the change total, and how it is broken down in quarters, dimes, and
 * nickels to the user.
 */
 int main ( ) {
     int dollar_bill = 100; // The dollar the user pays with.
     int item_price, change, quarters, dimes, nickels;
     
     cout << "Hello user, please enter the price of your item: ";
     cin  >> item_price;
     cout << "\n";
     
     // Determine change.
     change = ( dollar_bill - item_price );
     
     quarters = ( change / 25 );
     dimes    = ( ( change % 25 ) / 10 );
     nickels  = ( ( ( change % 25 ) % 10 ) / 5 );
     
     cout << "Your change is " << quarters << " quarters, " << dimes;
     cout << " dimes, and "    << nickels  << " nickels."   << endl;
     
     system("pause");
     return 0;
 }

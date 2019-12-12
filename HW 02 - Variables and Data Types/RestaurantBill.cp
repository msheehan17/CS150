/* RestaurantBill.cpp - Calculate a restaurant bill, with tax and tip.
 * Author: Matthew Sheehan
 * Module: 2
 * Project: Homework 2, Project 1
 * Description: The bill will total the purchases, add tax, and add a 15% 
 * tip.
 * 
 * Algorithm:
 * 
 * 1. Create double variables meal_cost, tax_amount, tip_amount, and total_bill. 
 *
 * 2. Set tax amount equal to (meal_cost * .0675), as tax is 6.75%.
 *
 * 3. Set tip amount equal to the ((tax_amount + meal_cost) * .15), as the
 * recommended tip for this program will be 15%.
 * 
 * 4. Set total_bill equal to (tax_amount + meal_cost + tip_amount).
 *
 * 5. Print the cost break down to the user.
 *
 */
 
 #include <iostream>
 
 using namespace std;
 
 int main ()
 {
     double meal_cost  = 44.50;
     double tax_amount = (meal_cost * 0.675);
     double tip_amount = ((meal_cost + tip_amount) * 0.15);
     double total_bill = (meal_cost + tax_amount + tip_amount);
     
     cout << "Hello, your total bill is " << total_bill << endl;
     cout << "Meal Cost: "  << meal_cost  << endl;
     cout << "Tax Amount: " << tax_amount << endl;
     cout << "Tip: "        << tip_amount << endl;
    
     system("pause");
     return 0; 
     
}// End main.
     

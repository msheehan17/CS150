#include <iostream>

/* RestaurantBill.cp - Given the meal cost, determine the tax, tip (20%), and total bill.
*
* Author: Matt Sheehan
*/
int main () {
     double meal_cost = 44.50;
     double meal_tax = (meal_cost * 0.675);
     double tip_amount = ((meal_cost + meal_tax) * 0.20);
     double total_bill = (meal_cost + meal_tax + tip_amount);
     
     std::cout << "Hello, your total bill is $" << total_bill << "\n";
     std::cout << "Meal Cost: $" << meal_cost  << "\n";
     std::cout << "Tax Amount: $" << meal_tax << "\n";
     std::cout << "Tip: $" << tip_amount << "\n";
    
     system("pause");
     return 0;   
}

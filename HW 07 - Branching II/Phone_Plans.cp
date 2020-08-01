#include <iostream>
#include <iomanip>
#include <string>

/* Phone_Plans.cp - Totals phone bill and offers savings dependent on switching plans.
 *
 * Author: Matt Sheehan
 */
int main () {
    const double PACKAGE_A_COST = 39.99;
    const double PACKAGE_B_COST = 59.99;
    const double PACKAGE_C_COST = 69.99;
    const int PACKAGE_A_ALLOTED_MINUTES = 450;
    const int PACKAGE_B_ALLOTED_MINUTES = 900;
    const double PACKAGE_A_ADDITIONAL_MINUTE_COST = 0.45;
    const double PACKAGE_B_ADDITIONAL_MINUTE_COST = 0.40;

    std::string customer_name;
    int minutes_used;
    char package_selected;
    double total_bill;
    double potential_savings;
    
    std::cout << "Hello. Could you please tell me your name?: ";
    getline (std::cin, customer_name);
    std::cout << "\n";
    
    std::cout << "What phone package do you have? (a/b/c): ";
    std::cin >> package_selected;
    std::cout << "\n";
    
    std::cout << "How many minutes have you used this month?: ";
    std::cin >> minutes_used;
    std::cout << "\n";
    
    switch (package_selected) {
       case 'a':
       case 'A':
         minutes_used -= PACKAGE_A_ALLOTED_MINUTES;

         if (minutes_used < 0)
            minutes_used = 0;

         total_bill = PACKAGE_A_COST + (minutes_used * PACKAGE_A_ADDITIONAL_MINUTE_COST);

         std::cout << "Hello " << customer_name << ", your total bill is $" << std::fixed << std::setprecision(2) << total_bill << ".\n\n";
            
         // Calcluate Plan B Savings
         minutes_used -= (PACKAGE_B_ALLOTED_MINUTES - PACKAGE_A_ALLOTED_MINUTES);

         if (minutes_used < 0)
            minutes_used = 0;

         if (total_bill > PACKAGE_B_COST + ( minutes_used * PACKAGE_B_ADDITIONAL_MINUTE_COST)) {
            potential_savings = (total_bill - PACKAGE_B_COST + (minutes_used * PACKAGE_B_ADDITIONAL_MINUTE_COST));
            std::cout << "*You could save $" << potential_savings << " if you switch to plan B.\n";
         }


        // Calcluate Plan C Savings
         if (total_bill > PACKAGE_C_COST) {
            potential_savings = (total_bill - PACKAGE_C_COST);
            std::cout << "*You could save $" << potential_savings << " if you switch to plan C.\n\n";
         } 
       break;
       case 'b':
       case 'B':
         minutes_used -= PACKAGE_B_ALLOTED_MINUTES;

         if (minutes_used < 0)
            minutes_used = 0;

         total_bill = PACKAGE_B_COST + (minutes_used * PACKAGE_B_ADDITIONAL_MINUTE_COST);

         std::cout << "Hello " << customer_name << ", your total bill is $" << std::fixed << std::setprecision(2) << total_bill << ".\n\n";

         if (total_bill > PACKAGE_C_COST) {
            potential_savings = (total_bill - PACKAGE_C_COST);
            std::cout << "*You could save $" << potential_savings << " if you switch to plan C.\n\n";
         } 
       break;
       case 'c':
       case 'C':
            total_bill = PACKAGE_C_COST;
            
            std::cout << "Hello " << customer_name << ", your total bill is $" << std::fixed << std::setprecision(2) << total_bill << ".\n\n";
    }
     
    system("pause");
    return 0;        
}

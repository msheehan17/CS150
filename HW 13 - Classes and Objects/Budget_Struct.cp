 #include <iostream>
 #include <string>
 #include <iomanip>

struct MonthlyBudget {
     double housing_payment;
     double utilities_payment;
     double household_expenses;
     double transportation_costs;
     double food_costs;
     double medical_expenses;
     double insurance_payments;
     double entertainment_spending;
     double clothing_costs;
     double miscellaneous_spending;
 };

// Prototypes
double getAmount(std::string expense);
double getTotal(MonthlyBudget x);
void individualExpense(std::string expense, double budget_amt, double spent_amt);
void printBudgetReport(MonthlyBudget budget, MonthlyBudget spent);

double getAmount(std::string expenseName) {
    double amount_spent;
     
    std::cout << "How much did you spend on " << expenseName << "?: ";
    std::cin >> amount_spent;
 
    while (amount_spent < 0 || amount_spent > 10000) {
        std::cout << "The amount spent on expenses cannot be zero, nor exceed 10,000. Try again: ";
        std::cin >> amount_spent;
    }
    return amount_spent;
 }
 
double getTotal(MonthlyBudget budget) {
    return (budget.housing_payment + budget.utilities_payment + budget.household_expenses + budget.transportation_costs + budget.food_costs + budget.medical_expenses +
            budget.insurance_payments + budget.entertainment_spending + budget.clothing_costs + budget.miscellaneous_spending);
 }
 
void individualExpense(std::string expense, double budget_amount, double spent_amount ) {
    std::cout << std::left << std::setw(24) << (expense + ":")  << std::right << std::fixed << std::setprecision(2) << std::setw(8) <<  budget_amount << std::setw(19) << spent_amount
    << std::setw(18) << (budget_amount - spent_amount) << "\n";
 }
 
void printBudgetReport(MonthlyBudget budget, MonthlyBudget spent) {
    std::cout << std::left << std::setw(22) << " EXPENSE" << std::setw(20) << "BUDGETED AMOUNT" << std::setw(18) << "SPENT AMOUNT" << std::setw(18) << "DIFFERENCE \n\n";
                  
    for (int i = 0; i < 76; i++)
        std::cout << "-";
         
    std::cout << "\n\n";
     
    individualExpense("Housing", budget.housing_payment, spent.housing_payment);
    individualExpense("Utilities", budget.utilities_payment, spent.utilities_payment);
    individualExpense("Household Expenses", budget.household_expenses, spent.household_expenses);
    individualExpense("Transportation", budget.transportation_costs, spent.transportation_costs);
    individualExpense("Food", budget.food_costs, spent.food_costs);
    individualExpense("Medical",  budget.medical_expenses, spent.medical_expenses);
    individualExpense("Insurance", budget.insurance_payments, spent.insurance_payments);
    individualExpense("Entertainment", budget.entertainment_spending, spent.entertainment_spending);
    individualExpense("Clothing", budget.clothing_costs, spent.clothing_costs);
    individualExpense("Miscellaneous", budget.miscellaneous_spending, spent.miscellaneous_spending);
    std::cout << "\n";
    individualExpense("TOTAL", getTotal(budget ), getTotal(spent));
    std::cout << "\n\n";
}
     
/* MonthlyBudget.cpp - Manages a monthly budget for a user.
*
* Author: Matt Sheehan
*/
int main() {
    MonthlyBudget amount_spent;
    MonthlyBudget budget = { 500.00,  // Housing
                             150.00,  // Utilities
                              65.00,  // Household Expenses
                              50.00,  // Transportation
                             250.00,  // Food
                              30.00,  // Medical
                             100.00,  // Insurance
                             150.00,  // Entertainment
                              75.00,  // Clothing
                             50.00}; // Miscellaneous
    
    amount_spent.housing_payment = getAmount("housing");
    amount_spent.utilities_payment = getAmount("utilities");
    amount_spent.household_expenses = getAmount("household expenses");
    amount_spent.transportation_costs = getAmount("transportation");
    amount_spent.food_costs = getAmount("food");
    amount_spent.medical_expenses = getAmount("medical");
    amount_spent.insurance_payments = getAmount("insurance");
    amount_spent.entertainment_spending = getAmount("entertainment");
    amount_spent.clothing_costs = getAmount("clothing" );
    amount_spent.miscellaneous_spending = getAmount("miscellaneous");
    std::cout << "\n\n";
  
    printBudgetReport(budget, amount_spent);
  
    system("pause");
    return 0;
}

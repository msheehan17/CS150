/* MonthlyBudget.cpp - Manages a monthly budget for a user.
 *
 * HW 13, Part 3.
 * 
 * Programmer: Matthew Sheehan
 *
 * 1. The program has hard coded amounts for expesnses, which will be the budget
 * amount the user is supposed to stick to.
 *
 * 2. The program will prompt the user for the amount they actually spent on
 * each expense.
 *
 * 3. Following the user entering all the amounts they spent, the program will 
 * compare the amount spent vs the amout budgeted. If the user spent more than
 * they were allocated, a negative amount will appear. The total difference will
 * be displayed at the bottom.
 *
 */
 
 #include <iostream>
 #include <string>
 #include <iomanip>

 using namespace std;
 
 struct MonthlyBudget{
        
    // Member variables.
    double housing, 
           utilities, 
           household_expenses, 
           transportation, 
           food, 
           medical, 
           insurance, 
           entertainment, 
           clothing, 
           miscellaneous;       
 };
 
 int main(){
     
     double getAmount(string expense);
     double getTotal (MonthlyBudget x);
       void individualExpense(string expense, double budget_amt, double spent_amt);
       void printBudgetReport(MonthlyBudget budget, MonthlyBudget spent);
   
     // Set the budget limits given by the user.
     MonthlyBudget budget = {500.00,  // Housing
                             150.00,  // Utilities
                              65.00,  // Household Expenses
                              50.00,  // Transportation
                             250.00,  // Food
                              30.00,  // Medical
                             100.00,  // Insurance
                             150.00,  // Entertainment
                              75.00,  // Clothing
                              50.00}; // Miscellaneous
                              
     // Holds the actualy amounts spent by the user.                        
     MonthlyBudget spent; 
  
     // User enters what they spent on expenses.
     spent.housing            = getAmount("housing");
     spent.utilities          = getAmount("utilities");
     spent.household_expenses = getAmount("household expenses");
     spent.transportation     = getAmount("transportation");
     spent.food               = getAmount("food");
     spent.medical            = getAmount("medical");
     spent.insurance          = getAmount("insurance");
     spent.entertainment      = getAmount("entertainment");
     spent.clothing           = getAmount("clothing");
     spent.miscellaneous      = getAmount("miscellaneous");
     cout << "\n\n";
     
     printBudgetReport(budget, spent);
     
     system("pause");
     return 0;    
 }
 
 // Takes in the amount spent by the user, and checks that it is not less than 0, nore more than 10000.
 double getAmount(string expense){
     
     double spent;
     
     cout << "How much did you spend on " << expense << "?: ";
     cin  >> spent;
 
     while (spent < 0 || spent > 10000){
           
         cout << "The amount spent on expenses cannot be zero, nor exceed 10,000. Try again: ";
         cin  >> spent;
     }
     
     return spent;
 }
 
 // Returns the budgeted expense for a specific budget.
 double getTotal(MonthlyBudget x){
        
        return (x.housing + 
                x.utilities + 
                x.household_expenses +
                x.transportation     + 
                x.food + 
                x.medical + 
                x.insurance + 
                x.entertainment +
                x.clothing + 
                x.miscellaneous);
 }
 
 // A format for printing an individual expense.
 void individualExpense(string expense, double budget_amt, double spent_amt){
      
      cout  << left << setw(24) << (expense + ":")  << right    << fixed << setprecision(2)
                    << setw(8)  <<  budget_amt      << setw(19) << spent_amt 
                    << setw(18) << (budget_amt - spent_amt)     << "\n";
 }
 
 // Prints what the user budgeted, what they actaully spent, and the difference.
 void printBudgetReport(MonthlyBudget budget, MonthlyBudget spent){   
     
     cout << left << setw(22) << " EXPENSE" 
                  << setw(20) << "BUDGETED AMOUNT" 
                  << setw(18) << "SPENT AMOUNT"
                  << setw(18) << "DIFFERENCE"
                  << "\n\n";
                  
     for (int i = 0; i < 76; i++)
         cout << "-";
         
     cout << "\n\n";
     
     individualExpense("Housing",            budget.housing,            spent.housing);
     individualExpense("Utilities",          budget.utilities,          spent.utilities);
     individualExpense("Household Expenses", budget.household_expenses, spent.household_expenses);
     individualExpense("Transportation",     budget.transportation,     spent.transportation);
     individualExpense("Food",               budget.food,               spent.food);
     individualExpense("Medical",            budget.medical,            spent.medical);
     individualExpense("Insurance",          budget.insurance,          spent.insurance);
     individualExpense("Entertainment",      budget.entertainment,      spent.entertainment);
     individualExpense("Clothing",           budget.clothing,           spent.clothing);
     individualExpense("Miscellaneous",      budget.miscellaneous,      spent.miscellaneous);
     cout << "\n";
     individualExpense("TOTAL",              getTotal(budget),          getTotal(spent));   
     cout << "\n\n"; 
}
     
     

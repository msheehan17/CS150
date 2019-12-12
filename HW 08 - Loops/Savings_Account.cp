/* Savings_Account.cpp - Calculates the balance of an account after 3 months,
 * with some withdraws/deposits made each month.
 *
 * Programmer: Matthew Sheehan
 * 
 * Homework 8, Part 3.
 *
 * Algorithm: 
 *
 * 1. The user will enter their current bank account balance, the program will
 * check for negative values and continue to prompt the user for a positive value
 * in the event they continue to enter a negative value.
 * 
 * 2. The program will then prompt the user for their annual interest rate. The
 * user will enter this as a whole value (6%, 4.3%, etc.), so the program
 * will divide the annual interest by 100 to convert it to a decimal percentage. 
 * Because we are working with monthyl interest, the annual interest rate (after
 * dividing it by 100) will then be divided by 12.
 *
 * 3. The program will use a for loop and cycle through the past three months.
 * For each month, the program will calculate interest, then prompt the user if
 * they made any withdraws/deposits (which will be subtracted from/added to the
 * account). Negative withdraws or deposits will be caught in a while loop, and
 * break only when the user enters a positive value. Additionally, a while loop
 * will continue should the user take out more money than they have available in
 * the bank.
 * 
 * 4. After the user has entered their information for tha past three months, the
 * the program will display to the user: their starting balance, total deposits
 * over the past three months, total withdraws over the past three months, total
 * interest gained over the past three months, and the current balance.
 *
 */
 
 # include <iostream>
 # include <iomanip>
 using namespace std;
 
 int main(){
     
     double original_balance,        // The original balance of the account.
            current_balance,         // Keeps track of the account balance with deposits and withdraws.
            annual_interest_rate,    // The interest rate entered by the user.
            monthly_interest_rate,   // The interest rate used for calculations (annual rate / 12).
            total_interest_gained,   // The total dollar amount of interest gained over the three months.
            deposit,                 // The monthly deposit the user may make per month.
            total_deposits = 0,      // The total amount of deposits over the three months.
            withdraw,                // The monhtly withdraw the user may make per month.
            total_withdraws = 0;     // The total amount of withdraws over the three months.
     
     // Prompt for the account balance.
     cout << "Can you please tell me the starting balance on the account?: ";     
     cin  >> original_balance;
     cout << endl;
     
     // Check for negative balance.
     while (original_balance <= 0){
           
           cout << "Your balance cannot be negative, nor zero. Try again: ";
           cin  >> original_balance;
           cout << endl;
     }
     
     // Assign the original balance to the current balance.
     current_balance = original_balance;
     
     // Prompt for the annual interest rate.
     cout << "And can you please tell me your annual interest rate?: ";
     cin  >> annual_interest_rate;
     cout << endl;
     
     // Check for negative interest rate.
     while (annual_interest_rate < 0){
           
           cout << "The interest rate cannot be negative. Try again: ";
           cin  >> annual_interest_rate;
           cout << endl;
     }
     
     cout << endl;
     
     // Convert the interest rate to a percentage, then convert it to a monthly interest.
     annual_interest_rate  /= 100;                         // Ex: Turns 12 into 0.12
     monthly_interest_rate  = (annual_interest_rate / 12); // Ex: Turns 0.12 into 0.01
     
     // Cycles for three months.
     for (int i = 1; i < 4; i++){
         
         // Prompt for any deposits made during the month.
         cout << "Please enter the total dollar amount you deposited in month " << i << ": ";
         cin  >> deposit;
         cout << endl;
         
         while (deposit < 0){
               
               cout << "Deposits cannot be negative. Try again: ";
               cin  >> deposit;
               cout << endl;
         }
         
         // Add the depost to the account, and to the total deposits.
         current_balance += deposit;
         total_deposits  += deposit; 
         
         // Prompt for any withdraws made during the month.
         cout << "Please enter the total dollar amount you withdrew in month " << i << ": ";
         cin  >> withdraw;
         cout << endl;
         
         // Check for negative withdraws.
         while (withdraw < 0){
               
               cout << "Withdraws cannot be negtaivte. Try again: ";
               cin  >> withdraw;
               cout << endl;
         }
         
         // Check that withdraws don't exceed the total in the account.
         while (withdraw > current_balance){
               
               cout << "You cannot take out more money than you have. Try again: ";
               cin  >> withdraw;
               cout << endl;
         }
         
         // Subtract any withdraws from the account, and add to total withdraws.
         current_balance -= withdraw;
         total_withdraws += withdraw;
         
         // Add the interest to the account, and calculate the total interest gained.
         current_balance       += (current_balance * monthly_interest_rate);
         total_interest_gained += (current_balance * monthly_interest_rate);
         
         cout << endl;
     
     }// End for loop.
     
     // Print out (starting balance, total deposits, total withdraws, total interest, and current balance):
     cout << left << setw(25) << "Starting balance: "        << setw(1) << "$" << right << fixed    << setprecision(2)       << setw(12) << original_balance << endl;
     cout << left << setw(25) << "Total deposits made: "     << setw(1) << "$" << right << setw(12) << total_deposits        << endl;
     cout << left << setw(25) << "Total withdraws made: "    << setw(1) << "$" << right << setw(12) << total_withdraws       << endl;
     cout << left << setw(25) << "Total interest gained: "   << setw(1) << "$" << right << setw(12) << total_interest_gained << endl;
     cout << left << setw(25) << "Current account balance: " << setw(1) << "$" << right << setw(12) << current_balance       << endl << endl;
     
     system("pause");
     return 0;   
 }

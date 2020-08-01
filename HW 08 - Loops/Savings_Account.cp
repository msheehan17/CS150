 #include <iostream>
 #include <iomanip>

/* Savings_Account.cp - Tracks the user's savings account with withdraws, deposits, and interest.
 *
 * Author: Matt Sheehan
 */
 int main ( ) {
     double starting_balance;
     double current_balance;
     double annual_interest_rate;
     double monthly_interest_rate;
     double deposit_made;
     double total_deposits = 0;
     double withdraw_made;
     double total_withdraws = 0;
     double total_interest_gained;
     
     std::cout << "Can you please tell me the starting balance on the account?: ";
     std::cin >> starting_balance;
     std::cout << "\n";
     
     while (starting_balance <= 0) {
       std::cout << "Your balance cannot be negative, nor zero. Try again: ";
       std::cin >> starting_balance;
       std::cout << "\n";
     }
     
     current_balance = starting_balance;
     
     std::cout << "And can you please tell me your annual interest rate?: ";
     std::cin >> annual_interest_rate;
     std::cout << "\n";
     
     while (annual_interest_rate < 0) {
       std::cout << "The interest rate cannot be negative. Try again: ";
       std::cin >> annual_interest_rate;
       std::cout << "\n\n";
     }
     
     annual_interest_rate /= 100;
     monthly_interest_rate = (annual_interest_rate / 12);
     
     for ( int i = 1; i < 4; i++ ) {
         std::cout << "Please enter the total dollar amount you deposited in month " << i << ": ";
         std::cin >> deposit_made;
         std::cout << "\n";
         
         while (deposit_made < 0) {
           std::cout << "Deposits cannot be negative. Try again: ";
           std::cin >> deposit_made;
           std::cout << "\n";
         }
         
         current_balance += deposit_made;
         total_deposits += deposit_made;
         
         
         std::cout << "Please enter the total dollar amount you withdrew in month " << i << ": ";
         std::cin >> withdraw_made;
         std::cout << "\n";
         
         while (withdraw_made < 0) {
           std::cout << "Withdraws cannot be negtaivte. Try again: ";
           std::cin >> withdraw_made;
           std::cout << "\n";
         }
         
         while (withdraw_made > current_balance) {
           std::cout << "You cannot take out more money than you have. Try again: ";
           std::cin >> withdraw_made;
           std::cout << "\n";
         }
         
         current_balance -= withdraw_made;
         total_withdraws += withdraw_made;
         
         current_balance += (current_balance * monthly_interest_rate);
         total_interest_gained += (current_balance * monthly_interest_rate);
         
         std::cout << "\n";
     }
     
     std::cout << std::left << std::setw(25) << "Starting balance: " << std::setw(1) << "$" << std::right << std::fixed << std::setprecision(2) << std::setw(12) << starting_balance <<
     "\n";
     std::cout << std::left << std::setw(25) << "Total deposits made: " << std::setw(1) << "$" << std::right << std::setw(12) << total_deposits << "\n";
     std::cout << std::left << std::setw(25) << "Total withdraws made: " << std::setw(1) << "$" << std::right << std::setw(12) << total_withdraws << "\n";
     std::cout << std::left << std::setw(25) << "Total interest gained: " << std::setw(1) << "$" << std::right << std::setw(12) << total_interest_gained << "\n";
     std::cout << std::left << std::setw(25) << "Current account balance: " << std::setw(1) << "$" << std::right << std::setw(12) << current_balance << "\n\n";
     
     system ("pause");
     return 0;   
 }

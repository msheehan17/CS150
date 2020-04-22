#include < iostream >
#include < iomanip >
#include < string >
using namespace std;

/* Phone_Plans.cpp - Display's the user's bill based on their plan and minutes 
   input, and informs them if they would save money should they switch plans.
  
   Programmer: Matthew Sheehan
  
   Project: Homework 7, Part 2.
  
   Algorithm:
   
   1. The program will prompt the user on their name, which phone package they
   have, and how many minutes they used this month. Each plan has an allocation
   for minutes, and an additional charge for every minute that exceeds that 
   allocation. 
   
   2. Based on the input plan and minutes, a bill will be calculated. Should
   their plan exceed the bill if they had an upgraded plan, they will be informed
   that they should switch plans to save money.
   
  */
int main ( ) {
    
    // Constants.
    const double PACKAGE_A_COST = 39.99;
    const double PACKAGE_B_COST = 59.99;
    const double PACKAGE_C_COST = 69.99;
    
    const int    PACKAGE_A_MINUTES = 450;
    const int    PACKAGE_B_MINUTES = 900;
    
    const double PACKAGE_A_ADDITIONAL_MINUTE_COST = 0.45;
    const double PACKAGE_B_ADDITIONAL_MINUTE_COST = 0.40;
    
    // Instance Variables.
    int minutes;
    string name;
    char package;
    double bill, savings;
    
    cout << "Hello. Could you please tell me your name?: "; 
    getline ( cin, name );
    cout << "\n";
    
    cout << "What phone package do you have? (a/b/c): ";
    cin  >> package;
    cout << "\n";
    
    cout << "How many minutes have you used this month?: ";
    cin  >> minutes;
    cout << "\n";
    
    // Controls the bill based on the package  selected by the user.
    switch ( package ) {
       case 'a':
       case 'A':
         // Calculate if the user has gone over their allocated minutes.
         minutes -= PACKAGE_A_MINUTES;

         // Prevent negative minutes from being used in bill calculation.
         if ( minutes < 0 )
            minutes = 0;

         // Calculate bill, print bill to screen.
         bill = PACKAGE_A_COST + ( minutes * PACKAGE_A_ADDITIONAL_MINUTE_COST );

         cout << "Your total bill is $" << fixed << setprecision ( 2 ) << bill << "\n\n";


         /* Say the user only uses 60 minutes over plan A, this will still
            be under the 900 minute allocated in plan B, so this will check
            to see if the user would be using extra minutes (going over 900
            minutes) in plan B, then calculating a projected bill.
         */
         minutes -= ( PACKAGE_B_MINUTES - PACKAGE_A_MINUTES );

         if ( minutes < 0 )
            minutes = 0;

         // Then projected savings are calculated.
         if ( bill > PACKAGE_B_COST + ( minutes * PACKAGE_B_ADDITIONAL_MINUTE_COST ) ) {
            savings = ( bill - PACKAGE_B_COST + ( minutes * PACKAGE_B_ADDITIONAL_MINUTE_COST ) );
            cout << "*You could save $"  << savings << " if you switch to plan B.\n";
         }

         if ( bill > PACKAGE_C_COST ) {    
            savings = bill - PACKAGE_C_COST;
            cout << "*You could save $"  << savings << " if you switch to plan C.\n\n";
         } 
       break;
       
       // Plan B
       case 'b':
       case 'B':
         // Calculate if the user has gone over their allocated minutes.
         minutes -= PACKAGE_B_MINUTES;

         // Prevent negative minutes from being used in bill calculation.
         if ( minutes < 0 ) 
            minutes = 0;

         // Calculate bill, print bill to screen.
         bill = PACKAGE_B_COST + ( minutes * PACKAGE_B_ADDITIONAL_MINUTE_COST );

         cout << "Your total bill is $" << bill << "\n\n";

         // Let the user know if they could potentially save by switching plans..
         if ( bill > PACKAGE_C_COST ) {
            savings = bill - PACKAGE_C_COST;
            cout << "*You could save $" << savings << " if you switch to plan C.\n\n";
         } 
       break;
          
       case 'c':
       case 'C':
            // Calculate bill, print bill to screen.
            bill = PACKAGE_C_COST;
            
            cout << "Your total bill is $" << bill << "\n\n";
    }
     
    system ( "pause" );
    return 0;        
} // End main.    

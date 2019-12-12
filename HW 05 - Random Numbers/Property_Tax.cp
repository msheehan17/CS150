/* Property_Tax - Calculates the property tax of a home.
 * Author: Matthew Sheehan
 * Project: HW5, Part 3
 *
 * Algorithm: 
 * 
 * 1. Prompt the user to enter the enter the value of their home. Since the 
 * county taxes the assesed value of the home, which is 60% of its value, the
 * program will need to determine what 60% is by finding the product of the home
 * value and sixty percent (0.6).
 *
 * 2. Prompt the user to enter the current county tax rate for every $100 of
 * assessed value. 
 * 
 * 3. The property tax is the product of the tax rate, and every increment of 
 * $100 in the assessed property value. So, to find the property tax, we use
 * the formula (property tax = (assessed value / 100) * tax rate)).
 * 
 * 4. Print the information given by the user, as well as the calculated
 * information.
 * 
 */
 
 #include<iostream>
 #include<iomanip>
 using namespace std;
 
 int main()
 {
     // Constants, assessed value conversion rate.
     double ASSESSED_VALUE_RATE = 0.6;
     
     // Instance variables.
     double home_value, assessed_value, tax_rate, property_tax;
     double tax_increments; //  The assessed value of the home divided by 100.
     
     // Prompt user for information.
     cout << "Hello. Please enter the value of your home: ";
     cin  >> home_value;
     cout << endl;
     
     cout << "What is Madison county's current tax rate?: ";
     cin  >> tax_rate;
     cout << endl;
     
     // Perform calculations.
     assessed_value = (home_value * ASSESSED_VALUE_RATE);
     tax_increments = (assessed_value / 100.00);
     property_tax   = (tax_increments * tax_rate);
     
     // Print information to user.
     cout << left  << setw(31) << "Actual value of the property: " 
          << right << setw(1)  << "$" << fixed << setprecision(2) << setw(10) << home_value << endl;
          
     cout << left  << setw(31) << "Assessed percentage rate: " 
          << right << setw(10) << ASSESSED_VALUE_RATE << "%" << endl;
          
     cout << left  << setw(31) << "Assessed value: " 
          << right << setw(1)  << "$" << fixed << setprecision(2) << setw(10) << assessed_value << endl;
          
     cout << left  << setw(31) << "Tax rate per $100 of value: " 
          << right << setw(1)  << "$" << fixed << setprecision(2) << setw(10) << tax_rate << endl;
          
     cout << left  << setw(31) << "Property tax: " 
          << right << setw(1)  << "$" << fixed << setprecision(2) << setw(10) << property_tax << endl << endl;

     system("pause");
     return 0;
 } // End main.

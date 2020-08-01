 #include <iostream>
 #include <iomanip>

/* Property_Tax - Calculates the property tax of a home in Madison county.
 *
 * Author: Matthew Sheehan
 */
 int main () {
     double ASSESSED_VALUE_RATE = 0.6;
     
     double home_value;
     double assessed_value;
     double tax_rate;
     double property_tax;
     double tax_increments;
     
     std::cout << "Hello. Please enter the value of your home: ";
     std::cin >> home_value;
     std::cout << "\n";
     
     std::cout << "What is Madison county's current tax rate?: ";
     std::cin >> tax_rate;
     std::cout << "\n";
     
     assessed_value = (home_value * ASSESSED_VALUE_RATE);
     tax_increments = (assessed_value / 100.00);
     property_tax = (tax_increments * tax_rate);
     
     std::cout << std::left << std::setw(31) << "Actual value of the property: "
     << std::right << std::setw(1) << "$" << std::fixed << std::setprecision(2) << std::setw(10)
     << home_value << "\n";
          
     std::cout << std::left << std::setw(31) << "Assessed percentage rate: " << std::right
     << std::setw(10) << ASSESSED_VALUE_RATE << "%" << "\n";
          
     std::cout << std::left << std::setw(31) << "Assessed value: " << std::right << std::setw(1)
     << "$" << std::fixed << std::setprecision(2) << std::setw(10) << assessed_value << "\n";
          
     std::cout << std::left << std::setw (31) << "Tax rate per $100 of value: " << std::right
     << std::setw(1) << "$" << std::fixed << std::setprecision(2) << std::setw(10) << tax_rate <<
     "\n";
          
     std::cout << std::left << std::setw(31) << "Property tax: " << std::right << std::setw(1)
     << "$" << std::fixed << std::setprecision(2) << std::setw (10) << property_tax << "\n\n";

     system ( "pause" );
     return 0;
 }

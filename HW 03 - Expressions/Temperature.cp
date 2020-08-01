 #include <iostream>

/* Temperature.cp - Converts farenheit to celcius.
 *
 * Author: Matt Sheehan
 */
 int main () {
     double farenheit_given;
     double celcius_converted_from_farenheit_given;
     
     std::cout << "Hello user, please enter a temperature in farenheit (be sure to use whole numbers): ";
     std::cin >> farenheit_given;
     std::cout << "\n";
     
     celcius_converted_from_farenheit_given = (double) (5.0 * (farenheit_given - 32.0) / 9.0);
     
     std::cout << "The temperature you entered, when converted to celcius, is: " << celcius_converted_from_farenheit_given << "\n\n";
     
     system("pause");
     return 0;      
 }

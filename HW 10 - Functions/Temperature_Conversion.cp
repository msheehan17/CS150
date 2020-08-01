 #include <iostream>
 #include <iomanip>
 
 // Prototypes
 void convertFarenheitOrCelcius(double temperature_given, char farenheit_or_celcius_indicator);

/* Temperature_Conversion.cp - Converts farenheit or celcius into the other.
 *
 * Author: Matt Sheehan
 */
 int main () {
     double temperature_given;
     char farenheit_or_celcius_indicator;
  
     std::cout << "Please enter a temperature, and the scale of your temperature (\"f\" for farenheit and \"c\" for celcius): ";
     std::cin >> temperature_given >> farenheit_or_celcius_indicator;
     std::cout << "\n";
     
     convertFarenheitOrCelcius(temperature_given, farenheit_or_celcius_indicator);
     
     system ("pause");
     return 0;
 }
 
 void convertFarenheitOrCelcius(double temperature_given, char farenheit_or_celcius_indicator) {
      double converted_temperature;
      
      switch (farenheit_or_celcius_indicator) {
         case 'f':
         case 'F':
              converted_temperature = (double) (5 * (temperature_given - 32) / 9.0);
              std::cout << temperature_given << " carenheit is " << std::fixed << std::setprecision(1) << std::setw(5) << converted_temperature << " degrees celcius.\n\n";
              break;
         case 'c':
         case 'C':
              converted_temperature = (double) ((9.0 / 5.0) * temperatureGiven + 32);
              std::cout << temperature_given << " celcius is " << std::fixed << std::setprecision(1) << std::setw(5) << converted_temperature << " degrees farenheit.\n\n";
              break;
         default:
              std::cout << "That is not an acceptable input. Goodbye.\n\n";
              system ("pause");
              exit(0);
      }
 }

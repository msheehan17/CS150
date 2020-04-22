 #include < iostream >
 #include < iomanip >
 using namespace std;
 
 // Prototypes
 void convert(double degrees, char scale);

/* Temperature_Conversion - Converts temperate from celcius to farenheit and back depending
 * on user input.
 *
 * Programmer: Matthew Sheehan
 * 
 * HW 10, Part 2.
 *
 * Algorithm:
 *
 * 1. The program will prompt the user for a temprature, and the scale of the 
 * temperature they are entering (fareneheit/celcius). The temparture and scale 
 * entered by the user will be entered into the convert function. 
 * 
 * 2. The convert function uses a switch statement that has a case for if the
 * user enters fareneheit as their scale, or if they enter celcius. In either
 * case, the temperature will be converted and the conversion will be printed
 * to the user. Should the user enter something other than the character for the
 * scale, the program will end.
 * 
 * The formula used for converting farenehit to celcius is:
 * 5 * (f - 32) / 9
 *
 * The formulae use for converting celcius to fareneheit is:
 * (9/5) * c + 32
 *     
 */ 
 int main ( ){
     
     double temp; // The temperature entered by the user.
     char  scale; // The scale of the temperature.
  
     cout << "Please enter a temperature, and the scale of your temperature\n";
     cout << "(\"f\" for farenheit and \"c\" for celcius): ";
     
     cin  >> temp >> scale;
     cout << "\n";
     
     convert ( temp, scale );
     
     system ( "pause" );
     return 0;    
     
 }// End main.
 
 void convert ( double degrees, char scale ) {
      double converted_temp;
      
      switch ( scale ){
         case 'f':
         case 'F':
              converted_temp = ( double ) ( 5 * ( degrees - 32 ) / 9.0 );
              cout << degrees << " Farenheit is " << fixed << setprecision ( 1 ) << setw ( 5 ) << converted_temp << " degrees Celcius.\n\n";
              break;
         case 'c':
         case 'C':
              converted_temp = ( double ) ( ( 9.0 / 5.0 ) * degrees + 32 );
              cout << degrees << " Celcius is " << fixed << setprecision ( 1 ) << setw ( 5 ) << converted_temp << " degrees Farenheit.\n\n";
              break;
         default:
              cout << "That is not an acceptable input. Goodbye.\n\n";
              system ( "pause" );
              exit ( 0 );
      }
 }

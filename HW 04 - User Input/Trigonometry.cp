/* Trigonometry.cpp 
 * Author: Matthew Sheehan
 * Project: HW 4, Project 3
 * Description: Based on the user's input, this program will calculate the sine,
 * cosine, and tangent of an angle.
 *
 * Algorithm: 
 *
 * 1. Define the instance variables for sine, cosine, and tangent at the beginning
 * of the program.
 * 
 * 2. Prompt the user for the degrees of the angle, because the formula requires
 * the use of radians, the angle will be converted in the next step.
 * 
 * 3. The formula for converting degrees to radians is to multiply the degrees
 * by Pi over 180. The formula will use the PI constant as such: radians = 
 * ((M_PI * degrees) / 180).
 *
 * 4. Declare the variable sine as equal to the sin function, with the radians
 * you calculated in step 3 as the argument (sine = sin(radians)). Do the same
 * for the cosine and tangent variables using the cos and tan functions, respectively.
 *
 * 5. Echo the user's input, and output the result of their angle's sine, cosine,
 * and tangent.
 *
 */
 
 # include <iostream>
 # include <cmath>   // Included to use sin, cos, and tan functions and Pi constant.
 
 using namespace std;
 
 int main ()
 {
     int degrees;    // The degrees of the angle the user enters.
     double radians; // Converted from degrees using formula (Pi * degrees / 180).
     double sine, cosine, tangent; // Sine, cosine, and tangent of the angle.
     
     // Prompt the user for input.
     cout << "Hello. This program can calculate the sine, cosine, and tangent ";
     cout << "of an angle. \nPlease enter the angle degrees: ";
     cin  >> degrees;
     cout << endl;
     
     // Convert the angle degrees to radians.
     radians = ((M_PI * degrees) / 180);
     
     // Find the sine, cosine, tangent.
     sine    = sin(radians);
     cosine  = cos(radians);
     tangent = tan(radians);
     
     // Echo user input.
     cout << "You entered " << degrees << " degrees. " << endl << endl;
     
     // Output the sine, cosine, and tangent of the angle.
     cout << "The sine of "    << degrees << " degrees is: " << sine     << endl;
     cout << "The cosine of "  << degrees << " degrees is: " << cosine   << endl;
     cout << "The tangent of " << degrees << " degrees is: " << tangent  << endl;
     cout << degrees << " degrees is " << radians << " radians." << endl << endl; 

     system("pause");
     return 0;
}
     
     

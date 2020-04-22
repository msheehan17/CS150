#include < iostream >
#include < iomanip >
#include < cmath > // Included to use Pi.
using namespace std;

/* Area_Calculator.cpp - Calculates the are of a shape based on the user input.
 * Author: Matthew Sheehan
 * Project: HW 7 Part 1.
 *
 * Algorithm:
 *
 * 1. The program will explain it's purpose it to calculate the area of a shape.
 * The shapes avialable are the circle, rectangle, and triangle.  The user will
 * also have the option to quit.
 *
 * 2. A switch statement will control which are gets used.  The formulas for 
 * each shape are:
 *
 * Circle: (Pi * radius(squared))
 * Rectangle: (length * width)
 * Triangle: (base * height)
 *
 * 3. Print the area to the screen.
 *
 */
 int main ( ) {
     
     // Instance variables.
     double radius, length, width, base, height, area;
     char   user_input;
     
     // Introduce/explain the program, give shapes options for calculating area.
     cout << "Hello. I can help you find the area of a shape, please pick your shape: \n";
     
     cout << "C - Calculate the area of a circle. \n";
     cout << "R - Calculate the area of a rectangle. \n";
     cout << "T - Calculate the area of a triangle. \n";
     cout << "Q - Quit the program.\n\n";
     
     cout << "Your choice: ";
     cin  >> user_input;
     cout << "\n";
     
     
     // The switch will calculate the area based on the shape chosen by the user.
     switch ( user_input ) {
        // User selects the circle.
        case 'c':
        case 'C':
             cout << "Please enter the radius of your circle: ";
             cin  >> radius;
             cout << "\n";
             area = ( M_PI * ( pow ( radius, 2 ) ) ); // A = (Pi * r ^ 2)
             break;
             
        // User selects the rectangle.     
        case 'r':
        case 'R':
             cout << "Please enter the length and width of your rectangle (spaces in between): ";
             cin  >> length >> width;
             cout << "\n";
             area = ( length * width ); // A = (l * w)
             break;
             
        // User selects the triangle.     
        case 't':
        case 'T':
             cout << "Please enter the base and height of your triangle (spaces in between): ";
             cin  >> base >> height;
             cout << "\n";
             area = ( base * height ); // A = (b * h)
             break;
             
        // User has quit the program.     
        case 'q':
        case 'Q':
             cout << "Goodbye!\n\n";
             system ( "pause" );
             exit ( 0 );
             
        // User has made an invalid input.     
        default:
             cout << "That is not an acceptable input. Goodbye. \n\n";
             system ( "pause" );
             exit ( 0 );
     }
     
     // Print the area to the user.
     cout << "The area of your shape is: " << fixed << setprecision ( 2 ) << area << "\n\n";
                     
     system ( "pause" );
     return 0; 
 }

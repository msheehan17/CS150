#include <iostream>
#include <iomanip>
#include <cmath>

/* Area_Calculator.cp - Calculates the area of a shape based on the user input.
 *
 * Author: Matt Sheehan
 */
 int main () {
     double circle_radius;
     double rectangle_length;
     double rectangle_width;
     double triangle_base;
     double triangle_height;
     double shape_area;
     char user_shape_selection;
     
     std::cout << "Hello. I can help you find the area of a shape, please pick your shape: \n";
     std::cout << "C - Calculate the area of a circle. \n";
     std::cout << "R - Calculate the area of a rectangle. \n";
     std::cout << "T - Calculate the area of a triangle. \n";
     std::cout << "Q - Quit the program.\n\n";
     
     std::cout << "Your choice: ";
     std::cin >> user_shape_selection;
     std::cout << "\n";
     
     switch (user_shape_selection) {
        case 'c':
        case 'C':
             std::cout << "Please enter the radius of your circle: ";
             std::cin >> circle_radius;
             std::cout << "\n";
             shape_area = (M_PI * (pow (circle_radius, 2)));
             break;
        case 'r':
        case 'R':
             std::cout << "Please enter the length and width of your rectangle (spaces in between): ";
             std::cin >> rectangle_length >> rectangle_width;
             std::cout << "\n";
             shape_area = (rectangle_length * rectangle_width);
             break;
        case 't':
        case 'T':
             std::cout << "Please enter the base and height of your triangle (spaces in between): ";
             std::cin >> triangle_base >> triangle_height;
             std::cout << "\n";
             shape_area = (triangle_base * triangle_height);
             break;
        case 'q':
        case 'Q':
             std::cout << "Goodbye!\n\n";
             system("pause");
             exit(0);
        default:
             std::cout << "That is not an acceptable input. Goodbye. \n\n";
             system("pause");
             exit(0);
     }
     std::cout << "The area of your shape is: " << std::fixed << std::setprecision(2) << shape_area << "\n\n";
                     
     system ("pause");
     return 0; 
 }

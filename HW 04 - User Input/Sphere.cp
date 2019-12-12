/* Sphere.cpp 
 * Author: Matthew Sheehan
 * Project: HW 4, Project 1
 * Description: Based on the radius input by the user, this program will 
 * determine the surface area and volume of a sphere.
 *
 * Algorithm: 
 *
 * 1. Create variables for storing surface area, volume, and the radius.
 *
 * 2. Prompt the user to enter the radius of their sphere.
 *
 * 3. The formula for calculating the surface area of the sphere is to multiply
 * the radius by itself, then multiply it by 4Pi. The formula is (4 * PI * pow(r, 2).
 *
 * 4. The formula for calculating the volume of the sphere is to multiply the
 * radius by itslef, then to multiply it by four-third (4/3) PI. The formula is
 * ((4.0 / 3.0) * M_PI * pow (r, 3)).
 *
 * 5. Echo the input to the user, the output the surface area and volume of the
 * sphere.
 */
 
 # include <iostream>
 # include <cmath>   // Included to use the pow function, and Pi constant.
 
 using namespace std;
 
 int main()
 { 
     double surface_area; // 4 * Pi * r^2
     double volume;       // 4/3 * Pi * r^3
     double radius;       // The radius entered by the user.
     
     // Prompt the user for input.
     cout << "Hello! This program can help you detemine the surface area and ";
     cout << "volume of a \nsphere.  Please enter the sphere's radius: ";
     cin  >> radius;
     cout << endl;
     
     // Determine the surface area of the sphere.
     surface_area = (4 * M_PI * pow(radius, 2));
     
     // Determine the volume of the sphere.
     volume = ((4.0 / 3.0) * M_PI * pow (radius, 3));
     
     // Echo the input to the user.
     cout << "You enetered the radius: " << radius << "." << endl << endl;
     
     // Output the surface area and volume of the sphere.
     cout << "The surface area of that sphere is: " << surface_area << endl;
     cout << "The volume of that sphere is: "       << volume << endl << endl;
     
     system("pause");
     return 0;
 }

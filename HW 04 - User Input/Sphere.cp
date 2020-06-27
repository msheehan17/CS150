 #include <iostream>
 #include <cmath>

/* Sphere.cp - Determines the surface area and volume of a sphere based on the radius of the sphere, given by the user.
 *
 * Author: Matt Sheehan
 */
 int main() {
     double sphere_radius; // Given by user.
     double sphere_surface_area;
     double sphere_volume;
     
     std::cout << "Hello! This program can help you detemine the surface area and volume of a sphere.  Please enter the sphere's radius: ";
     std::cin  >> sphere_radius;
     std::cout << "\n";
     
     sphere_surface_area = (4 * M_PI * pow(sphere_radius, 2));
     
     sphere_volume = ((4.0 / 3.0) * M_PI * pow (sphere_radius, 3));
     
     std::cout << "You enetered the radius: " << sphere_radius << ".\n\n";
     
     std::cout << "The surface area of that sphere is: " << sphere_surface_area << "\n";
     std::cout << "The volume of that sphere is: " << sphere_volume << "\n\n";
     
     system("pause");
     return 0;
 }

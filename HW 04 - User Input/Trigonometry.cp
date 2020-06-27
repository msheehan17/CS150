 #include <iostream>
 #include <cmath>

 /* Trigonometry.cp - Determines the sine, cosine, and tangent of an angle given by the user.
  *
  * Author: Matt Sheehan
  */
 int main () {
     int degrees_input_from_user;
     double user_degree_in_radians;
     double sine_of_user_degree;
     double cosine_of_user_degree;
     double tangent_of_user_degree;
     
     std::cout << "Hello. This program can calculate the sine, cosine, and tangent of an angle. Please enter the angle degrees: ";
     std::cin >> degrees_input_from_user;
     std::cout << "\n\n";
     
     user_degree_in_radians = ((M_PI * degrees_input_from_user) / 180);
     
     sine_of_user_degree = sin(user_degree_in_radians);
     cosine_of_user_degree = cos(user_degree_in_radians);
     tangent_of_user_degree = tan(user_degree_in_radians);
     
     std::cout << "You entered " << degrees_input_from_user << " degrees.\n\n";
     
     std::cout << degrees_input_from_user << " degrees is " << user_degree_in_radians << " radians.\n";
     std::cout << "The sine of " << degrees_input_from_user << " degrees is: " << sine_of_user_degree << "\n";
     std::cout << "The cosine of " << degrees_input_from_user << " degrees is: " << cosine_of_user_degree << "\n";
     std::cout << "The tangent of " << degrees_input_from_user << " degrees is: " << tangent_of_user_degree << "\n\n";
     
     system("pause");
     return 0;
}

 #include <iostream>
 #include <iomanip>
 #include <cmath>
 #include <string>
 #include <cctype>
 
 // Prototypes.
 char getUserSelectionMenu();
 bool checkCharacterMatch(char choice);
 double checkNotNegative (double value);
 void getSphereValues();
 void getCubeValues();
 void getPyramidValues();
 void printAreaAndVolume(double area, double volume);

/* Geometric_Functions.cp - Calculates the area and volume of a shape based on shape selected and specifics input by the user.
 *
 * Author: Matt Sheehan
 */
 int main() {
    do {
        switch (getUserSelectionMenu()) {
          case 'S':
                getSphereValues();
                break;
          case 'C':
                getCubeValues();
                break;
          case 'P':
                getPyramidValues();
                break;
          }
    } while (true);
 }
 
 char getUserSelectionMenu() {
    char user_selection;
    std::string asterik_border;
    
    asterik_border.assign (8, '*');
      
    std::cout << asterik_border << "GEOMETRIC AREA AND VOLUME CALCULATOR" << asterik_border << "\n\n";
    std::cout << "S - Calculate the area/volume of a sphere.\n";
    std::cout << "C - Calculate the area/volume of a cube.\n";
    std::cout << "P - Calculate the area/volume of a pyramind.\n";
    std::cout << "Q - Quit the program.\n\n";
      
    std::cout << "Your choice: ";
    std::cin >> user_selection;
    std::cout << "\n";
    
    while (checkCharacterMatch(user_selection) != 1) {
      std::cout << "That is not an acceptable input. Please try again: ";
      std::cin >> user_selection;
      std::cout << "\n";
      checkCharacterMatch(user_selection);
    }
    
    user_selection = toupper(user_selection);
    
    if (user_selection == 'Q') {
       std::cout << "Goodbye.\n\n";
       system("pause");
       exit(0);
    }   
    return user_selection;
 }
 
 bool checkCharacterMatch(char choice) {
    choice = toupper(choice);
    return (choice == 'S' || choice == 'C' || choice == 'P' || choice == 'Q');
 }
 
 double checkNotNegative(double user_value) {
    if (user_value < 0.0){
       while (user_value < 0.0) {
         std::cout << "Input cannot be negative. Please try again: ";
         std::cin >> user_value;
         std::cout << "\n";
       }
    } 
    return user_value;
 }
                 
 void getSphereValues() {
     double sphere_radius;
     double sphere_area;
     double sphere_volume;
     
     std::cout << "Please enter your sphere's radius: ";
     std::cin >> sphere_radius;
     std::cout << "\n";
     
     sphere_radius = checkNotNegative(sphere_radius);
     sphere_area = (double) (4 * (M_PI * pow(sphere_radius, 2)));
     sphere_volume = (double) ((4.0 / 3.0) * (M_PI * pow(sphere_radius, 3)));
     
     printAreaAndVolume(sphere_area, sphere_volume);
 }
 
 void getCubeValues() {
     double cube_side;
     double cube_area;
     double cube_volume;
     
     std::cout << "Please enter your cube's side: ";
     std::cin >> cube_side;
     std::cout << "\n";
     
     cube_side = checkNotNegative(cube_side);
     cube_area = (double) (6 * pow(cube_side, 2));
     cube_volume = (double) pow(cube_side, 3);
     
     printAreaAndVolume(cube_area, cube_volume);
 }
 
 void getPyramidValues ( ) {
     double pyramid_base;
     double pyramid_height;
     double pyramid_area;
     double pyramid_volume;
     
     std::cout << "Please enter your pyramid's base and height (seperated by a space): ";
     std::cin >> pyramid_base >> pyramid_height;
     std::cout << "\n";
     
     pyramid_base = checkNotNegative(pyramid_base);
     pyramid_height = checkNotNegative(pyramid_height);

     pyramid_area = (double) (pow(pyramid_base, 2) + 2 * pyramid_base * sqrt ((pow(pyramid_base, 4) / 4.0) + pow (pyramid_height, 2)));
     
     pyramid_volume = (double) ((pyramid_base * pyramid_height) / 3);
     
     printAreaAndVolume (pyramid_area, pyramid_volume);
 }
 
 void printAreaAndVolume ( double area_value, double volume_value ) {
      std::cout << std::setw(9) << "Area: "   << std::right << std::setw(8) << std::fixed << std::setprecision(4) << area_value << "\n";
      std::cout << std::setw(9) << "Volume: " << std::right << std::setw(8) << std::fixed << std::setprecision(4) << volume_value << "\n\n";
 }

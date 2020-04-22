 #include <iostream>
 #include <iomanip>
 #include <cmath>
 #include <string>
 #include <cctype>
 using namespace std;
 
 // Prototypes.
 char menu();
 bool matches_character ( char choice );
 double check_not_negative ( double value );
 void sphere ( );
 void cube ( );
 void pyramid ( );
 void print_area_and_volume ( double area, double volume );

/* Geometric_Functions - A menu driven program that calculates area/volume of a shape.
 *
 * Programmer: Matthew Sheehan
 *
 * Homework 11
 * 
 * Algorithm:
 *
 * 1. The program will calculate the area/volume of either a sphere, cube, or
 * pyramid based on the user's choice. The user's options will be displayed to
 * the screen, and a switch statement will control which calculation gets 
 * performed based on the input (i.e. if the user chooses 'c' for cube, the
 * cube calculating function will be called.
 *
 * 2. Each shape area/volume calculating function will take in a respective
 * value from the user (radius, side, etc.) and perform their respective area/
 * volume calculation. Checks will be in place to ensure the values input by
 * the user are not negative.
 *
 * 3. At the end of each calculating function, the area and volume will be
 * displayed on the screen, formatted.
 *
 * 4. After the calculation has been performed and the values are printed to 
 * the user, the program will return to the main method, which continues in
 * a while loop until the user enters 'q', exiting the program.
 *
 */
 int main ( ) {
    bool keepGoing = 1; // A variable to keep the do while loop  until the user quits the program.
     
    do {
        switch ( menu ( ) ){
          // Calculate area and volume of a sphere.
          case 'S':
               sphere ( );
               break;
          // Calculate area and volume of a cube.     
          case 'C':
               cube ( );
               break;
          // Calculate area and volume of a pyramid.
          case 'P':
               pyramid ( );
               break;
          }
    } while ( keepGoing == 1 ); 
 } // End main.
 
 // This function will prompt the user for their shape to calculate the area/volume of.
 char menu ( ) {
    char user_selection; // The character choice entered by the user.  
    string asteriks;     // Asteriks to add some detail to the table format.
    
    asteriks.assign ( 8, '*' );  
      
    cout << asteriks << "GEOMETRIC AREA AND VOLUME CALCULATOR" << asteriks << endl << endl;
    
    // Available options.
    cout << "S - Calculate the area/volume of a sphere.\n";
    cout << "C - Calculate the area/volume of a cube.\n";
    cout << "P - Calculate the area/volume of a pyramind.\n";
    cout << "Q - Quit the program.\n\n";
      
    cout << "Your choice: ";
    cin  >> user_selection;  
    cout << "\n";
    
    while ( matches_character ( user_selection ) != 1 ) {
          cout << "That is not an acceptable input. Please try again: ";
          cin  >> user_selection;
          cout << "\n"; 
          matches_character ( user_selection );
    }
    
    // Capitalize the selection.
    user_selection = toupper ( user_selection );
    
    // User decides to quit the program.
    if ( user_selection == 'Q' ) {
       cout << "Goodbye.\n\n";
       system ( "pause" );
       exit ( 0 );
    }   
    return user_selection;
 }
 
 // Checks if the character entered by the user matches one of the options available.
 bool matches_character ( char choice ) {
    choice = toupper ( choice );
    return ( choice == 'S' || choice == 'C' || choice == 'P' || choice == 'Q' );
 }
 
 // Checks if the input from the user is negative and resolves to fix that.
 double check_not_negative ( double user_value ) {
    double value = user_value;
    
    if ( value < 0.0 ){     
       while ( value < 0.0 ) {
             cout << "Input cannot be negative. Please try again: ";
             cin  >> value;
             cout << "\n";
       }
    } 
    return value;
 }
                 
 // Calculates the area and volume of a sphere.
 void sphere ( ) {
     double radius, // The radius value entered by the user.
            area,   // The area of the sphere.
            volume; // The volume of the sphere.
     
     cout << "Please enter your sphere's radius: ";
     cin  >> radius; 
     cout << "\n";
     
     // Checks if the value of radius is negative.
     radius = check_not_negative ( radius );
     
     // Area calculation: square radius, multiply by Pi, multiply by 4.
     area = ( double ) ( 4 * ( M_PI * pow ( radius, 2 ) ) );
     
     // Volume calculation: cube radius, multiple by Pi, multiply by 4/3/
     volume = ( double ) ( ( 4.0 / 3.0 ) * ( M_PI * pow ( radius, 3 ) ) );
     
     // Print the area and volume of the sphere.
     print_area_and_volume ( area, volume ); 
 }
 
 // Calculates the area and volume of a cube.
 void cube ( ) {
     double side,   // The side value entered by the user.
            area,   // The area of the cube.
            volume; // The volume of the cube.
     
     cout << "Please enter your cube's side: ";
     cin  >> side; 
     cout << "\n";
     
     // Checks if the value of side is negative.
     side = check_not_negative ( side );
     
     // Area calculation: square side, then multiply by 6.
     area = ( double ) ( 6 * pow ( side, 2 ) );
     
     // Volume calculation: side cubed.
     volume = ( double ) pow ( side, 3 );
     
     // Print the area and volume of the cube.
     print_area_and_volume ( area, volume ); 
 }
 
 // Calculates the area and volume of a pyramid.
 void pyramid ( ) {
     double base, // The base value entered by the user.
          height, // The height value entered by the user.
            area, // The area of the cube.
          volume; // The volume of the cube.
     
     cout << "Please enter your pyramid's base and height (seperated by a space): ";
     cin  >> base >> height; 
     cout << "\n";
     
     // Checks if the value of either base or height is negative.
     base   = check_not_negative ( base );
     height = check_not_negative ( height );
     
     /* The area of a pyramid is the square root of the sum of the base rasied
      * to the power of four being divided by 4 plus the height squared. That
      * product is multipled by the base, multipied by 2, then added to the base
      * squared.
      */
     area = ( double ) ( pow ( base, 2 ) + 2 * base * sqrt ( ( pow ( base, 4 ) / 4.0 ) + pow ( height, 2 ) ) );
     
     // Volume calculation: side cubed.
     volume = ( double ) ( ( base * height ) / 3 );
     
     // Print the area and volume of the pyramid.
     print_area_and_volume ( area, volume );
 }
 
 // Print the area and volume of a shape.
 void print_area_and_volume ( double area_value, double volume_value ) {
      cout << setw ( 9 ) << "Area: "   << right << setw ( 8 ) << fixed << setprecision ( 4 ) << area_value   << "\n";
      cout << setw ( 9 ) << "Volume: " << right << setw ( 8 ) << fixed << setprecision ( 4 ) << volume_value << "\n\n";
 }
      
      
      

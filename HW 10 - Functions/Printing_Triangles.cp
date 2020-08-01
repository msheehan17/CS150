#include <iostream>

// Prototypes
void printAsterikTriangle(int top_triangle_height);

/* Printing_Triangles.cp - Based on the number intput from the user, a pyramid of asteriks will be printed with the longest row = user number.
 *
 * Author: Matt Sheehan
 */
int main () {
     int user_entered_number;
     
     do {
         std::cout << "Please enter a number 1 - 20, or zero to exit the program: ";
         std::cin >> user_entered_number;
         std::cout << "\n";
         
         while (user_entered_number < 0 || user_entered_number > 20) {
           std::cout << "Input not accepted. Please enter a number 1 - 20, or zero to exit the program: ";
           std::cin >> user_entered_number;
           std::cout << "\n";
         }
         
         if (user_entered_number == 0) {
            std::cout << "Goodbye.\n";
            exit(0);
         }
               
         printAsterikTriangle(user_entered_number);
         std::cout << "\n";
     } while (true);
           
     system( "pause" );
     return 0;
 }
 
 void printAsterikTriangle(int top_triangle_height) {
      for (int i = 0; i < top_triangle_height; i++){
          for (int j = 0; j <= i; j++)
              std::cout << "*";
          std::cout << "\n";
      }
      for (int i = 0; i < top_triangle_height - 1; i++ ) {
          for ( int j = ( top_triangle_height - 1 ); j > i; j-- )
              std::cout << "*";
          std::cout << "\n";
      }
 }

 #include < iostream >
 using namespace std;

// Prototypes
void triangle(int height);

/* Printing_Triangles.cpp - Prints triangles based on a number input from the user.
 *
 * Programmer: Matthew Sheehan
 * 
 * HW 10, Part 1.
 *
 * Algorithm:
 *
 * 1. The program will prompt the user for a number between 1 and 20. Should the
 * user enter a number that is outside the parameters, a while loop will continue
 * to prompt the for a correct number. However, if the user enters 0, the program
 * will end.
 * 
 * 2. Once an acceptable number has been entered, and is not zero, the function
 * triangle will be called with the user's selection as a parameter. 
 *
 * 3. The function triangle will use nested for loops to print a triangle on the
 * screen. The first nested for loop will cycle through lines equal to the number
 * entered by the user (should the user enter 5, this for loop will go through
 * 5 lines of code). Per line, the inner for loop will print asteriks equal
 * to the number iteration of the outer for loop (if the outer for loop is on
 * iteration 1, one asterik will be printed).
 *
 * 4. The second nested for loop will do the same process as step 3 in reverse.
 * Because the triangle alread has it's peak, we will need to work with a number
 * that is one less the original number. The inner for loop will print asteriks
 * per line, decreasing in value with each line.
 *
 */ 
 int main ( ) {
     
     int user_selection; // The number the user will enter into the function.
     
     do {
         cout << "Please enter a number 1 - 20, or zero to exit the program: ";
         cin  >> user_selection;
         cout << "\n";
         // Check that the user enters a number allowed.
         while ( user_selection < 0 || user_selection > 20 ) {
               cout << "Input not accepted. Please enter a number 1 - 20, or zero to exit the program: ";
               cin  >> user_selection;
               cout << "\n";
         }
         // User selects 0 to end the program.
         if ( user_selection == 0 ) {
            cout << "Goodbye.\n";
            exit ( 0 );
         }
         // Function call.      
         triangle ( user_selection );
         cout << "\n";
     // Continues so long as the user hasn't entered 0.
     } while ( user_selection >= 1 && user_selection <= 20 );
           
     system( "pause" );
     return 0;
     
 }// End main.
 
 void triangle( int number ) {
      // Print up the triangle.
      for ( int i = 0; i < number; i++ ){
          for ( int j = 0; j <= i; j++ ) 
              cout << "*";
          cout << "\n";
      }
      // Print down the triangle.
      for ( int i = 0; i < number - 1; i++ ) {
          for ( int j = ( number - 1 ); j > i; j-- ) 
              cout << "*";
          cout << "\n";
      }
 }
      
      
      
      

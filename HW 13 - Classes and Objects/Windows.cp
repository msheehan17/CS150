 #include "Windows.h"
 #include < iostream >
 using namespace std;

/* Up_and_Down.cpp - Displays up and down on a windows screen.
 *
 * HW 13, Part 4.
 *
 * Programmer: Matthew Sheehan
 *
 * Algorithm:
 *
 * 1. The program will set the words "UP" and "DOWN" on opposite ends of the 
 * screen, at the center.
 *
 * 2. Once per second (Controlled by the sleep function), both words will 
 * simultaneously move in opposite direction (up will go up, down will go down),
 * until they reach their respective end of the screen, at which point they will
 * reset.
 * 
 * 3. A for loop will control this action so that it is performed three times.
 *
 */ 
 const short UP_X   = 5;  // X-Cordinates for up and down.
 const short DOWN_X = 50; 
 const short UP_Y   = 24; // Initial Y-cordinates for up and down.
 const short DOWN_Y = 0;
 
 int main ( ) {
     HANDLE screen = GetStdHandle ( STD_OUTPUT_HANDLE );
     
     COORD up, down;
     up.X   = UP_X;
     down.X = DOWN_X;
     
     for ( int i = 0; i < 3; i++ ) {
         up.Y   = UP_Y;
         down.Y = DOWN_Y; 
            
         while ( up.Y > 0 ){
             // Pause 
             Sleep(800);
             
             // Display words.
             SetConsoleCursorPosition ( screen, up );
             cout << "UP";
             SetConsoleCursorPosition ( screen, down );
             cout << "DOWN";  
             
             // Erase the last "up" and "down".
             Sleep ( 1000 );
             
             SetConsoleCursorPosition ( screen, up );
             cout << "    ";
             SetConsoleCursorPosition ( screen, down );
             cout << "    ";
             
             // Change the Y coordinate to move the "up" up and "down" down.
               up.Y--;
             down.Y++;
         } // End while loop.
     }// End for loop.
               
     system ( "pause" );
     return 0;
 }
 
 
 
 
 
 

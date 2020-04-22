 #include < iostream >
 #include < iomanip >
 using namespace std;

/* Hotel_Rooms.cpp - Shows the number of rooms occupied on the 10-16th floors of a hotel.
 * 
 * Programmer: Matthew Sheehan
 *
 * Homework 8, Part 1.
 *
 * Algorithm:
 *
 * 1. The program will prompt the user to enter how many rooms are occupied on each
 * floor of a hotel building from floors 10-17 (omitting 13). This will be done
 * using a for loop and cycling through each value.
 *
 * 2. Following the user entering each respective floor's occupied rooms, the program
 * will display to the user the max amount of rooms available, of all the floors how
 * many of those are occupied, and the percentage of rooms occupied.
 *
 */ 
 int main ( ) {
     
     const int ROOMS_AVAILABLE = 120; // The number of rooms available on floors 10-16.
     
     int sum = 0;             // The number of rooms occupied on floors 10-16.
     int rooms_occupied;      // The number entered by the user of the rooms occupied per floor.
     double percent_occupied; // The percentage of rooms occupied.
     
     
     // Prompt the user to enter the number of rooms occupied on each floor.
     cout << "Hello. I need you to please enter how many suites are occupied \n";
     cout << "on each floor.\n\n";
     
     for ( int i = 10; i < 17; i++ ){
         // The 13th floor is omitted as the floors go from 12 to 14.
         if (i == 13)
               continue;
         
         cout << "Rooms occupied on the " << i << "th floor: ";
         cin  >> rooms_occupied;
         
         // Checks that there are no negative rooms occupied, or exceeds the ma
         while ( rooms_occupied < 0 || rooms_occupied > 20 ) {
               cout << "Rooms occupied can only be 1-20. Try again: ";
               cin  >> rooms_occupied;
         }
         
         // Calculates the total rooms occupied by adding the respective floor's rooms occupied to the total.
         sum += rooms_occupied;
     }
     
     // Calculates the percent of rooms occupied.
     percent_occupied = ( ( double ) sum / ROOMS_AVAILABLE );
     percent_occupied *= 100;
     
     // Print out how many rooms are available, how many are occupied, and what that percentage is.
     cout << left << setw ( 25 ) << "\nTotal suites available: " << right << setw ( 9 )          << ROOMS_AVAILABLE << "\n";
     cout << left << setw ( 25 ) << "Rooms occupied: "           << right << setw ( 8 )          << sum             << "\n";
     cout << left << setw ( 25 ) << "Percentage occupied: "      << right << setw ( 8 ) << fixed << setprecision ( 2 ) << percent_occupied 
          << "%\n\n"; 
 
     system ( "pause" );
     return 0;
 }
 
 

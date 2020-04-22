#include < iostream >
#include < string >
using namespace std;

const int DIMENSION = 3;

bool checkOneThroughNine ( int array [ ] [ 3 ] );
bool addsTo15 ( int one, int two, int three );
bool isMagicSquare ( int array [ ] [ 3 ] );

/* MagicSquare.cpp - Determines if a 3 x 3 box of number is  "magic square".
 *
 * HW 14, Part 2
 *
 * Programmer: Matthew Sheehan
 * 
 * Algorithm:
 *
 * 1. The program will have a hard coded 2D array of numbers, which will be fed
 * into a function to determine if it is a magic square. A box is a magic square
 * if the following criteria are met:
 *
 * - Each box contains a number 1-9 without repeating.
 * - The three numbers in a row (whether that be row, column, diagonal) add up to 15.
 *
 * 2. The program will first sort through all numbers in the 2D array to determine
 * if it has numbers 1-9. A bool variable will be made for each number, and should
 * the number be found in the array, the bool variable will become true (ex: If
 * 1 is in the array, the bool variable one will become true). If all nine variables
 * are true, then the first criteria is met, and the function will return true.
 *
 * 3. To ensure the second criteria is met, a function will determine if three
 * argument integers add up to 15; If true, the function returns true. This will
 * be tested 8 separate times: first row, second row, third row, first column,
 * second column, third column, left to right diagonal, and right to left diagonal.
 *
 * 4. Should the function that checks for numbers 1-9 return true, and each of 
 * the eight functions that check that numbers add to 15 return true, then the
 * function isMagicSquare will return true, as the 2D array is determined to be
 * a magic square.
 */
 int main ( ) {
     int testSquare [ DIMENSION ] [ DIMENSION ] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
     
     string message = ( isMagicSquare ( testSquare ) == 0 ) ? "This is NOT a magic square.\n\n" : "This is a magic square.\n\n";
     cout << message;
 
     system ( "pause" );
     return 0;
 }
 
 /* Checks through each number in the array for values 1-9. If the value is found, the
  * corresponding boolean value will become true. In order for this to be a magic square
  * it must contains numbers 1-9, so all bool values must return true.
  */
 bool checkOneThroughNine ( int array [ ] [ 3 ] ) {
      bool one, two, three, four, five, six, seven, eight, nine;
      
      // Initialize the variables.
      one = two = three = four = five = six = seven = eight = nine = false;
      
      for ( int row = 0; row < DIMENSION; row++ )
          for ( int col = 0; col < DIMENSION; col++ ) {
              switch ( array [ row ][ col ] ) { 
                  case 1:
                       one = true;
                       break;
                  case 2:
                       two = true;
                       break;
                  case 3:
                       three = true;
                       break;
                  case 4:
                       four = true;
                       break;
                  case 5:
                       five = true;
                       break;
                  case 6:
                       six = true;
                       break;
                  case 7:
                       seven = true;
                       break;
                  case 8:
                       eight = true;
                       break;
                  case 9:
                       nine = true;
                       break;
                  default:
                       break;
              }// End switch.
          }// End for loop.
      return ( one && two && three && four && five && six && seven && eight && nine );
 }
 
 // Returns true if all three arguments add to 15.
 bool addsTo15 ( int one, int two, int three ) {
      return ( one + two + three == 15 );
 }
 
 /* Determines if a three by three box of numbers is a magic square. In order to be
  * a magic square, all rows, columns, and diagonals must add up to 15, and the square
  * must contain numbers 1-9.
  */
 bool isMagicSquare ( int array [ ] [ 3 ] ) {
      return ( checkOneThroughNine ( array ) && // Check that the array contains numbers 1-9.
              addsTo15 ( array [ 0 ] [ 0 ], array [ 0 ] [ 1 ], array [ 0 ] [ 2 ] ) && // Check first row adds to 15.
              addsTo15 ( array [ 1 ] [ 0 ], array [ 1 ] [ 1 ], array [ 1 ] [ 2 ] ) && // Check second row.
              addsTo15 ( array [ 2 ] [ 0 ], array [ 2 ] [ 1 ], array [ 2 ] [ 2 ] ) && // Check third row.
              addsTo15 ( array [ 0 ] [ 0 ], array [ 1 ] [ 0 ], array [ 2 ] [ 0 ] ) && // Check first column.
              addsTo15 ( array [ 0 ] [ 1 ], array [ 1 ] [ 1 ], array [ 2 ] [ 1 ] ) && // Check second column.
              addsTo15 ( array [ 0 ] [ 2 ], array [ 1 ] [ 2 ], array [ 2 ] [ 2 ] ) && // Check third column.
              addsTo15 ( array [ 0 ] [ 0 ], array [ 1 ] [ 1 ], array [ 2 ] [ 2 ] ) && // Check left to right diagonal.
              addsTo15 ( array [ 0 ] [ 2 ], array [ 1 ] [ 1 ], array [ 2 ] [ 0 ] ) ); // Check right to left diagonal.
 }
      

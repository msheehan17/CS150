#include <iostream>
#include <string>

const int ARRAY_DIMENSION = 3;

bool hasOneThroughNine(int array[] [ARRAY_DIMENSION]);
bool addsTo15(int first_number, int second_number, int third_number);
bool isMagicSquare(int array [][ARRAY_DIMENSION]);

bool hasOneThroughNine(int array[][ARRAY_DIMENSION]) {
    bool one, two, three, four, five, six, seven, eight, nine;
      
    one = two = three = four = five = six = seven = eight = nine = false;
      
    for (int row = 0; row < ARRAY_DIMENSION; row++)
        for (int col = 0; col < ARRAY_DIMENSION; col++) {
            switch (array [row][col]) {
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
              }
          }
    return (one && two && three && four && five && six && seven && eight && nine);
 }
 
 bool addsTo15(int first_number, int second_number, int third_number) {
      return (first_number + second_number + third_number == 15);
 }
 
 bool isMagicSquare(int array[][ARRAY_DIMENSION]) {
      return (hasOneThroughNine(array) && addsTo15(array[0][0], array [0][1], array[0][2]) && addsTo15(array[1][0], array [1][1], array[1][2]) &&
              addsTo15(array[2][0], array [2][1], array[2][2]) && addsTo15(array[0][0], array [1][0], array[2][0]) && addsTo15(array[0][1], array [1][1], array[2][1]) &&
              addsTo15(array[0][2], array [1][2], array[2][2]) && addsTo15(array[0][0], array [1][1], array[2][2]) && addsTo15(array[0][2], array [1][1], array[2][0]));
 }

/* MagicSqare.cp - Tests if a series of numbers comprises a magic square.
 *
 *
 */
int main ( ) {
    int testSquare[ARRAY_DIMENSION][ARRAY_DIMENSION] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
    
    std::string message = (isMagicSquare(testSquare) == 0) ? "This is NOT a magic square.\n\n" : "This is a magic square.\n\n";
    std::cout << message;

    system ("pause");
    return 0;
}
      

#include <iostream>
#include <time.h>
#include <cstdlib>
#include <iomanip>

 void printArray(int the_array[]);
 int  checkMatchingNumbers(int lottery_array[], int user_numbers[]);
 void determineNumbersMatched(int numbers_matched);

 const int ARRAY_SIZE = 5;

 void printArray(int the_array[]) {
    for (int i = 0; i < ARRAY_SIZE; i++)
        std::cout << the_array[i] << " ";
 }
 
 int checkMatchingNumbers(int lottery_array[], int user_numbers[]) {
     int numbers_matched = 0;
     
     for (int i = 0; i < ARRAY_SIZE; i++) {
         if (lottery_array[i] == user_numbers[i])
            numbers_matched++;
     }
     return numbers_matched;
 }
 
 void determineNumbersMatched (int numbers_matched) {
      switch (numbers_matched) {
          case 0:
               std::cout << "Sorry, no numbers matched.\n\n";
               break;
          case 1: case 2: case 3: case 4: 
               std::cout << "You matched " << numbers_matched << " numbers, but did not win the lottery.\n\n";
               break;
          case 5:
               std::cout << "Congratulations! You won the lottery.\n\n";
               break;
          default:
               break;
      }
 }
            
/* Lottery.cpp - A game for playing the lottery.
 *
 * Author: Matt Sheehan
 */
int main ( ) {
    int winning_digits[ARRAY_SIZE];
    int player_guesses[ARRAY_SIZE];
    int player_guess;

    srand(time(0));
    
    for (int i = 0; i < ARRAY_SIZE; i++)
        winning_digits[i] = (rand() % 6 + 1);
       
    std::cout << "Welcome to the lottery machine. Please enter numbers 1-6 for prompts.\n\n";
     
    for (int i = 0; i < ARRAY_SIZE; i++) {
        std::cout << "Please enter number " << i + 1 << ": ";
        std::cin >> player_guess;
       
        while (player_guess < 1 || player_guess > 6) {
            std::cout << "Numbers entered must be 1 - 6. Try again: ";
            std::cin >> player_guess;
         }
        player_guesses[i] = player_guess;
     }
    
    std::cout << std::left << std::setw(18) << "\nLottery numbers: ";
    printArray(winning_digits);
    std::cout << "\n";
    
    std::cout << std::left << std::setw(17) << "Your numbers: ";
    printArray(player_guesses);
    std::cout << "\n\n";
    
    determineNumbersMatched (checkMatchingNumbers(winning_digits, player_guesses));
   
    system ("pause");
    return 0;
}

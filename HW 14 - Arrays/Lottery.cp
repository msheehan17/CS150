/* Lottery.cpp - Determines if the user won the lottery based on the numbers input.
 *
 * HW 14, Part 1.
 * 
 * Programmer: Matthew Sheehan
 *
 * Algorithm:
 *
 * 1. The program will prompt the user to enter numbers of their choice. 
 * 
 * 2. An array of random numbers will be created and compared against the five
 * number entered in by the user. This will be done by cycling through each 
 * element in both arrays and adding one to a count varaible for each match.
 * After cycling through each element, the number of matches will be returned.
 * 
 * 3. The number returned by the function that finds matches in the array will
 * be fed into a switch statment, and based on the number of matches, determine
 * if the user won the lottery or not (yes if the user matches all five numbers).
 */
 
 #include <iostream>
 #include <time.h>
 #include <cstdlib>
 #include <iomanip>
 using namespace std;
 
 void printArray(int theArray[]);
 int  checkMatchingNumbers(int lotteryArray[], int userNumbers[]);
 void determineNumbersMatched(int count);
 
 const int SIZE = 5; // The size of the arrays.
 
 int main(){
     
     int winningDigits[SIZE]; // The five numbers randomly generated for the lottery.
     int player[SIZE];        // The five numbers guessed by the user.
     int user_number;         // The number entered by the user.
 
     // Generate random numbers for the lottery.
     srand(time(0));
     
     for (int i = 0; i < SIZE; i++)
         winningDigits[i] = (rand() % 6 + 1);
        
     cout << "Welcome to the lottery machine. Please enter numbers 1-6 for prompts.\n\n";
      
     // Prompt the user for numbers.
     for (int i = 0; i < SIZE; i++){
         
         cout << "Please enter number " << i + 1 << ": ";
         cin  >> user_number;
         
         while (user_number < 1 || user_number > 6){
               
               cout << "Numbers entered must be 1 - 6. Try again: ";
               cin  >> user_number;
         }
         
         player[i] = user_number;
     }  
     
     // Print the lottery numbers.
     cout << left << setw(18) << "\nLottery numbers: ";
     printArray(winningDigits);
     cout <<  "\n";
     
     // Print the numbers entered by the user.
     cout << left << setw(17) << "Your numbers: ";
     printArray(player);
     cout << "\n\n";
     
     // Determine which numbers matched up, and if the user won the lottery.
     determineNumbersMatched( checkMatchingNumbers( winningDigits, player));
    
     system("pause");
     return 0;
 }
 
 // Prints the elements of the array entered.
 void printArray(int theArray[]){
      
    for (int i = 0; i < SIZE; i++){
        cout << theArray[i];
        cout << " ";
    }
 }
 
 int checkMatchingNumbers(int lotteryArray[], int userNumbers[]){
 
     int count = 0;
     
     for (int i = 0; i < SIZE; i++){
         
         if (lotteryArray[i] == userNumbers[i])
            count++;
     }
     
     return count;
 }
 
 void determineNumbersMatched(int count){
      
      switch(count){
                    
          case 0:
               cout << "Sorry, no numbers matched.\n\n";
               break;
          case 1: case 2: case 3: case 4: 
               cout << "You matched " << count << " numbers, but did not win the lottery.\n\n";
               break;
          case 5:
               cout << "Congratulations! You won the lottery.\n\n";
               break;
          default:
               break;
      }
 }
               
 
 
     
      

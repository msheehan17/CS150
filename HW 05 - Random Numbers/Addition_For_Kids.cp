/* Addition_For_Kids - A program for kids to solve some simple addition.
 * Author: Matthew Sheehan
 * Project: HW5, Part 4
 *
 * Algorithm:
 *
 * 1. Randomly generate two numbers and print them to the screen.
 *
 * 2. Prompt the user for the sum of the solution.
 *
 * 3. After the user has answered the solution, print the sum to the screen
 * so they can determine if they got the answer right or not.
 *
 */
 
 # include <iostream>
 # include <iomanip>  // For formatting the numbers to add.
 # include <cstdlib>  // For use of the random function.
 # include <ctime>    // Used for generating the seed value so numbers will always be random.
 using namespace std;
 
 int main()
 {
     // Constants, the max and min value of the random number range.
     const int MIN_VALUE = 1, MAX_VALUE = 99;
     
     // Instance variables.
     int number1, number2, sum; // The randomly generated numbers and their sum.
     int user_guess; // Holds the user's guess, but won't be used for anything.
     unsigned seed = time(0); // Used to generate a new seed value.
     
     // Generate the random numbers.
     srand(seed);
     number1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)  + MIN_VALUE); 
     number2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)  + MIN_VALUE);
     
     // Prompt the user to solve the addition problem.
     cout << "Hello user! Can you tell me the sum of the two numbers below? \n \n";
     
     cout << right << setw(4) << number1 << endl;
     cout << left  << setw(1) << "+" << right << setw(3) << number2 << endl;
     cout << setw(8) << "________\n\n";
     
     cout << "Answer: ";
     cin  >> user_guess;
     cout << endl << endl;
     
     // Calculate the sum and print it to the user.
     sum = (number1 + number2);
     
     cout << "The answer is: " << sum << ". Did you get it right?\n\n";
     
     system("pause");
     return 0;
 }// End main.
     
      

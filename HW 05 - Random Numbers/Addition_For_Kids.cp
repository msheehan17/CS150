 #include <iostream>
 #include <iomanip>
 #include <cstdlib>
 #include <ctime>
 
/* Addition_For_Kids.cp - A game where kids guess the sum of two random numbers.
 *
 * Author: Matt Sheehan
 */
 int main() {
     const int RANDOM_NUMBER_RANGE_MIN_VALUE = 1;
     const int RANDOM_NUMBER_RANGE_MAX_VALUE = 99;
     
     int first_randomly_guessed_number;
     int second_randomly_guessed_number;
     int sum_of_the_two_random_numbers;
     int user_guess;
     unsigned seed = time(0);
     
     srand (seed);
     
     first_randomly_guessed_number = (rand() % (RANDOM_NUMBER_RANGE_MAX_VALUE -
     RANDOM_NUMBER_RANGE_MAX_VALUE + 1) + RANDOM_NUMBER_RANGE_MIN_VALUE );
     
     second_randomly_guessed_number = (rand() % (RANDOM_NUMBER_RANGE_MAX_VALUE -
     RANDOM_NUMBER_RANGE_MAX_VALUE + 1) + RANDOM_NUMBER_RANGE_MIN_VALUE );
     
     std:: cout << "Hello! Can you tell me the sum of the two numbers below? \n\n";
     
     std::cout << std::right << std::setw(4) << first_randomly_guessed_number << "\n";
     std::cout << std::left  << std::setw(1) << "+" << std::right << std::setw(3) << second_randomly_guessed_number
     << "\n";
     std::cout << std::setw(8) << "________\n\n";
     
     std::cout << "Your answer: ";
     std::cin  >> user_guess;
     std::cout << "\n\n";
     
     sum_of_the_two_random_numbers = (first_randomly_guessed_number + second_randomly_guessed_number);
     
     std::cout << "The answer is: " << sum_of_the_two_random_numbers << ". Did you get it right?\n\n";
     
     system ( "pause" );
     return 0;
 }

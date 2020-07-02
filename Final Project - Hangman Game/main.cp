/* Algorithm:
 *
 * 1. The program will contain an array (type: string) of predefined words for the user to guess from. A separate player object
 * will be created to represent the player playing the game.
 *
 * 2. A function called chooseWord will return one of these words by indexing. The index will be chosen at random by the rand()
 * function.
 *
 * 3. Once the word has been choosen, it will be returned into a string variable within main().
 *
 * 4. Within main there will be two loops. The outer loop will continue so long as the user wants to continue playing. The inner
 * loop will continue until either the user correctly guesses the word (more details below) or has reached the maximum number
 * of guesses (4).
 *
 * 5. Within the outer loop, the user will first be prompted for their name. Once they have given their name, the program will
 * greet them and give them instructions on how to play hangman. They will be informed each wrong guess results in a body part of
 * the hangman being drawn, until they either guess the word or reach their maximum amount of guesses.
 *
 * 6. Once the user has been give directions, the inner loop will begin.
 *
 * 7. The inner loop will envoke the chooseWord function and store the randomly selected result (see step 2) in a string variable.
 *
 * 8. An array of characters will be used to represent each letter of the word to guess. The array's size will be equal to the
 * word to guess length.
 *
 * 9. The array of characters will be assigned the asterik "*" character to each index. This will represent a letter that has
 * yet to been guessed.
 *
 * 10. The user will then be prompted to guess a letter. The letter will be compared against every character in the word to guess,
 * and for each match, the correspeonding place in the characters array will be updated with the letter guessed. Example: The user
 * guesses "s" which matches the third letter in the word to guess. The third charcter (index[2] of the array) will then be replaced
 * from a "*" to the "s" guessed by the user.
 *
 * 11. The indices of the character array will then be printed, showing the user if they correctly matched any letters in the word
 * to guess by showing the letter instead of the asterik.
 *
 * 12. The character array will then be fed as an argument into the function checkIfWordGuessed. This function will use a for loop
 * to look through each index of the array. If any element is an asterik "*", the function will return false (otherwise returns
 * true).
 *
 * 13. The result of the checkIfWordGuess function will be stored in the wordGuessed variable (which controls the inner loop). If
 * wordGuessed is true, the player will be congratulated on successfully guessing the word. The player's points will be increased
 * by 100, and a break statement will be used to exit the inner loop.
 *
 * 14. If wordGuessed is false, the number of guesses the player has made will be incremented by one. The program will check if
 * numberOfGuesses (int variable) is equal to 4. If numberOfGuesses is in fact equal to four, the player will be informed they
 * failed to guess the word, and a full hangman will be displayed. The player's points will be decreased by 100, and a break
 * statement will be used to terminate the inner loop.
 *
 * 15. If wordGuessed is false, and numberOfGuesses does not equal four, then the user will be told how many guesses they have made.
 * The user will also have a respective part of their hangman drawn (1 guess = head drawn, 2 guesses = head and arms drawn, 3
 * guesses = head, arms, and legs drawn).
 *
 * 16. Once the inner loop has been terminated because either the user has correctly guessed the word, or they have reached their
 * maximum number of guesses, the program will then prompt the user if they would like to contiune playing hangman. A separate
 * function will be used for this prompt, and an if statment will control returning true (the user has entered yes) or false.
 *
 * 17. The outer loop will continue until the user elects to not play hangman any further.
 *
 */

#include <iostream> // For cout/cin
#include <string>   // For string variables
#include <time.h>   // For srand(time(0))
#include "Player.h" // For creating player objects.
using namespace std;

// Function prototypes.
string promptUserForName();
string chooseWord();
bool checkIfWordGuessed(char[], int);
bool checkIfWordGuessed(char[], string);
bool continuePlaying();
void giveDirections(string);
void adjustPlayerScore(Player, bool);
void drawHead();
void drawBody();
void drawArms();
void drawLegs();

// The size of the array holding the words for the user to guess.
const int ARRAY_SIZE = 12;

// The array of words for the user to guess from.
string wordsToGuess [] = { "cat", "dog", "hello", "cake", "happy", "smile", "sun", "moon", "yellow", "flower", "red", "blue" };

int main() {
    
    bool keepPlaying = true;
    
    // Create the initial player to play the hangman game.
    Player mainPlayer;
    
    // After prompting the user for their name, initialize the player object's name.
    mainPlayer.setName(promptUserForName());
    
    // Provide the player with the directions for the game.
    giveDirections(mainPlayer.getName());
    
    // The outer loop that will continue so long as the user wants to continue playing hangman.
    while (keepPlaying)
    {
        // The word for the user to guess is selected.
        string wordToGuess = chooseWord();
        
        // The length of the word is used for other parts of the program.
        int wordLength = (int) wordToGuess.length();
        
        // An array the same length as the word to guess. Each index contains "*", unless the user correctly guesses a letter.
        char lettersToGuess [wordLength];
        for (int i = 0; i < wordLength; i++)
        {
            lettersToGuess[i] = '*';
        }
        
        // The number of guesses made by the user.
        int numberOfGuesses = 0;
        
        // Used to control the inner loop.
        bool wordGuessed = false;
        
        while (!wordGuessed)
        {
            // The letter guessed by the user.
            char letterGuess;
            
            // Prompt the user for their guess.
            cout << "Please guess a letter: ";
            cin  >> letterGuess;
            cout << "\n";
            
            // Check to determine if any letters in the word to guess match the letter guessed.
            for (int i = 0; i < wordLength; i++)
            {
                if (letterGuess == wordToGuess[i])
                {
                    // If there is a match, we update the array with the letter.
                    lettersToGuess[i] = letterGuess;
                }
            }
            
            // List the updated array.
            for (int i = 0; i < wordLength; i++)
            {
                cout << lettersToGuess[i];
            }
            
            cout << "\n\n";
            
            // Search through the array to determine if any asteriks remain.
            wordGuessed = checkIfWordGuessed(lettersToGuess, wordLength);
            
            // Check to see if the entire word is guessed.
            if (wordGuessed)
            {
                cout << "Congratulations! You guessed the word " << wordToGuess << "!\n\n";
                // Add points to the player's score for winning the game.
                adjustPlayerScore(mainPlayer, true);
                break;
            }
            
            // Increment the number of guesses
            numberOfGuesses++;
            
            // The user has reached their maximum number of guesses.
            if (numberOfGuesses == 4)
            {
                cout << "Sorry! You did not correctly guess the word. The word was: " << wordToGuess << "\n";
                drawLegs();
                cout << "\n";
                // Remove points from the player's score for losing the game.
                adjustPlayerScore(mainPlayer, false);
                break;
            }
            
            // Indicate the number of guesses made.
            cout << "Number of guesses: " << numberOfGuesses << "\n\n";
            
            // Based on the number of guesses the player has, draw the respective body part(s).
            switch (numberOfGuesses) {
                case 1:
                    drawHead();
                    break;
                case 2:
                    drawBody();
                    break;
                case 3:
                    drawArms();
                    break;
                default:
                    break;
            }
        }
        
        keepPlaying = continuePlaying();
        cout << "\n";
    }
    
    system("pause");
    return 0;
}

// Prompts the user for their name to enter into the player object. Checks to ensure the user doens't enter an empty string.
string promptUserForName()
{
    string userName;
    cout << "What is your name?: ";
    cin  >> userName;
    
    while (userName == "" || userName == " ")
    {
        cout << "Invalid user name. Please try again: ";
        cin  >> userName;
    }
    
    return userName;
}

// Instructs the user on how to play the hangman game.
void giveDirections (string playerName)
{
    cout << "\nHello " << playerName << "!\n\n";
    cout << "Hangman is played by a random word being generated for the you to guess. You will have 4 attempts to guess the  \n";
    cout << "word choosen. For each wrong guess, a body part of the hangman will be drawn. After 4 guesses, the hangman will \n";
    cout << "be drawn, and the game will be lost. Try to guess the word before the hangman is fully drawn! Good luck.\n\n";
}

// Randomly chooses a word for the user to guess.
string chooseWord()
{
    srand(time(0));
    return wordsToGuess [rand() % ARRAY_SIZE + 1];
}

// Determines if the word is guessed by the user.
bool checkIfWordGuessed(char letters [], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (letters[i] == '*')
        {
            return false;
        }
    }
    
    return true;
}

// Determines if the word is guessed by the user.
bool checkIfWordGuessed(char letters[], string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        if (letters[i] != word[i])
        {
            return false;
        }
    }
    
    return true;
}

// Draws just the hangman's head (1 wrong guess)
void drawHead()
{
    cout << "     *     " << "\n";
    cout << "     *     " << "\n";
    cout << "     *     " << "\n";
    cout << "    ***    " << "\n";
    cout << "   *   *   " << "\n";
    cout << "    ***    " << "\n\n";
}

// Draws the hangman's head and body (2 wrong guesses).
void drawBody()
{
    cout << "     *     " << "\n";
    cout << "     *     " << "\n";
    cout << "     *     " << "\n";
    cout << "    ***    " << "\n";
    cout << "   *   *   " << "\n";
    cout << "    ***    " << "\n";
    cout << "     *     " << "\n";
    cout << "     *     " << "\n";
    cout << "     *     " << "\n";
    cout << "     *     " << "\n";
    cout << "     *     " << "\n";
    cout << "     *     " << "\n\n";
}

// Draws the hangman's head, body, and arms (3 wrong guesses).
void drawArms()
{
    cout << "     *     " << "\n";
    cout << "     *     " << "\n";
    cout << "     *     " << "\n";
    cout << "    ***    " << "\n";
    cout << "   *   *   " << "\n";
    cout << "    ***    " << "\n";
    cout << "     *     " << "\n";
    cout << "     *     " << "\n";
    cout << "   * * *   " << "\n";
    cout << "  *  *  *  " << "\n";
    cout << " *   *   * " << "\n";
    cout << "     *     " << "\n\n";
}

// Draws the full hangman (4 wrong guesses), user has lost the game.
void drawLegs()
{
    cout << "     *     " << "\n";
    cout << "     *     " << "\n";
    cout << "     *     " << "\n";
    cout << "    ***    " << "\n";
    cout << "   *   *   " << "\n";
    cout << "    ***    " << "\n";
    cout << "     *     " << "\n";
    cout << "     *     " << "\n";
    cout << "   * * *   " << "\n";
    cout << "  *  *  *  " << "\n";
    cout << " *   *   * " << "\n";
    cout << "     *     " << "\n";
    cout << "   * * *   " << "\n";
    cout << "  *     *  " << "\n";
    cout << "  *     *  " << "\n";
    cout << "  *     *  " << "\n";
    cout << "  *     *  " << "\n";
    cout << "  *     *  " << "\n\n";
}

// Increase or decreases the player's score based on the bool value (true = increase, else decrease).
void adjustPlayerScore(Player &thePlayer, bool increase)
{
    int currentScore = thePlayer.getScore();
    
    // If increase is true, the player's won the game and their score will be increase by 100.
    if (increase)
    {
        thePlayer.setScore(currentScore + 100);
    }
    else
    {
        thePlayer.setScore(currentScore - 100);
    }
    
}

// Prompts the user if they would like to contiue playing hangman.
bool continuePlaying()
{
    // The user's input.
    string userInput;
    
    cout << "Would you like to keep playing? ( y/yes | n/no ): ";
    cin  >> userInput;
    
    // User has selected to continue playing hangman.
    if (userInput == "y" || userInput == "yes" || userInput == "Y" || userInput == "YES")
    {
        return true;
    }
    
    // User has declined to stop playing hangman.
    return false;
}

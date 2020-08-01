#include <iostream>
#include <string>
#include <time.h>
#include "Player.h"

// Function prototypes.
string promptUserForName();
string chooseWord();
bool checkIfWordGuessed(char[], int);
bool checkIfWordGuessed(char[], std::string);
bool continuePlaying();
void giveDirections(std::string);
void adjustPlayerScore(Player, bool);
void drawHead();
void drawBody();
void drawArms();
void drawLegs();

const int ARRAY_SIZE = 12;
string wordsToGuess [] = { "cat", "dog", "hello", "cake", "happy", "smile", "sun", "moon", "yellow", "flower", "red", "blue" };

int main() {
    
    bool keepPlaying = true;
    
    Player mainPlayer;
    
    mainPlayer.setName(promptUserForName());
    giveDirections(mainPlayer.getName());
    
    while (keepPlaying) {
        std::string wordToGuess = chooseWord();
        int wordLength = (int) wordToGuess.length();
        int numberOfGuesses = 0;
        bool wordGuessed = false;
        char lettersToGuess[wordLength];
        
        for (int i = 0; i < wordLength; i++) {
            lettersToGuess[i] = '*';
        }
        
        while (!wordGuessed) {
            char letterGuess;
            
            std::cout << "Please guess a letter: ";
            std::cin >> letterGuess;
            std::cout << "\n";
            
            for (int i = 0; i < wordLength; i++) {
                if (letterGuess == wordToGuess[i])
                    lettersToGuess[i] = letterGuess;
            }
            
            for (int i = 0; i < wordLength; i++) {
                cout << lettersToGuess[i];
            }
            
            cout << "\n\n";
            
            wordGuessed = checkIfWordGuessed(lettersToGuess, wordLength);
            
            if (wordGuessed) {
                std::cout << "Congratulations! You guessed the word " << wordToGuess << "!\n\n";
                adjustPlayerScore(mainPlayer, true);
                break;
            }
            
            numberOfGuesses++;
            
            if (numberOfGuesses == 4) {
                std::cout << "Sorry! You did not correctly guess the word. The word was: " << wordToGuess << "\n";
                drawLegs();
                std::cout << "\n";
                adjustPlayerScore(mainPlayer, false);
                break;
            }
            
            std::cout << "Number of guesses: " << numberOfGuesses << "\n\n";
            
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
        std::cout << "\n";
    }
    system("pause");
    return 0;
}


string promptUserForName() {
    std::string userName;
    std::cout << "What is your name?: ";
    std::cin >> userName;
    
    while (userName == "" || userName == " ") {
        std::cout << "Invalid user name. Please try again: ";
        std::cin >> userName;
    }
    return userName;
}

void giveDirections(std::string playerName) {
    std::cout << "\nHello " << playerName << "!\n\n";
    std::cout << "Hangman is played by a random word being generated for the you to guess. You will have 4 attempts to guess the  \n";
    std::cout << "word choosen. For each wrong guess, a body part of the hangman will be drawn. After 4 guesses, the hangman will \n";
    std::cout << "be drawn, and the game will be lost. Try to guess the word before the hangman is fully drawn! Good luck.\n\n";
}


string chooseWord() {
    srand(time(0));
    return wordsToGuess[rand() % ARRAY_SIZE + 1];
}

bool checkIfWordGuessed(char letters [], int size) {
    for (int i = 0; i < size; i++) {
        if (letters[i] == '*')
            return false;
    }
    return true;
}

bool checkIfWordGuessed(char letters[], string word) {
    for (int i = 0; i < word.length(); i++) {
        if (letters[i] != word[i])
            return false;
    }
    return true;
}

void drawHead() {
    std::cout << "     *     " << "\n";
    std::cout << "     *     " << "\n";
    std::cout << "     *     " << "\n";
    std::cout << "    ***    " << "\n";
    std::cout << "   *   *   " << "\n";
    std::cout << "    ***    " << "\n\n";
}


void drawBody() {
    std::cout << "     *     " << "\n";
    std::cout << "     *     " << "\n";
    std::cout << "     *     " << "\n";
    std::cout << "    ***    " << "\n";
    std::cout << "   *   *   " << "\n";
    std::cout << "    ***    " << "\n";
    std::cout << "     *     " << "\n";
    std::cout << "     *     " << "\n";
    std::cout << "     *     " << "\n";
    std::cout << "     *     " << "\n";
    std::cout << "     *     " << "\n";
    std::cout << "     *     " << "\n\n";
}

void drawArms() {
    std::cout << "     *     " << "\n";
    std::cout << "     *     " << "\n";
    std::cout << "     *     " << "\n";
    std::cout << "    ***    " << "\n";
    std::cout << "   *   *   " << "\n";
    std::cout << "    ***    " << "\n";
    std::cout << "     *     " << "\n";
    std::cout << "     *     " << "\n";
    std::cout << "   * * *   " << "\n";
    std::cout << "  *  *  *  " << "\n";
    std::cout << " *   *   * " << "\n";
    std::cout << "     *     " << "\n\n";
}

void drawLegs() {
    std::cout << "     *     " << "\n";
    std::cout << "     *     " << "\n";
    std::cout << "     *     " << "\n";
    std::cout << "    ***    " << "\n";
    std::cout << "   *   *   " << "\n";
    std::cout << "    ***    " << "\n";
    std::cout << "     *     " << "\n";
    std::cout << "     *     " << "\n";
    std::cout << "   * * *   " << "\n";
    std::cout << "  *  *  *  " << "\n";
    std::cout << " *   *   * " << "\n";
    std::cout << "     *     " << "\n";
    std::cout << "   * * *   " << "\n";
    std::cout << "  *     *  " << "\n";
    std::cout << "  *     *  " << "\n";
    std::cout << "  *     *  " << "\n";
    std::cout << "  *     *  " << "\n";
    std::cout << "  *     *  " << "\n\n";
}

void adjustPlayerScore(Player &thePlayer, bool increase) {
    int currentScore = thePlayer.getScore();
    
    if (increase)
        thePlayer.setScore(currentScore + 100);
    else
        thePlayer.setScore(currentScore - 100);
}

bool continuePlaying() {
    std::string userInput;
    
    std::cout << "Would you like to keep playing? ( y/yes | n/no ): ";
    std::cin >> userInput;
    
    if (userInput == "y" || userInput == "yes" || userInput == "Y" || userInput == "YES")
        return true;
    
    return false;
}

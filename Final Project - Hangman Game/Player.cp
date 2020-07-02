#include "Player.h"
#include <iostream> // For cout/cin

// Full constructor; sets the player's name, score is set to 1000.
Player::Player(std::string nameArgument)
{
    name = nameArgument;
    score = 1000;
}

// No-argument constructor; sets the player's name to "John Smith" and score to 1000.
Player::Player()
{
    name = "John Smith";
    score = 1000;
}

// Set the player's name.
void Player::setName(std::string nameArgument)
{
    // Control the user entering an invalid argument.
    while (nameArgument == "" || name == " ")
    {
        std::cout << "Name cannot be blank. Try again: ";
        std::cin >> nameArgument;
    }
    
    name = nameArgument;
}

// Set the player's score.
void Player::setScore(int scoreArgument)
{
    // Control the user entering an invalid argument.
    while (scoreArgument < 0 && score > 1000)
    {
        std::cout << "Score must be between 0 and 1000. Try again: ";
        std::cin >> scoreArgument;
    }
    
    score = scoreArgument;
}

// Returns the player's name.
std::string Player::getName()
{
    return name;
}

// Returns the player's score.
int Player::getScore()
{
    return score;
}

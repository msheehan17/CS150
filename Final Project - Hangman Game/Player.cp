#include "Player.h"
#include <iostream>

Player::Player(std::string newName){
    name = newName;
    score = 1000;
}

Player::Player() {
    name = "John Smith";
    score = 1000;
}

void Player::setName(std::string newName) {
    while (newName == "" || newName == " ") {
        std::cout << "Name cannot be blank. Try again: ";
        std::cin >> newName;
    }
    name = newName;
}

void Player::setScore(int newScore) {
    while (newScore < 0 && newScore > 1000) {
        std::cout << "Score must be between 0 and 1000. Try again: ";
        std::cin >> newScore;
    }
    score = newScore;
}

std::string Player::getName() {
    return name;
}

int Player::getScore() {
    return score;
}

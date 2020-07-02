#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player
{
    private:
        std::string name;
        int score;
    public:
        Player(std::string);
        Player();
        void setName(std::string);
        void setScore(int);
        std::string getName();
        int getScore();
};
#endif

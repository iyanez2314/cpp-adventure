#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
#include "World.hpp"

class Player {
private:
    int health;
    bool alive;
    std::string name;
    std::string weapon;
    World current_world;

public:
    Player(int h = 100, std::string n = "Player");
    ~Player();
    int getHealth();
    void setHealth(int h);
    void setCurrentWorld(World w);
    void printHealth();
    void damage(int d);
    void heal(int h);
    void kill();
    void revive();
    bool isAlive();
    void setName(std::string n);
    void setWeapon(std::string w);
    std::string getWeapon();
    std::string getName();
    std::string getCurrentWorld();
    std::string getWorldKing();
    std::string getWorldName();
};

#endif // PLAYER_HPP

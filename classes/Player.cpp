#include "Player.hpp"
#include "World.hpp"
#include <string>
#include <iostream>
using namespace std;

Player::Player(int h, std::string n) {
    health = h;
    name = n;
    alive = true;
}

Player::~Player() {
   
}
int Player::getHealth() {
    return health;
}

void Player::setHealth(int h) {
    health = h;
}

void Player::setCurrentWorld(World w) {
    current_world = w;
}

void Player::printHealth() {
    cout << "Health: " << health << endl;
}

void Player::damage(int d) {
    health -= d;
    if (health <= 0) {
        kill();
    }
}

void Player::heal(int h) {
    health += h;
}

void Player::kill() {
    alive = false;
}

void Player::revive() {
    alive = true;
}

bool Player::isAlive() {
    return alive;
}

void Player::setName(std::string n) {
    name = n;
}

void Player::setWeapon(std::string w) {
    weapon = w;
}

std::string Player::getWeapon() {
    return weapon;
}

World Player::getCurrentWorld() {
    return current_world;
}

std::string Player::getName() {
    return name;
}
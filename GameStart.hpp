#ifndef GAMESTART_HPP
#define GAMESTART_HPP

#include "classes/Player.hpp"

#include <string>

void start();
void printChoices(std::string choice);
bool readyCheck(char ready);
void validateChoices(std::string choice, Player &player1, std::string type);

#endif 

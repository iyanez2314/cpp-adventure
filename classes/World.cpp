#include "World.hpp"
#include <string>
#include <iostream>
using namespace std;


World::World(std::string wn, std::string wk) {
    world_name = wn;
    world_king = wk;
}

World::World() {
   World("","");
}

World::~World() {
   
}

std::string World::getWorldName() {
    return world_name;
}

std::string World::getWorldKing() {
    return world_king;
}

int World::getWorldKingHealth() {
    return world_king_health;
}

int World::getHenchMenCount(){
    return hench_men_count;
}

int World::getHenchMenHealth(){
    return hench_men_health;
}

int World::getHenchMenDamage(){
    return hench_men_damage;
}

void World::setWorldName(std::string wn) {
    world_name = wn;
}

void World::setWorldKing(std::string wk) {
    world_king = wk;
}

void World::setWorldKingHealth(int world_king_health) {
    world_king_health = world_king_health;
}
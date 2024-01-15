#ifndef WORLD_HPP
#define WORLD_HPP

#include <string>

class World {

private:
    std::string world_name;
    std::string world_king;
    int world_king_health;
    int hench_men_count;
    int hench_men_health;
    int hench_men_damage;

public:
    World(std::string world_name, std::string world_king);
    World();
    ~World();
    std::string getWorldName();
    std::string getWorldKing();
    int getWorldKingHealth();
    int getHenchMenCount();
    int getHenchMenHealth();
    int getHenchMenDamage();
    void setWorldName(std::string world_name);
    void setWorldKing(std::string world_king);
    void setWorldKingHealth(int world_king_health);
};


#endif
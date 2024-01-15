#include <iostream>
#include "GameStart.hpp"
#include "classes/World.hpp"
#include "classes/Player.hpp"
using namespace std;


// This is the main game loop
void start (){

Player player1;
string name;
char ready;
string weapon;
string world_chosen;

cout << "Welcome to the game!" << endl;
cout << "What will your players name be?" << endl;
cin >> name;
player1.setName(name);


cout << "Now " << player1.getName() << " You will be going on a conquest to defeat all the kings of each world are you ready? Y/n" << endl;

cin >> ready;

bool is_ready = readyCheck(ready);

if(!is_ready){
    return;
}

cout << "Well then lets get started" << endl;

cout << "You will now choose a weapon" << endl;

printChoices("weapons");

cin >> weapon;

validateChoices(weapon, player1, "weapons");

cout << "You have chosen " << player1.getWeapon() << endl;

cout << "What a great choice!" << endl;

cout << "Now that you have chosen your weapon you will now be able to start your journey" << endl;

cout << "You will now be able to choose your first world" << endl;

printChoices("worlds");
// cout << "[1]. The World of the Gods" << endl;
// cout << "[2]. The World of the Angels" << endl;
// cout << "[3]. The World of the Demons" << endl;
// cout << "[4]. The World of the Dwarfs" << endl;
// cout << "[5]. The World of the Elves" << endl;
// cout << "Please choose a world before you continue!" << endl;

cin >> world_chosen;


validateChoices(world_chosen, player1, "worlds");

cout << "You have chosen " << player1.getCurrentWorld().getWorldName() << endl;

cout << "What a great choice!" << endl;

cout << "Now that you have chosen your world you will now be able to start your journey" << endl;
};


// this function checks to see if the user is ready to start the game
bool readyCheck(char ready){
    if(ready != 'Y' && ready != 'y'){
        cout << "Well then you are not ready to play this game" << endl;
        return false;
    }
    return true;
};

// prints the choices for the user depending on which one they are showing currently
void printChoices(string choice){
    if(choice == "weapons"){
        cout << "[1]. The Sword of the Gods" << endl;
        cout << "[2]. The Bow of the Angels" << endl;
        cout << "[3]. The Staff of the Demons" << endl;
        cout << "[4]. The Axe of the Dwarfs" << endl;
        cout << "[5]. The Dagger of the Elves" << endl;
    }else if(choice == "worlds"){
        cout << "[1]. The World of the Gods" << endl;
        cout << "[2]. The World of the Angels" << endl;
        cout << "[3]. The World of the Demons" << endl;
        cout << "[4]. The World of the Dwarfs" << endl;
        cout << "[5]. The World of the Elves" << endl;
    }
};

void validateChoices(string choice, Player &player1, string type){
    // First we check the choice of the user to make sure it is a valid choice
     while( choice != "1" && choice != "2" && choice != "3" && choice != "4" && choice != "5")
    {
        cout << "Please choose from the numbers above!" << endl;
        cin >> choice;
    } 

    // Once we have validated the choice we can now set the choice to the correct choice
    if(type == "weapons"){
        switch (stoi(choice)){
            case 1:
                player1.setWeapon("The Sword of the Gods");
                break;
            case 2:
                player1.setWeapon("The Bow of the Angles");
                break;
            case 3:
                player1.setWeapon("The Staff of the Demons");
                break;
            case 4:
                player1.setWeapon("The Axe of the Dwarfs");
                break;
            case 5:
                player1.setWeapon("The Dagger of the Elves");
                break;
            default:
                cout << "You did not choose a weapon" << endl;
                return;
        }
    } else if (type == "worlds"){
            switch(stoi(choice))
            {
                case 1:
                    player1.setCurrentWorld(World("The World of the Gods", "The King of the Gods"));
                    break;
                case 2:
                    player1.setCurrentWorld(World("The World of the Angles", "The King of the Angels"));
                    break;
                case 3:
                    player1.setCurrentWorld(World("The World of the Demons", "The King of the Demons"));
                    break;
                case 4:
                    player1.setCurrentWorld(World("The World of the Dwarfs", "The King of the Dwarfs"));
                    break;
                case 5:
                    player1.setCurrentWorld(World("The World of the Elves", "The King of the Elves"));
                    break;
                default:
                    cout << "You did not choose a world" << endl;
                    return;
            };
        };
};
#include <iostream>
#include "GameStart.hpp"
#include "classes/Player.hpp"
using namespace std;


// This is the main game loop
void start (){

Player player1;
string name;
char ready;
string weapon;

cout << "Welcome to the game!" << endl;
cout << "What will your players name be?" << endl;
cin >> name;
player1.setName(name);

cout << "Now " << player1.getName() << " You will be going on a conquest to defeat all the kings of each world are you ready? Y/n" << endl;

cin >> tolower(ready);

if(ready != 'y'){
    cout << "Well then you are not ready to play this game" << endl;
    return;
}

cout << "Well then lets get started" << endl;

cout << "You will now choose a weapon" << endl;

cout << "[1]. The Sword of the Gods" << endl;
cout << "[2]. The Bow of the Angles" << endl;
cout << "[3]. The Staff of the Demons" << endl;
cout << "[4]. The Axe of the Dwarfs" << endl;
cout << "[5]. The Dagger of the Elves" << endl;
cout << "Please choose a weapon before you continue!" << endl;

cin >> weapon;

while( weapon != "1" && weapon != "2" && weapon != "3" && weapon != "4" && weapon != "5"){
    cout << "Please choose a weapon before you continue!" << endl;
    cin >> weapon;
}

switch (stoi(weapon)){
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
};

cout << "You have chosen " << player1.getWeapon() << endl;

cout << "What a great choice!" << endl;

cout << "Now that you have chosen your weapon you will now be able to start your journey" << endl;

cout << "You will now be able to choose your first world" << endl;

cout << "[1]. The World of the Gods" << endl;
cout << "[2]. The World of the Angles" << endl;
cout << "[3]. The World of the Demons" << endl;
cout << "[4]. The World of the Dwarfs" << endl;
cout << "[5]. The World of the Elves" << endl;
cout << "Please choose a world before you continue!" << endl;


}
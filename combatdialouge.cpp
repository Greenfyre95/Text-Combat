#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main(){
    srand (time(NULL));
    string parts[] = {"head ", "arm ", "leg ", "chest ",
                        "knee ", "elbow ", "wrist ", "hand ",
                        "foot ", "toe ", "eye ", "nose ",
                        "ear ", "hair ", "mouth ", "groin ",
                        "shoulder "};
    string side[] = {"left ", "right "};
    string attack[] = {"punched ", "kicked ", "hacked ", "slashed ", "stabbed ", "missed "};
    //int strike = rand() % parts.length();//range from 0 to length of parts array
    char input;
    char name[80];

    cout << "Please enter your name: ";
    cin >> name;
    cout << "Press q to exit\n\n";
    cout << name << " " << attack[rand() % 5] << "the enemy's " << side[rand() % 1] << parts[rand() % 16];
}

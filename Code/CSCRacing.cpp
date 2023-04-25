//Krysta Parker
#include <iostream>
#include "Racetrack.h"
#include "Gameplay.h"

using namespace std;

//Abstraction -
//Encapsulation -
//Polymorphism -
//Inheritance -

Gameplay gameplay;
Racetrack track;    //Create RaceTrack object
void track1();
void track2();
void track3();
void track4();

int main()
{

    char gameDone;

    cout << "   ___________ ______   ____             _            " << endl
         << "  / ____/ ___// ____/  / __ \\____ ______(_)___  ____ _" << endl
         << " / /    \\__ \\/ /      / /_/ / __ `/ ___/ / __ \\/ __ `/" << endl
         << "/ /___ ___/ / /___   / _, _/ /_/ / /__/ / / / / /_/ / " << endl
         << "\\____//____/\\____/  /_/ |_|\\__,_/\\___/_/_/ /_/\\__, /  " << endl
         << "                                             /____/   " << endl;

    int option = 0;

    //Prompt menu with options of tracks or exit the program
    cout << "Please select a track to begin:" << endl
         << "1. track1.txt" << endl
         << "2. track2.txt" << endl
         << "3. track3.txt" << endl
         << "4. track4.txt" << endl
         << "5. exit.txt" << endl;
    cin >> option;

    switch (option) {
        case 1: track1();
            break;
        case 2: track2();
            break;
        case 3: track3();
            break;
        case 4: track4();
            break;
        case 5:
            cout << "Goodbye!";
            exit(0);
        default:
            cout << "Are you done playing(y/n)? ";
            cin >> gameDone;

            if (toupper(gameDone) == 'N')
                cout << "Too bad!" << endl;

            cout << "Goodbye!" << endl;
    }

}

void track1() {
    ifstream trackFile("/Users/krysta/Downloads/CourseProject3_Fixing/track1.txt");
    track.read(trackFile); //Using text file to create track and weights
    track.displayWeights();
    track.setTrack(1,1, '1');
    track.setTrack(1,2, '2');
    track.setTrack(1,3, '3');
    track.displayTrack();
    cout << "DIMENSIONS: " << track.height() << " " << track.width() << endl;
    gameplay.game();

}

void track2() {
    ifstream trackFile("/Users/krysta/Downloads/CourseProject3_Fixing/track2.txt");
    track.read(trackFile); //Using text file to create track and weights
    track.displayWeights();
    track.setTrack(16,1, '1');
    track.setTrack(16,2, '2');
    track.setTrack(16,3, '3');
    track.displayTrack();
    cout << "DIMENSIONS: " << track.height() << " " << track.width() << endl;
    gameplay.game();
}

void track3() {
    ifstream trackFile("/Users/krysta/Downloads/CourseProject3_Fixing/track3.txt");
    track.read(trackFile); //Using text file to create track and weights
    track.displayWeights();
    track.setTrack(15,1, '1');
    track.setTrack(15,2, '2');
    track.setTrack(15,3, '3');
    track.displayTrack();
    cout << "DIMENSIONS: " << track.height() << " " << track.width() << endl;
    gameplay.game();
}

void track4() {
    ifstream trackFile("/Users/krysta/Downloads/CourseProject3_Fixing/track4.txt");
    track.read(trackFile); //Using text file to create track and weights
    track.displayWeights();
    track.setTrack(1,1, '1');
    track.setTrack(1,2, '2');
    track.setTrack(1,3, '3');
    track.displayTrack();
    cout << "DIMENSIONS: " << track.height() << " " << track.width() << endl;
    gameplay.game();
}
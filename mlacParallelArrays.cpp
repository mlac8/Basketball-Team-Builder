/* mlacParallelArrays.cpp
* 
* CSCI 112 Summer 2021
* last edited July 26, 2021 by M. Lacanilao
*
* This is a program that runs Parallel Arrays that reperesent a basketball team.
* One array each basketball player's name, and the other represents the number of points
* each player scored during a game.
* The program will ask the user for each player's name and how many points they scored.
* The program will then add up each player's points, and output the point total and player
* point average.
* Lastly, the program will display the player's name who scored the most points and how many were scored.
*/

#include <iostream> // imports input/output library
#include <string> // imports string library
#include "mlacParallelArrays.h"

using namespace std;
int main()
{
    // declare variables
    string playerNames[5];
    int playerPoints[5];
    int pointsMVP = 0;
    int indexPosMVP = 0;
    int playerPointsTotal = 0;
    double playerPointsAvg = 0.0;
    int i = 0;

    // for loop below will prompt the user for each player's name and points scored
    for (i = 0; i < 5; i++) {
        cout << "Please enter a basketball player's name: ";
        cin >> playerNames[i];
        cout << "Please enter how many points they scored: ";
        cin >> playerPoints[i];
    } // end for()
    cout << endl;

    // loop that displays data sets from both arrays until all five items have been listed
    cout << "NAME" << "               " << "POINTS" << endl;
    for (i = 0; i < 5; i++) {
        cout << playerNames[i] << "               " << playerPoints[i] << endl;
    } // end for()
    cout << endl;

   
    playerPointsTotal = (playerPoints[0] + playerPoints[1] + playerPoints[2] + playerPoints[3] + playerPoints[4]); // calculates total points scored
    playerPointsAvg = (playerPoints[0] + playerPoints[1] + playerPoints[2] + playerPoints[3] + playerPoints[4]) / 5.0; // calculates team point average

    cout << "TEAM TOTAL" << "         " << "TEAM AVERAGE" << endl;
    cout << playerPointsTotal << "                " << playerPointsAvg << endl;
    cout << endl;

    /* Loop that stores which player scored the most points
    * Team MVP can be retrieved by creating a new "index" variable that allows
    * us to reuse an index position of the array playerPoints
    * by assigning the index variable to 'i' and recalling that variable
    * within the playerNames array
    */
    for (i = 0; i < 5; i++) {
        if (playerPoints[i] > pointsMVP) {
            pointsMVP = playerPoints[i];
            indexPosMVP = i;
        } // end if()
    } // end for()
    cout << "TEAM MVP" << "           " << "POINTS" << endl;
    cout << playerNames[indexPosMVP] << "               " << pointsMVP << endl;
    cout << endl;
    

    return 0;
} // end main()
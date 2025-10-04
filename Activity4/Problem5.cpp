/*
Problem 5: Player Movement

Problem:
The player moves depending on the pressed button. Player starts at (0,0).

Task:


Write a program that:
Lets the player change coordinates depending on the button pressed.
W =  0, +1
S = 0, -1
A = -1,0
D = +1,0 

Sample Input:
W

Sample Output:
The location of the player is ( 0, 1)
*/

#include <iostream> 

using namespace std;

int main () {
    
    char move, move1;
    int y = 0, x = 0;
    do {
    cout << "\n-----Player Movement-----" << endl;
    cout << "\nInput the pressed button: ";
    cin >> move;
    
    switch(move){
                case 'W':
                case 'w':
                y += 1;
                    break;
                    
                case 'S':
                case 's':
                    x -= 1;
                    break;
                    
                case 'A':
                case 'a':
                    y -= 1;
                    break;
                    
                case 'D':
                case 'd':
                    x += 1;
                    break;
                    
                default:
                    cout << "Invalid choice baby!";
                    break;
            }
           cout << "The location of the player is ( " << x << ", " << y << " )" << endl;
            cout << "Do you want to move again?(y/n): ";
            cin >> move1;
            }
        while (move1 == 'y' || move1 == 'Y');
            
            return 0;
        
    }

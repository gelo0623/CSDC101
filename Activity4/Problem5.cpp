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
    
    char choice;
    cout << "\n-----Player Movement-----" << endl;
    cout << "\nInput the pressed button: ";
    cin >> choice;
    
    switch(choice){
        case 'W':
        cout << "The location of the player is (0, +1)";
        break;
        
        case 'S':
        cout << "The location of the player is (0, -1)";
        break;
        
        case 'A':
        cout << "The location of the player is (-1, 0)";
        break;
        
        case 'D':
        cout << "The location of the player is (+1, 0)";
        break;
        
        default:
        cout << "Invalid choice!";
        break;
    }
    return 0;
}
   

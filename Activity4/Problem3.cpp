/*
Problem 3: Inventory Check

Problem:
You can only sell lemonade if you have lemons and sugar.

Task:
Write a program that:

Ask the user how many lemons and how many cups of sugar they have.
If either lemons or sugar is 0 or less, 
	output: "You can't make lemonade!"
Otherwise,
	output: "You're ready to sell lemonade!"

Sample Input:
Lemons: 5
Sugar: 0

Sample Output:
You can't make lemonade!
*/

#include <iostream> 

using namespace std;

int main () {
    
    int lemons, sugar;
    
    cout << "\n-----LEMONADE MAKER-----" << endl;
    cout << "\nInput how many lemons: ";
    cin >> lemons;
    cout << "Input how many sugar: ";
    cin >> sugar;
    
    if (lemons <= 0 || sugar <= 0){
        cout << "You can't make lemonade!" << endl;
    }else{
        cout << "You're ready to sell lemonade!" << endl;
        
    }
    return 0;
}

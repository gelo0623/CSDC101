/*
Problem 6: Switch problem 1 to 5
Combine all problems using switch statement

Sample Input:
What problem do you want to see? 1

Sample Output:
*Basic pricing Decision Runs*

Submit a cpp file, a link to your github repository, or a notion page
    */
#include <iostream> 

using namespace std;

int main () {

    char choice, again;
    int x = 0, y = 0, momal;
    do {
    cout << "-----Switch Problem-----" << endl;
    cout << "Enter 1 to run Basic Pricing Decision" << endl;
    cout << "Enter 2 to run  Weather-Based Discounts" << endl;
    cout << "Enter 3 to run Inventory Check" << endl;
    cout << "Enter 4 to run Bulk Purchase Discount" << endl;
    cout << "Enter 5 to run  Player Movement" << endl;
    cout << "------------------------" << endl;
    cout << "Enter Choice: ";
    cin >> choice;

    switch(choice){
        case '1': {
            int money;
            cout << "Enter your money: ";
            cin >> money;

            if (money >= 1){
                cout << "Enjoy your lemonade!";
            } else {
                cout << "Sorry, you need more money.";
            }
            break;
        }
        case '2': {
            int temperature;
            cout << "What is the temperature: ";
            cin >> temperature;

            if (temperature >= 30){
                cout << "It's hot! Lemonade costs $0.80 today.";
            } else {
                cout << "It's not hot! Lemonade costs $1.00";
            }
            break;
        }

        case '3': {
            int lemons, sugar;
            cout << "\n-----LEMONADE MAKER-----" << endl;
            cout << "\nInput how many lemons: ";
            cin >> lemons;
            cout << "Input how many sugar: ";
            cin >> sugar;

            if (lemons <= 0 || sugar <= 0){
                cout << "You can't make lemonade!" << endl;
            } else {
                cout << "You're ready to sell lemonade!" << endl;
            }
            break;
        }

        case '4': {
            float discount, cups = 1, discount1 = 0, discount2 = 0.10, discount3 = 0.20, total;
    
    cout << "\n-----Bulk Purhcase Discount-----" << endl;
    cout << "\nInput how many cups you want shawty: ";
    cin >> cups;
    
    if (cups >= 1 && cups <= 4){
        discount = cups + discount1;
        cout << "Total cost: $" << discount << endl;
    }
    else if (cups >= 5 && cups <= 9){
        discount = cups * discount2;
        total = cups - discount;
        cout << "The total cost with discounted price is: $" << total << endl;
    } 
    else if (cups >= 10){
        discount = cups * 0.20;
        total = cups - discount;
        cout << "The total cost with discounted price is: $" << discount << endl;
    }
    else {
        cout << "Input cups babygirl UwU" << endl;
    }
            break;
        }

        case '5': {
            char move;
            char move1;
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
                    cout << "Invalid choice!";
                    break;
            }
            cout << "The location of the player is ( " << x << ", " << y << " )" << endl;
            cout << "Do you want to move again?(y/n): ";
            cin >> move1;
            }
        while (move1 == 'y' || move1 == 'Y');
            break;
        }
        default:
        cout << "Invalid choice baby";
    }
    cout << "\nDo you want to choose again(y/n): ";
        cin >> again;
    
    }
        while (again == 'y' || again == 'Y');
            cout << "Exciting Program...\n";
        
    return 0;
}

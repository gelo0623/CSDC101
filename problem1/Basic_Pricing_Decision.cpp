#include <iostream>

using namespace std;

int main () {
    
    int money;
    
    cout << "Enter your money: ";
    cin >> money;
    
    if (money >= 1){
        cout << "Enjoy your lemonade!";
    }else{
        cout << "Sorry, you need more money.";
    }
    return 0;
}

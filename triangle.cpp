#include <iostream>
using namespace std;

int main() {
    int r, s, i, j;
    char choose;
    
    cout << "Triangle" << endl;
    cout << "Upside down triangle" << endl;
    cout << "Choose what you want: ";
    cin >> choose;
    
    switch(choose){
    
    
    case '1':
     for (int r = 1; r <= 10; r++) {
         for(s = 1; s <= r; s++){
         cout << "* ";
     }
     cout << "\n";
     }
     break;
     
     case '2':
    for (int r = 10; r >= 1; r--) {
         for(s = 1; s <= r; s++){
         cout << "* ";
     }
     cout << "\n";
     }
     break;
     
     default:
     cout << "Invalid" << endl;
     break;
    }

    
    return 0;
}
         
         
        

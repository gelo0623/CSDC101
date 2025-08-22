#include <iostream>
using namespace std;

int main() {
    float balance = 100, rate = 0.05, earned, total;
    
    earned = balance * rate;
    total = balance + earned;
    
    cout << "The amount earned is "<< earned << endl;
    cout << "The ending balance is "<< total << endl;
    
    
    return 0;
}

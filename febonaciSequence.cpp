#include <iostream>
using namespace std;

int main() {
   int a = 0, b = 1, c, n, i = 2;
   
   cout << "Enter number of terms: ";
   cin >> n;
   cout << a << " " << b << " ";
   while (i < n){
       c = a + b;
       cout << c << " ";
       a = b, b = c;
       i = i + 1;
       i++;

   }
    
    return 0;
}

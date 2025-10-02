/*
Problem 2: Weather-Based Discounts

Problem:
You want to attract more customers. If it’s hot (temperature is 30°C or more), offer a 20% discount.

Task:
Write a program that:
Ask for the temperature.

Sets the price to:
$0.80 if temperature >= 30
$1.00 otherwise
Outputs the final price.

Sample Input:
Enter today's temperature in Celsius: 32

Sample Output:

It's hot! Lemonade costs $0.80 today.

*/

#include <iostream> 

using namespace std;

int main () {
    
    int temperature; //
    
    cout << "What is the temperature: ";
    cin >> temperature;
    
    if (temperature >= 30){
        cout << "It's hot! Lemonade costs $0.80 today.";
    }else{
        cout << "It's not hot! Lemonade costs $1.00";
    }
    return 0;
}

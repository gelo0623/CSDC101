/*
Problem 4: Bulk Purchase Discount

Problem:
Customers get discounts based on how many cups they buy:
1–4 cups: No discount
5–9 cups: 10% discount
10+ cups: 20% discount
Each cup is $1.

Task:

Write a program that:
Ask how many cups the customer wants.
Calculates the total cost with the correct discount.
Outputs the final price.

Sample Input:
How many cups? 7

Sample Output:
Total cost: $6.30
*/

#include <iostream> 

using namespace std;

int main () {
    
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
    
    return 0;
}

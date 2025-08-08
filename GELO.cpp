#include <iostream>// input and output library
using namespace std;// standard namespace for cin and std

int main () {

	int num1, num2, product;

	cout<<"Enter a number: ";
	cin>>num1;
	cout<< "Enter another number: ";
	cin>>num2;
	product = num1 * num2;
	cout<<"The sum of the two number is: "<<product;

	return 0;
}

#include <iostream>
using namespace std;

int main() {
    
    int gallons_used, ending_mileage, distance_driven, starting_mileage, average_miles_per_gallons;
    
    cout << "Enter gallons used: ";
    cin >> gallons_used;//Get values for gallons used
    
    cout << "Enter starting mileage: ";
    cin >> starting_mileage;//Get values for starting mileage
    
    cout << "Enter ending mileage: ";
    cin >> ending_mileage;//Get values for ending mileage
    
    
    distance_driven = ending_mileage - starting_mileage;//set value of distance driven to ending mileage - starting mileage
    
    average_miles_per_gallons = distance_driven / gallons_used;//set value of average miles per gallon to distance driven / gallons used
    
    
    cout << "The average miles per gallon is: " << average_miles_per_gallons << endl;//print the value of average miles per gallon
    
    if(average_miles_per_gallons > 25){//if average miles per gallon id greater than 25.0 then...
        cout << "You are getting good gas mileage";//print the message you are getting goof gas mileage
    }
    else
    cout << "You are not getting good gas mileage";//if else print the message you are not getting good gas mileage
    
    return 0;//stop
    
}

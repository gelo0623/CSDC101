#include <iostream>
using namespace std;

int main()
{
    char choice, again;

    do
    {
        float speed, duration, distance;

        cout << "--------------------------------------------------------" << endl;
        cout << "Press 'a' to calculate for speed" << endl;
        cout << "Press 'b' to calculate for duration" << endl;
        cout << "Press 'c' to calculate for distance" << endl;
        cout << "Press 'x' to exit" << endl;
        cout << "--------------------------------------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 'a' || choice == 'A') {
            cout << "Enter distance (in km): ";
            cin >> distance;
            cout << "Enter duration (in hours): ";
            cin >> duration;

            if (duration == 0) {
                cout << "Duration cannot be zero." << endl;
            } else {
                speed = distance / duration;
                cout << "Speed is: " << speed << " km/h" << endl;
            }
        }
        else if (choice == 'b' || choice == 'B') {
            cout << "Enter distance (in km): ";
            cin >> distance;
            cout << "Enter speed (in km/h): ";
            cin >> speed;

            if (speed == 0) {
                cout << "Speed cannot be zero." << endl;
            } else {
                duration = distance / speed;
                cout << "Duration is: " << duration << " hours" << endl;
            }
        }
        else if (choice == 'c' || choice == 'C') {
            cout << "Enter speed (in km/h): ";
            cin >> speed;
            cout << "Enter duration (in hours): ";
            cin >> duration;
            distance = speed * duration;
            cout << "Distance is: " << distance << " km" << endl;
        }
        else if (choice == 'x' || choice == 'X') {
            cout << "Exiting the program." << endl;
            break;
        }
        else {
            cout << "Invalid choice." << endl;
        }

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    return 0;
}

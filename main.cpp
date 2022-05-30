#include <iostream>
#include <string>
using namespace std;
int main() {
    string house[] = {"SidorovA", "IvanovA", "PetrovA", "SidorovB", "IvanovB", "PetrovB", "SidorovC", "IvanovC",
                      "PetrovC", "SidorovD"};

    for (int i = 0; i < 3; i++) {
        int apartmentNumber;
        cout << "Enter the apartment number: ";
        cin >> apartmentNumber;
        apartmentNumber--;
        if (apartmentNumber < 0 || apartmentNumber > 10) {
            cout << "Incorrect input!";
        } else {
            cout << house[apartmentNumber] << endl;
        }
    }
}
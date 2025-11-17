#include <iostream>
#include <limits> 

using namespace std;

void essai(){
    int age;
    bool echec = true;
    while (echec) {
        cout << "Enter your age: ";
        cin >> age;

        if (cin.fail()) {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear(); // Clear the error flags
            // Discard the invalid input from the buffer
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            echec = false;
        }
    }

    cout << "Votre age est: " << age << endl;

}

int main() {
    essai();
    return 0;
}
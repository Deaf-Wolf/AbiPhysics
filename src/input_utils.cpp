#include "input_utils.h"
#include <iostream>
#include <limits>

using namespace std;

namespace InputUtils {

    void clearInput() {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    double getValidDouble(const string& prompt) {
        double value;
        while (true) {
            cout << prompt;
            cin >> value;

            if (cin.fail()) {
                cout << "Fehler! Bitte eine gültige Zahl eingeben.\n";
                clearInput();
            } else {
                clearInput(); // Clear remaining newline
                return value;
            }
        }
    }

    int getValidInt(const string& prompt, int min, int max) {
        int value;
        while (true) {
            cout << prompt;
            cin >> value;

            if (cin.fail()) {
                cout << "Fehler! Bitte eine gültige Ganzzahl eingeben.\n";
                clearInput();
            } else if (value < min || value > max) {
                cout << "Fehler! Bitte eine Zahl zwischen " << min << " und " << max << " eingeben.\n";
                clearInput();
            } else {
                clearInput(); // Clear remaining newline
                return value;
            }
        }
    }
}

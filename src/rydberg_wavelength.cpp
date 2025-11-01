#include <iostream>
#include <iomanip>
#include <cmath>
#include "physics_constants.h"
#include "input_utils.h"

using namespace std;
using namespace Physics;
using namespace InputUtils;

/**
 * Rydberg Wavelength Calculator
 * Calculates wavelength using the Rydberg formula for hydrogen spectrum
 */

int main() {
    cout << "=== λ mit Rydberg-Konstanten ===\n\n";
    cout << "Berechnet die Wellenlänge für Übergänge im Wasserstoffatom.\n\n";

    double n = getValidDouble("Hauptquantenzahl n (üblicherweise 2): ");
    double m = getValidDouble("Hauptquantenzahl m (größer als n): ");

    // Rydberg frequency (Hz)
    constexpr double f_R = 3.28984195e15;

    // λ = c/f_R * (1 / (1/n^2 - 1/m^2))
    double term = 1.0 / pow(n, 2) - 1.0 / pow(m, 2);
    double wavelength = (c / f_R) * (1.0 / term);

    // Convert to nm for display
    double wavelength_nm = abs(wavelength) * m_to_nm;

    cout << fixed << setprecision(2);
    cout << "\nErgebnis:\n";
    cout << "λ = " << wavelength_nm << " nm\n";

    cout << "\nDrücken Sie Enter zum Beenden...";
    cin.get();

    return 0;
}

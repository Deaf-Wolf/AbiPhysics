#include <iostream>
#include <iomanip>
#include <cmath>
#include "physics_constants.h"
#include "input_utils.h"

using namespace std;
using namespace Physics;
using namespace InputUtils;

/**
 * Minimum Radius Calculator (r_min)
 * Calculates the minimum distance of approach for Rutherford scattering
 */

int main() {
    cout << "=== r_min Rechner (Minimaler Abstand) ===\n\n";
    cout << "Berechnet den minimalen Abstand bei der Rutherford-Streuung.\n\n";

    double Z = getValidDouble("Ordnungszahl des Elements Z: ");
    double Ekin = getValidDouble("Kinetische Energie E_kin in Joule: ");

    // r_min = (Z * e^2) / (π * ε_0 * 2 * E_kin)
    double numerator = Z * pow(e, 2);
    double denominator = pi * epsilon_0 * 2 * Ekin;
    double rmin = numerator / denominator;

    // Convert to picometers for display
    double rmin_pm = rmin * m_to_pm;

    cout << scientific << setprecision(4);
    cout << "\nErgebnis:\n";
    cout << "r_min = " << rmin << " m\n";
    cout << "r_min = " << rmin_pm << " pm\n";

    cout << "\nDrücken Sie Enter zum Beenden...";
    cin.get();

    return 0;
}

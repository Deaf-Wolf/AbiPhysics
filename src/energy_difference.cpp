#include <iostream>
#include <iomanip>
#include <cmath>
#include "physics_constants.h"
#include "input_utils.h"

using namespace std;
using namespace Physics;
using namespace InputUtils;

/**
 * Energy Difference Calculator (ΔE)
 * Calculates energy difference between electron orbital levels
 * Based on the Bohr model
 */

int main() {
    cout << "=== ΔE Rechner (Energiedifferenz) ===\n\n";
    cout << "Berechnet die Energiedifferenz zwischen Elektronenschalen\n";
    cout << "nach dem Bohr'schen Atommodell.\n\n";

    double n = getValidDouble("Hauptquantenzahl n (üblicherweise 1): ");
    double m = getValidDouble("Hauptquantenzahl m (ab 2): ");

    // Bohr model formula:
    // ΔE = (e^4 * m_e) / (8 * ε_0^2 * h^2) * (1/n^2 - 1/m^2)
    double factor = (pow(e, 4) * m_e) / (8 * pow(epsilon_0, 2) * pow(h, 2));
    double deltaE = factor * (1.0 / pow(n, 2) - 1.0 / pow(m, 2));

    // Convert to eV
    double deltaE_eV = deltaE / e;

    cout << fixed << setprecision(4);
    cout << "\nErgebnis:\n";
    cout << "ΔE = " << deltaE_eV << " eV\n";

    cout << "\nDrücken Sie Enter zum Beenden...";
    cin.get();

    return 0;
}

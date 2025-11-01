#include <iostream>
#include <iomanip>
#include "physics_constants.h"
#include "input_utils.h"

using namespace std;
using namespace Physics;
using namespace InputUtils;

/**
 * Franck-Hertz Experiment Calculator
 * Calculates wavelength, radiation energy, or photon momentum
 */

int main() {
    cout << "=== Franck-Hertz Versuch Rechner ===\n\n";
    cout << "Was möchten Sie berechnen?\n";
    cout << "1. Wellenlänge berechnen\n";
    cout << "2. Strahlungsenergie berechnen\n";
    cout << "3. Impuls berechnen\n\n";

    int choice = getValidInt("Auswahl (1-3): ", 1, 3);
    cout << endl;

    if (choice == 1) {
        // Calculate wavelength from voltage
        double U = getValidDouble("Spannung U in Volt: ");

        // λ = (h*c) / (e*U)
        double wavelength = (h * c) / (e * U);
        double wavelength_nm = wavelength * m_to_nm;

        cout << fixed << setprecision(2);
        cout << "\nErgebnis:\n";
        cout << "λ = " << wavelength_nm << " nm\n";

    } else if (choice == 2) {
        // Calculate radiation energy from wavelength
        double wavelength_nm = getValidDouble("Wellenlänge λ in nm: ");
        double wavelength = wavelength_nm * nm_to_m;

        // E = (h*c) / λ
        double energy = (h * c) / wavelength;

        cout << scientific << setprecision(4);
        cout << "\nErgebnis:\n";
        cout << "E_el = " << energy << " J\n";

    } else if (choice == 3) {
        // Calculate photon momentum from wavelength
        double wavelength_nm = getValidDouble("Wellenlänge λ in nm: ");
        double wavelength = wavelength_nm * nm_to_m;

        // p = h / λ
        double momentum = h / wavelength;

        cout << scientific << setprecision(4);
        cout << "\nErgebnis:\n";
        cout << "p_ph = " << momentum << " kg·m/s\n";
    }

    cout << "\nDrücken Sie Enter zum Beenden...";
    cin.get();

    return 0;
}

#ifndef PHYSICS_CONSTANTS_H
#define PHYSICS_CONSTANTS_H

/**
 * @file physics_constants.h
 * @brief Fundamental physics constants used in AbiPhysics calculators
 *
 * All constants are in SI units unless otherwise specified.
 */

namespace Physics {
    // Planck's constant (J·s)
    constexpr double h = 6.626e-34;

    // Speed of light in vacuum (m/s)
    constexpr double c = 299792458.0;

    // Elementary charge (C)
    constexpr double e = 1.602e-19;

    // Pi
    constexpr double pi = 3.141592653589793;

    // Electron mass (kg)
    constexpr double m_e = 9.109e-31;

    // Vacuum permittivity (F/m)
    constexpr double epsilon_0 = 8.854e-12;

    // Rydberg constant (1/m)
    constexpr double R = 1.097e7;

    // Conversion factors
    constexpr double nm_to_m = 1e-9;
    constexpr double m_to_nm = 1e9;
    constexpr double pm_to_m = 1e-12;
    constexpr double m_to_pm = 1e12;
}

#endif // PHYSICS_CONSTANTS_H

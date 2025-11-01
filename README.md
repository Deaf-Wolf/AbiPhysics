# AbiPhysics

**Physics calculators for German Abitur students**

A collection of command-line tools for calculating complex quantum and atomic physics formulas, designed to help with Abitur physics exams.

---

## 🇩🇪 German / Deutsch

### Über dieses Projekt

AbiPhysics bietet Rechner für wichtige Physik-Formeln aus der Atom- und Quantenphysik:

- **Franck-Hertz-Versuch**: Wellenlänge, Strahlungsenergie und Impuls berechnen
- **Energiedifferenz (ΔE)**: Energieunterschiede zwischen Elektronenschalen (Bohr-Modell)
- **Minimaler Abstand (r_min)**: Rutherford-Streuung
- **Rydberg-Konstante**: Wellenlängen im Wasserstoffspektrum

### Installation und Verwendung

```bash
# Projekt kompilieren
make

# Rechner ausführen
./build/franck_hertz
./build/energy_difference
./build/rmin_calculator
./build/rydberg_wavelength

# Build-Verzeichnis löschen
make clean
```

### Voraussetzungen

- C++ Compiler (g++ oder clang++)
- C++17 Standard oder höher
- Make

---

## 🇬🇧 English

### About This Project

AbiPhysics provides calculators for important physics formulas in atomic and quantum physics:

- **Franck-Hertz Experiment**: Calculate wavelength, radiation energy, and momentum
- **Energy Difference (ΔE)**: Energy differences between electron shells (Bohr model)
- **Minimum Radius (r_min)**: Rutherford scattering
- **Rydberg Constant**: Wavelengths in the hydrogen spectrum

### Installation and Usage

```bash
# Compile project
make

# Run calculators
./build/franck_hertz
./build/energy_difference
./build/rmin_calculator
./build/rydberg_wavelength

# Clean build directory
make clean
```

### Requirements

- C++ compiler (g++ or clang++)
- C++17 standard or higher
- Make

---

## 📁 Project Structure

```
AbiPhysics/
├── src/                    # C++ source files
│   ├── franck_hertz.cpp
│   ├── energy_difference.cpp
│   ├── rmin_calculator.cpp
│   ├── rydberg_wavelength.cpp
│   └── input_utils.cpp
├── include/                # Header files
│   ├── physics_constants.h
│   └── input_utils.h
├── build/                  # Compiled executables (generated)
├── Archived/               # Original Python implementations
└── Makefile               # Build configuration
```

---

## 🔄 Project History: Python → C++ Rewrite

### The Original Python Version

This project started as simple Python scripts written by students at **HAN3-1 RWB-Essen** to help with Abitur physics calculations. The original Python calculators (`Archived/`) were functional but had several issues:

- Code duplication (constants defined in every file)
- No input validation (crashes on invalid input)
- Critical bug in Rydberg calculator (undefined variable `piko`)
- Mixed German/English naming conventions
- Unicode characters in filenames (λ, ∆) causing compatibility issues

### Why C++?

**This project was rewritten in C++ as a test of Claude Code**, an AI-powered coding assistant. The goals were to:

1. **Fix all bugs** from the Python version (especially the `piko` crash)
2. **Improve code quality** with shared constants and proper structure
3. **Add robustness** through input validation and error handling
4. **Modernize** the codebase with professional practices
5. **Learn C++** while maintaining the same CLI functionality

### What Changed?

| Aspect | Python Version | C++ Version |
|--------|---------------|-------------|
| **Code Organization** | Flat, duplicated code | Modular with shared headers |
| **Constants** | Redefined in each file | Single `physics_constants.h` |
| **Error Handling** | Crashes on bad input | Validates and re-prompts |
| **Filenames** | `λ mit Rydberg-Konstanten.py` | `rydberg_wavelength.cpp` |
| **Bugs** | Critical undefined variable | All bugs fixed ✓ |
| **Performance** | Interpreted (slower) | Compiled (faster) |

### The Original Files

The **original Python implementations are preserved in `Archived/`** to show where we started. They represent authentic student work and the learning process - bugs and all! Feel free to compare the old and new versions to see how the project evolved.

---

## 👥 Credits

**Original Python Version**: HAN3-1 RWB-Essen (German high school physics class)

**C++ Rewrite**: Assisted by Claude Code (Anthropic AI)

---

## 📝 License

This is an educational project created for learning purposes. Feel free to use, modify, and learn from it!

---

Made with ❤️ by students learning physics and programming

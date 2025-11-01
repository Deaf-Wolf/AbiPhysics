# AbiPhysics Makefile
# Builds all physics calculators

CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Iinclude
BUILDDIR = build
SRCDIR = src
INCDIR = include

# Executables
TARGETS = $(BUILDDIR)/franck_hertz \
          $(BUILDDIR)/energy_difference \
          $(BUILDDIR)/rmin_calculator \
          $(BUILDDIR)/rydberg_wavelength

# Shared object file
UTILS_OBJ = $(BUILDDIR)/input_utils.o

.PHONY: all clean help

all: $(BUILDDIR) $(TARGETS)
	@echo "Build complete! Executables are in $(BUILDDIR)/"
	@echo ""
	@echo "Run with:"
	@echo "  ./$(BUILDDIR)/franck_hertz"
	@echo "  ./$(BUILDDIR)/energy_difference"
	@echo "  ./$(BUILDDIR)/rmin_calculator"
	@echo "  ./$(BUILDDIR)/rydberg_wavelength"

$(BUILDDIR):
	mkdir -p $(BUILDDIR)

# Compile utilities object file
$(BUILDDIR)/input_utils.o: $(SRCDIR)/input_utils.cpp $(INCDIR)/input_utils.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Build individual calculators
$(BUILDDIR)/franck_hertz: $(SRCDIR)/franck_hertz.cpp $(UTILS_OBJ) $(INCDIR)/physics_constants.h
	$(CXX) $(CXXFLAGS) $< $(UTILS_OBJ) -o $@

$(BUILDDIR)/energy_difference: $(SRCDIR)/energy_difference.cpp $(UTILS_OBJ) $(INCDIR)/physics_constants.h
	$(CXX) $(CXXFLAGS) $< $(UTILS_OBJ) -o $@

$(BUILDDIR)/rmin_calculator: $(SRCDIR)/rmin_calculator.cpp $(UTILS_OBJ) $(INCDIR)/physics_constants.h
	$(CXX) $(CXXFLAGS) $< $(UTILS_OBJ) -o $@

$(BUILDDIR)/rydberg_wavelength: $(SRCDIR)/rydberg_wavelength.cpp $(UTILS_OBJ) $(INCDIR)/physics_constants.h
	$(CXX) $(CXXFLAGS) $< $(UTILS_OBJ) -o $@

clean:
	rm -rf $(BUILDDIR)
	@echo "Build directory cleaned."

help:
	@echo "AbiPhysics Build System"
	@echo ""
	@echo "Targets:"
	@echo "  make          - Build all calculators"
	@echo "  make clean    - Remove build directory"
	@echo "  make help     - Show this help message"

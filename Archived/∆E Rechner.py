import math
#Konstanten#
c = (2.997925E+8)
h = (6.6262E-34)
e = (1.6022E-19)
E = (8.8542E-12)
pi = (math.pi)
me = (9.1095E-31)
#Konstanten#


n=float(input("anzahl n=")) # eingabe n _ normal immer 1

m=float(input("anzahl m=")) # eingabe m _ ab 2


DeltaE = float(f"{(e**4 * me)/(8 * E**2 * h**2)*(1/n**2 - 1/m**2)}") # Die ganze formel

DeltaEe =DeltaE/e   # für das e in eV
print(DeltaEe,"eV")

LogOut = input("Exit: Klick Enter")

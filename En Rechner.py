import math
c = float(2.997925E+8)
h = float(6.6262E-34)
e = float(1.6022E-19)
E = float(8.8542E-12)
pi = float(math.pi)
me = float(9.1095E-31)



n=float(input("anzahl n="))
print(n)
m=float(input("anzahl m="))
print(n)

Bohr2Post = float(1/n**2 - 1/m**2)

DeltaE1 = float(e**4 * me)
DeltaE2 = float(8 * E**2 * h**2)

DeltaE = float((DeltaE1 / DeltaE2)*Bohr2Post)
DeltaEe =DeltaE/e
print(DeltaEe,"eV")

LogOut = input("Exit: Klick Enter")


import math
c = float(2.997925E+8)
h = float(6.6262E-34)
e = float(1.6022E-19)
E = float(8.8542E-12)
pi = float(math.pi)

Z = float(input(" Ordnungszahl des Elements Z="))
print(Z)

print("Ekin=")
k = input()
Ekin = float(k)


Rmin1 =float(Z * (e**2))
Rmin2 =float(pi * E * 2 * Ekin)
Rmin  = float(Rmin1/Rmin2)

print("rmin =",Rmin)

import math
#Konstanten#
c = (2.997925E+8)
h = (6.6262E-34)
e = (1.6022E-19)
E = (8.8542E-12)
pi = (math.pi)
#Konstanten#

Z = float(input(" Ordnungszahl des Elements Z="))
print(f"{Z}")

Ekin = float(input("Ekin="))
print(f"{Ekin}")

Rmin1 =float(f"{Z * e**2}") #oberer teil des Bruches
Rmin2 =float(f"{pi * E * 2 * Ekin}") #unterer teil des Bruches
Rmin  = (f"{Rmin1/Rmin2}")#Gesamt


print("rmin=",Rmin)


LogOut = input("Exit: Klick Enter")#Beenden des Programmes

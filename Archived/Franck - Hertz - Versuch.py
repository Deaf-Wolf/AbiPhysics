#Konstanten#
c = (2.997925E+8)
h = (6.6262E-34)
e = (1.6022E-19)
#Konstanten#

print("ohne Leertasten und auf Großschreibung achten")
print("Wellenlänge oder Strahlung")
Auswahl = input()

if Auswahl == "Wellenlänge":
    #Berrechnet die Wellenlänge
    U=float(input("U="))
    Wl=f"{(h*c)/e*U}"
    print("λ=",Wl)
elif Auswahl == "Strahlung":
    Wl = float(input("λ="))
    Eel= f"{h*c/Wl}"
    print("Eel=",Eel)
elif Auswahl == "Impluse":
    Wl = float(input("λ="))
    p=f"{h/Wl}"
    print("pph=",p)



LogOut = input("Exit: Klick Enter")  # Beenden des Programmes

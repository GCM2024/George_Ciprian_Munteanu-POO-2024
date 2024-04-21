#include "pch.h"
#include "Header.h"

using namespace System;

// Functie pentru inregistrarea masinilor
void InregistreazaMasini(int numarMasini) {
    for (int i = 0; i < numarMasini; ++i) {
        Console::WriteLine("Introduceti datele despre masina " + (i + 1) + ":");

        // Citim numarul de inmatriculare
        Console::Write("Numarul de inmatriculare: ");
        String^ numarInmatriculare = Console::ReadLine();

        // Citim culoarea masinii
        Console::Write("Culoarea masinii: ");
        String^ culoare = Console::ReadLine();

        // Cream un obiect Masina folosind datele citite si afisam detaliile
        Masina^ masina = gcnew Masina(numarInmatriculare, culoare);
        Console::WriteLine("");
        Console::WriteLine("Numar de inmatriculare: " + masina->GetNumarInmatriculare());
        Console::WriteLine("Culoare: " + masina->GetCuloare());
        Console::WriteLine("");
    }
}

// Functie pentru a ocupa locurile din parcare
void OcupaLocurile(Parcare^ parcare, int numarMasini) {
    for (int i = 0; i < numarMasini; ++i) {
        parcare->IntraInParcare();
    }
}

// Functia principala
int main() {
    // Cream o parcare cu 10 locuri
    Parcare^ parcare = gcnew Parcare(10);
    int numarLocuri = parcare->getNumarLocuri();
    Console::WriteLine("Momentan sunt disponibile " + numarLocuri + " locuri!");

    // Cerem utilizatorului sa introduca numarul de masini de inregistrat
    Console::Write("Introduceti numarul de masini de inregistrat: ");
    String^ input = Console::ReadLine();
    int numarMasini = Int32::Parse(input);

    // Inregistram masinile
    InregistreazaMasini(numarMasini);

    // Ocupam locurile din parcare
    OcupaLocurile(parcare, numarMasini);

    Console::ReadLine(); // Asteptam sa se apese o tasta pentru a inchide consola

    return 0;
}

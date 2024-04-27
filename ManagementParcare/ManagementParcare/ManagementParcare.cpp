#include "pch.h"
#include "Header.h"
#include <iostream>

using namespace System;
void masinuta()
{
    std::cout << "        ______           " << std::endl;
    std::cout << "   ____/__|___\\______    " << std::endl;
    std::cout << "  [_()_|__|____|__()_]   " << std::endl;
    std::cout << "........................." << std::endl;
}
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
            masinuta();
    }
}

// Functie pentru a ocupa locurile din parcare
void OcupaLocurile(Parcare^ parcare, int numarMasini) {
    for (int i = 0; i < numarMasini; ++i) {
        parcare->IntraInParcare();
    }
}
void logo()
{
    std::cout << ".  \\/        \\/  .     |    |     .  \\/        \\/  ." << std::endl;
    std::cout << ".   \\/      \\/   .     |    |     .   \\/      \\/   ." << std::endl;
    std::cout << ".    \\/____\\/    .     |    |     .    \\/____\\/    ." << std::endl;
    std::cout << ".     |    |     . BINE ATI VENIT .     |    |     ." << std::endl;
    std::cout << ".    /.O  O.\\    .  IN PARCAREA   .    /.O  O.\\    ." << std::endl;
    std::cout << ".   |   ^^   |   .    NOASTRA     .   |   ^^   |   ." << std::endl;
    std::cout << ".    \\  --  /    .     |    |     .    \\  --  /    ." << std::endl;
    std::cout << ". ]]]/oooooo\\[[[ .     |    |     . ]]]/oooooo\\[[[ ." << std::endl;
    std::cout << ".    \\______/    .     |    |     .    \\______/    ." << std::endl;
}

// Functia principala
int main() {
    logo();
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

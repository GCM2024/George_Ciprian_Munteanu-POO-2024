#pragma once
#include "pch.h"

using namespace std;
using namespace System;

// Clasa pentru Parcare
public ref class Parcare {
private:
    int numarLocuri;

public:
    // Constructor
    Parcare(int locuri) {
        numarLocuri = locuri;
    }
    // Metoda publica pentru a obtine valoarea lui numarLocuri
    int getNumarLocuri() {
        return numarLocuri;
    }

    // Metoda pentru a adauga o masina in parcare
    void IntraInParcare() {
        if (numarLocuri > 0) {
            numarLocuri--;
            Console::WriteLine("Masina a intrat in parcare. Locuri ramase: " + numarLocuri);
        }
        else {
            Console::WriteLine("Nu mai sunt locuri disponibile in parcare.");
        }
    }

    // Metoda pentru a scoate o masina din parcare
    void IeseDinParcare() {
        numarLocuri++;
        Console::WriteLine("Masina a iesit din parcare. Locuri ramase: " + numarLocuri);
    }
};

// Clasa pentru Masina
public ref class Masina {
private:
    String^ numarInmatriculare;
    String^ culoare;


public:
    // Constructor
    Masina(String^ numar, String^ culoareMasina) {
        numarInmatriculare = numar;
        culoare = culoareMasina;
    }
    // Metoda pentru a obtine numarul de inmatriculare al masinii
    String^ GetNumarInmatriculare() {
        return numarInmatriculare;
    }

    // Metoda pentru a obtine numarul de inmatriculare al masinii
    String^ GetCuloare() {
        return culoare;
    }
};

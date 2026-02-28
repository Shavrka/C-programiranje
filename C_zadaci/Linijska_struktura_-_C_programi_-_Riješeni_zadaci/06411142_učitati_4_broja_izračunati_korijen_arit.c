/*
 * ZADATAK 19 - 06411142
 * Učitati 4 broja. Izračunati korijen aritmetičke sredine njihovih apsolutnih vrijednosti.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411142.htm
 */

#include <stdio.h>
#include <stdlib.h>    // biblioteka za abs
#include <math.h>      // biblioteka za sqrt
int main()
{
int iBroj1, iBroj2, iBroj3, iBroj4;        // deklarisanje varijabli
double dAritSredina, dKorijen;             // deklarisanje varijabli

printf("Ucitaj cetiri broja: ");           // varijable cije vrijednosti se ucitavaju
scanf("%d %d %d %d", &iBroj1, &iBroj2, &iBroj3, &iBroj4);  // ucitaj cetiri broja

dAritSredina = (abs(iBroj1) + abs(iBroj2) + abs(iBroj3) + abs(iBroj4)) / 4.0;  // aritmeticka sredina
dKorijen = sqrt(dAritSredina);             // korijen aritmeticke sredine

printf("Korijen aritmeticke sredine apsolutnih vrijednosti je: %f", dKorijen); // ispis vrijednosti
return 0;
}

II varijanta
// 06411142
#include <stdio.h>
#include <stdlib.h>    // biblioteka za abs
#include <math.h>      // biblioteka za pow
int main()
{
int iBroj1, iBroj2, iBroj3, iBroj4;        // deklarisanje varijabli
double dAritSredina, dKorijen;             // deklarisanje varijabli

printf("Ucitaj cetiri broja: ");           // varijable cije vrijednosti se ucitavaju
scanf("%d %d %d %d", &iBroj1, &iBroj2, &iBroj3, &iBroj4);  // ucitaj cetiri broja

dAritSredina = (abs(iBroj1) + abs(iBroj2) + abs(iBroj3) + abs(iBroj4)) / 4.0;  // aritmeticka sredina
dKorijen = pow(dAritSredina, 0.5);         // korijen aritmeticke sredine

printf("Korijen aritmeticke sredine apsolutnih vrijednosti je: %f", dKorijen);    // ispis vrijednosti
return 0;
}
/*
 * ZADATAK 15 - 06411138
 * Izračunati sumu kvadrata tri učitana broja.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411138.htm
 */

#include <stdio.h>
int main()
{
int iBroj1, iBroj2, iBroj3, iSuma;             // deklarisanje varijabli

printf("Ucitaj tri broja: ");                  // ime varijabli cije vrijednosti se ucitavaju
scanf("%d %d %d", &iBroj1, &iBroj2, &iBroj3);  // ucitavanje vrijednosti varijabli sa tastature

iSuma=(iBroj1*iBroj1)+(iBroj2*iBroj2)+(iBroj3*iBroj3); // sumu kvadrata tri broja

printf("Suma kvadrata je: %d", iSuma);         // ispis vrijednosti

return 0;
}

II varijanta
// 06411138
#include <stdio.h>
int main()
{
int iBroj1, iBroj2, iBroj3, iSuma;             // deklarisanje varijabli

printf("Ucitaj tri broja: ");                  // ime varijabli cije vrijednosti se ucitavaju
scanf("%d %d %d", &iBroj1, &iBroj2, &iBroj3);  // ucitavanje vrijednosti varijabli sa tastature

printf("Suma kvadrata je: %d", (iBroj1*iBroj1)+(iBroj2*iBroj2)+(iBroj3*iBroj3)); // ispis vrijednosti

return 0;
}
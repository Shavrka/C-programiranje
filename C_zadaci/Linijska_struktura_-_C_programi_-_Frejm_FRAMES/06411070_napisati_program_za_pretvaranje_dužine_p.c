/*
 * ZADATAK 06411070 - 06411070
 * Napisati program za pretvaranje dužine puta u miljama u dužinu u kilometrima (1 milja = 1,825 km).
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411070.htm
 */

#include <stdio.h>
int main()
{
float m, km;                  // deklarisanje varijabli
printf("Duzinu u miljama: "); // ime varijable cija vrijednost se ucitava
scanf("%f", &m);              // ucitavanje vrijednosti varijable sa tastature

km = m * 1.825;              // pretvaranje milja u kilometre
printf("Duzina u kilometrima = %.2f\n", km); // ispis vrijednosti
return 0;
}

II varijanta
// 06411070
#include <stdio.h>
int main()
{
float m;                      // deklarisanje varijabli
printf("Duzinu u miljama: "); // ime varijable cija vrijednost se ucitava
scanf("%f", &m)            ;  // ucitavanje vrijednosti varijable sa tastature

printf("Duzina u kilometrima = %.2f\n", m * 1.825); // ispis vrijednosti
return 0;
}
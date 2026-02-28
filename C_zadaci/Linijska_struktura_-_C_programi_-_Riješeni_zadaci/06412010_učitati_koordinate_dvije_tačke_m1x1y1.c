/*
 * ZADATAK 98 - 06412010
 * Učitati koordinate dvije tačke M1(x1,y1) i M2(x2,y2) i izračunati pojedinačnu udaljenost tačaka od koordinatnog početka.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06412010.htm
 */

#include <stdio.h>
#include <math.h>
int main()
{
float x1, y1, x2,y2, hipo1, hipo2;                 // deklarisanje varijabli
printf("Ucitaj koordinate prve tacke x1,y1: ");    // imena varijabli cije vrijednosti se ucitavaju
scanf("%f%f",&x1,&y1);                             // ucitavanje vrijednosti koordinata prve tacke
printf("Ucitaj koordinate druge tacke x2,y2: ");   // imena varijabli cije vrijednosti se ucitavaju
scanf("%f%f",&x2,&y2);                             // ucitavanje vrijednosti koordinata druge tacke

hipo1 = sqrt(x1*x1 + y1*y1); // rastojanje tacaka M1 od koordinatnog pocetka
hipo2 = sqrt(x2*x2 + y2*y2); // rastojanje tacaka M2 od koordinatnog pocetka
printf("Udaljenost tacake M1 od koordinatnog pocetka = %.2f\n", hipo1);    // ispis vrijednosti
printf("Udaljenost tacake M2 od koordinatnog pocetka = %.2f\n", hipo2);    // ispis vrijednosti
return 0;
}

II varijanta
// 06412010
#include <stdio.h>
#include <math.h>
int main()
{
float x1, y1, x2,y2, hipo1, hipo2;                 // deklarisanje varijabli
printf("Ucitaj koordinate prve tacke x1,y1: ");    // imena varijabli cije vrijednosti se ucitavaju
scanf("%f%f",&x1,&y1);                             // ucitavanje vrijednosti koordinata prve tacke
printf("Ucitaj koordinate druge tacke x2,y2: ");   // imena varijabli cije vrijednosti se ucitavaju
scanf("%f%f",&x2,&y2);                             // ucitavanje vrijednosti koordinata druge tacke

hipo1 = pow((x1*x1 + y1*y1), 0.5); // rastojanje tacaka M1 od koordinatnog pocetka
hipo2 = pow((x2*x2 + y2*y2), 0.5); // rastojanje tacaka M2 od koordinatnog pocetka
printf("Udaljenost tacake M1 od koordinatnog pocetka = %.2f\n", hipo1);    // ispis vrijednosti
printf("Udaljenost tacake M2 od koordinatnog pocetka = %.2f\n", hipo2);    // ispis vrijednosti
return 0;
}
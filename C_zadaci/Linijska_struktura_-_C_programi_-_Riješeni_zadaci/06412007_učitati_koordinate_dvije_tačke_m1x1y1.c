/*
 * ZADATAK 99 - 06412007
 * Učitati koordinate dvije tačke M1(x1,y1) i M2(x2,y2) i izračunati udaljenost tačaka.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06412007.htm
 */

#include <stdio.h>
#include <math.h>
int main()
{
float x1, y1, x2, y2, hipo;                        // deklarisanje varijabli
printf("Ucitaj koordinate prve tacke x1,y1: ");    // imena varijabli cije vrijednosti se ucitavaju
scanf("%f%f",&x1,&y1);                             // ucitavanje vrijednosti koordinata prve tacke
printf("Ucitaj koordinate druge tacke x2,y2: ");   // imena varijabli cije vrijednosti se ucitavaju
scanf("%f%f",&x2,&y2);                             // ucitavanje vrijednosti koordinata druge tacke

hipo = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)); // rastojanje tacaka
printf("Udaljenost izmedju tacaka = %.2f\n", hipo);    // ispis vrijednosti
return 0;
}

II varijanta
// 06412007
#include <stdio.h>
#include <math.h>
int main()
{
float x1, y1, x2,y2, hipo;                         // deklarisanje varijabli
printf("Ucitaj koordinate prve tacke x1,y1: ");    // imena varijabli cije vrijednosti se ucitavaju
scanf("%f%f",&x1,&y1);                             // ucitavanje vrijednosti koordinata prve tacke
printf("Ucitaj koordinate druge tacke x2,y2: ");   // imena varijabli cije vrijednosti se ucitavaju
scanf("%f%f",&x2,&y2);                             // ucitavanje vrijednosti koordinata druge tacke

hipo = pow(( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)  ), 0.5); // rastojanje tacaka
printf("Udaljenost izmedju tacaka = %.2f\n", hipo);    // ispis vrijednosti
return 0;
}
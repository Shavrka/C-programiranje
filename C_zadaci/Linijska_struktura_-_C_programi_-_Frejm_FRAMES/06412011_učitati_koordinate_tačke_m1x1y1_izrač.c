/*
 * ZADATAK 06412011 - 06412011
 * Učitati koordinate tačke M1(x1,y1) izračunati udaljenost od koordinatnog početka.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06412011.htm
 */

#include <stdio.h>
#include <math.h>
int main()
{
float x1,y1,d;                             // deklarisanje varijabli
printf("Ucitaj koordinate tačaka x1,y1 "); // ime varijable cija vrijednost se ucitava
scanf("%f %f", &x1, &y1);                  // ucitavanje vrijednosti koordinata sa tastature

d = sqrt((x1*x1) + (y1*y1));               // udaljenost od koordinatnog pocetka
printf("Udaljenost tacke M(%.2f,%.2f) od koordinatnog pocetka = %.2f", x1, y1, d); // ispis vrijednosti izraza
return 0;
}

II varijanta
// 06412011
#include <stdio.h>
#include <math.h>
int main()
{
float x1,y1,d;                             // deklarisanje varijabli
printf("Ucitaj koordinate tačaka x1,y1 "); // ime varijable cija vrijednost se ucitava
scanf("%f %f", &x1, &y1);                  // ucitavanje vrijednosti koordinata sa tastature

d = pow(((x1*x1) + (y1*y1)), 0.5);         // udaljenost od koordinatnog pocetka
printf("Udaljenost tacke M(%.2f,%.2f) od koordinatnog pocetka = %.2f", x1, y1, d); // ispis vrijednosti izraza
return 0;
}

III varijanta
#include <stdio.h>
#include <math.h>
int main()
{
float x1,y1;                               // deklarisanje varijabli
printf("Ucitaj koordinate tačaka x1,y1 "); // ime varijable cija vrijednost se ucitava
scanf("%f %f", &x1, &y1);                  // ucitavanje vrijednosti koordinata sa tastature

printf("Udaljenost tacke M(%.2f,%.2f) od koordinatnog pocetka = %.2f", x1, y1, sqrt((x1*x1) + (y1*y1))); // ispis vrijednosti izraza
return 0;
}
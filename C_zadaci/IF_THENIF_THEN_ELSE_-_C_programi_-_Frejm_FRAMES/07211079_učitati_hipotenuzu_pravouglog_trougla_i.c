/*
 * ZADATAK 07211079 - 07211079
 * Učitati hipotenuzu pravouglog trougla i ugao alfa u stepenima. Izračunati katete.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211079.htm
 */

#include <stdio.h>
#include <math.h>

int main ()
{
float c, alfa, a, b;
printf("Hipotenuza: ");             // ime varijable cija vrijednost se ucitava
scanf("%f", &c);                    // ucitavanje vrijednosti
printf("Ugao (u stepenima): ");     // ime varijable cija vrijednost se ucitava
scanf("%f", &alfa);                 // ucitavanje vrijednosti

if ( (c > 0) && (alfa > 0) && (alfa < 90))
{
a = c * sin((alfa * M_PI) / 180);  // M_PI vrijednost broja pi
b = c * cos((alfa * M_PI) / 180);

printf("Duzina katete a = %.2f\n", a);  // ispis vrijednosti
printf("Duzina katete b = %.2f\n", b);  // ispis vrijednosti
}
else
printf("Takav pravougli trougao ne postoji.");  // ispis vrijednosti

return 0;

}
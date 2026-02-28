/*
 * ZADATAK 06411075 - 06411075
 * Izračunati površinu kvadrata.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411075.htm
 */

#include <stdio.h>
int main()
{
int a, p;                                     // deklarisanje varijabli

printf("Ucitaj duzinu stranice kvadrata: ");  // ime varijable cija vrijednost se ucitava
scanf("%d",&a);                               // ucitavanje vrijednosti varijable a sa tastature

p = a * a;                                    // povrsinu kvadrata

printf("Povrsina kvadrata iznosi: %d", p);    // ispis vrijednosti p

return 0;
}

II varijanta
// 06411075
#include <stdio.h>
int main()
{
int a;                                          // deklarisanje varijabli

printf("Ucitaj duzinu stranice kvadrata: ");    // ime varijable cija vrijednost se ucitava
scanf("%d",&a);                                 // ucitavanje vrijednosti varijable broj sa tastature

printf("Povrsina kvadrata iznosi: %d", a * a);  // ispis vrijednosti povrsine kvadrata

return 0;
}
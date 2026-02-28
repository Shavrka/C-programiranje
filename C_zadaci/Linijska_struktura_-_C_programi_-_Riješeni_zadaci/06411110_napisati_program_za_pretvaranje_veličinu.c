/*
 * ZADATAK 81 - 06411110
 * Napisati program za pretvaranje veličinu fajla izraženu u megabajtima ispisuje u kilobajtima.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411110.htm
 */

#include <stdio.h>
int main()
{
float mb, kb;                              // deklarisanje varijabli
printf("Ucitaj velicinu u megabajtima: "); // ime varijable cija vrijednost se ucitava
scanf("%f", &mb);                          // ucitavanje vrijednosti varijable sa tastature

kb = mb * 1024;                            // pretvaranje megabajta u kilobajte
printf("Velicina u kilobajtima = %.2f\n", kb);  // ispis vrijednosti
return 0;
}

II varijanta
// 06411110
#include <stdio.h>
int main()
{
float mb, kb;                              // deklarisanje varijabli
printf("Ucitaj velicinu u megabajtima: "); // ime varijable cija vrijednost se ucitava
scanf("%f", &mb);                          // ucitavanje vrijednosti varijable sa tastature

printf("Velicina u kilobajtima = %.2f\n", mb * 1024);  // ispis vrijednosti
return 0;
}
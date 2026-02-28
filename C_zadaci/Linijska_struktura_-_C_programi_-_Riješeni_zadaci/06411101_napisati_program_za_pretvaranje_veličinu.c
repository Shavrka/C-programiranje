/*
 * ZADATAK 80 - 06411101
 * Napisati program za pretvaranje veličinu fajla izraženu u kilobajtima u veličinu u bajtima.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411101.htm
 */

#include <stdio.h>
int main()
{
float kb, b;                               // deklarisanje varijabli
printf("Ucitaj velicinu u kilobajtima: "); // ime varijable cija vrijednost se ucitava
scanf("%f", &kb);                          // ucitavanje vrijednosti varijable sa tastature

b = kb * 1024;                             // pretvaranje kilobajta u bajte
printf("Velicina u bajtima = %.2f\n", b);  // ispis vrijednosti
return 0;
}

II varijanta
// 06411101
#include <stdio.h>
int main()
{
float kb;                                  // deklarisanje varijabli
printf("Ucitaj velicinu u kilobajtima: "); // ime varijable cija vrijednost se ucitava
scanf("%f", &kb);                          // ucitavanje vrijednosti varijable sa tastature

printf("Velicina u bajtima = %.2f\n", kb * 1024); // ispis vrijednosti
return 0;
}
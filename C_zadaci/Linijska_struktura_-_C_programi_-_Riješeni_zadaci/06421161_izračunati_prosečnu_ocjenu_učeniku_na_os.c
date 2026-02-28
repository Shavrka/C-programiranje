/*
 * ZADATAK 131 - 06421161
 * Izračunati prosečnu ocjenu učeniku na osnovu učitanih ocjena iz: matematike, fizike i informatike.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06421161.htm
 */

#include <stdio.h>
int main()
{
int m, f, i;             // deklarisanje varijabli
float as;                // deklarisanje varijable
printf("Matematika: ");  // ime varijable cija vrijednost se ucitava
scanf("%d", &m);         // ucitavanje vrijednosti varijable sa tastature
printf("Fizika: ");      // ime varijable cija vrijednost se ucitava
scanf("%d", &f);         // ucitavanje vrijednosti varijable sa tastature
printf("Informatika: "); // ime varijable cija vrijednost se ucitava
scanf("%d", &i);         // ucitavanje vrijednosti varijable sa tastature

as = (m + f + i)/3;      // prosjecna ocjena
printf("Prosjecna ocjena = %.3f", as); // ispis vrijednosti
return 0;
}

II varijanta
// 06421161
#include <stdio.h>
int main()
{
int m, f, i;             // deklarisanje varijabli
printf("Matematika: ");  // ime varijable cija vrijednost se ucitava
scanf("%d", &m);         // ucitavanje vrijednosti varijable sa tastature
printf("Fizika: ");      // ime varijable cija vrijednost se ucitava
scanf("%d", &f);         // ucitavanje vrijednosti varijable sa tastature
printf("Informatika: "); // ime varijable cija vrijednost se ucitava
scanf("%d", &i);         // ucitavanje vrijednosti varijable sa tastature

printf("Prosjecna ocjena = %.3f", (m + f + i)/3.0); // ispis vrijednosti
return 0;
}
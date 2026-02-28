/*
 * ZADATAK 96 - 06412012
 * Putovanje traje n sekundi. Izračunaj koliko je to sati, minuta i sekundi.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06412012.htm
 */

#include<stdio.h>
int main()
{
int n,sat,min,sek, sek1;    // deklarisanje varijabli
printf("Broj sekundi: ");   // ime varijable cija vrijednost se ucitava
scanf("%d", &n);            // ucitavanje vrijednosti varijable sa tastature

sat=n/3600;;                // pretvaranje sekundi u sate
min = n % 3600 / 60;        // pretvaranje u minute
sek = n % 60;               // ostatak dijeljenja - sekunde
printf("Proteklo %d sati,%d minuta i %d sekundi", sat, min, sek); // ispis vrijednosti
return 0;
}

II varijanta
// 06412012
#include<stdio.h>
int main()
{
int n, sat, min,sek, n1;    // deklarisanje varijabli
printf("Broj sekundi: ");   // ime varijable cija vrijednost se ucitava
scanf("%d", &n);            // ucitavanje vrijednosti varijable sa tastature

sat=n/3600;;                // pretvaranje sekundi u sate
n1 = n % 3600;                 // ostatak dijeljenja za sate (minute)
min = n1 / 60;        // pretvaranje u minute
sek = n % 60;               // ostatak dijeljenja - sekunde
printf("Proteklo %d sati,%d minuta i %d sekundi", sat, min, sek); // ispis vrijednosti
return 0;
}

III varijanta
// 06412012
#include<stdio.h>
int main()
{
int n;    // deklarisanje varijabli
printf("Broj sekundi: ");   // ime varijable cija vrijednost se ucitava
scanf("%d", &n);            // ucitavanje vrijednosti varijable sa tastature

printf("Proteklo %d sati,%d minuta i %d sekundi", n/3600, n % 3600 / 60, n % 60); // ispis vrijednosti
return 0;
}
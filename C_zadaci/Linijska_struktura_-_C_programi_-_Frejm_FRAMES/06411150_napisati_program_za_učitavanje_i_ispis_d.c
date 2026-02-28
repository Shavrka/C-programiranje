/*
 * ZADATAK 06411150 - 06411150
 * Napisati program za učitavanje i ispis dva broja.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411150.htm
 */

#include <stdio.h>
int main()
{
int prvi_broj, drugi_broj; // deklarisanje varijabli

printf("1. broj: ");       // ime varijable cija vrijednost se ucitava
scanf("%d", &prvi_broj);   // ucitavanje vrijednosti varijable prvi_broj sa tastature
printf("2. broj: ");       // ime varijable cija vrijednost se ucitava
scanf("%d", &drugi_broj);  // ucitavanje vrijednosti varijable drugi_broj sa tastature

printf("broj1 = %d\n", prvi_broj); // ispis vrijednosti provog broja
printf("broj2 = %d", drugi_broj);  // ispis vrijednosti drugog broja
return 0;
}

II varijanta
// 06411150
#include <stdio.h>
int main()
{
int prvi_broj, drugi_broj; // deklarisanje varijabli

printf("1. broj: ");       // ime varijable cija vrijednost se ucitava
scanf("%d", &prvi_broj);   // ucitavanje vrijednosti varijable a sa tastature
printf("2. broj: ");       // ime varijable cija vrijednost se ucitava
scanf("%d", &drugi_broj);  // ucitavanje vrijednosti varijable b sa tastature

printf("broj1 = %d\nbroj2 = %d", prvi_broj, drugi_broj); // ispis vrijednosti ispis vrijednosti prvog pa drugog
return 0;
}
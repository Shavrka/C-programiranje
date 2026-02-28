/*
 * ZADATAK 06411151 - 06411151
 * Napisati program za učitavanje dva broja i ispisti ih u obrnutom redoslijedu učitavanja.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411151.htm
 */

#include <stdio.h>
int main()
{
int prvi_broj, drugi_broj; // deklarisanje varijabli

printf("1. broj: ");       // ime varijable cija vrijednost se ucitava
scanf("%d", &prvi_broj);   // ucitavanje vrijednosti varijable a sa tastature
printf("2. broj: ");       // ime varijable cija vrijednost se ucitava
scanf("%d", &drugi_broj);  // ucitavanje vrijednosti varijable b sa tastature

printf("broj2 = %d\n", drugi_broj);   // ispis vrijednosti drugog broja
printf("broj1 = %d     ", prvi_broj); // ispis vrijednosti provog broja
return 0;
}

II varijanta
// 06411151
#include <stdio.h>
int main()
{
int prvi_broj, drugi_broj; // deklarisanje varijabli

printf("1. broj: ");       // ime varijable cija vrijednost se ucitava
scanf("%d", &prvi_broj);   // ucitavanje vrijednosti varijable a sa tastature
printf("2. broj: ");       // ime varijable cija vrijednost se ucitava
scanf("%d", &drugi_broj);  // ucitavanje vrijednosti varijable b sa tastature

printf("broj2 = %d\nbroj1 = %d", drugi_broj, prvi_broj); // ispis vrijednosti drugog pa prvog broja
return 0;
}
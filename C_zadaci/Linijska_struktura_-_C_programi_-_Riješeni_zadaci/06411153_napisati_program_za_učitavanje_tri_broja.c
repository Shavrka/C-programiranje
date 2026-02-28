/*
 * ZADATAK 5 - 06411153
 * Napisati program za učitavanje tri broja i ispis ih u obrnutom redoslijedu učitavanja.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411153.htm
 */

#include <stdio.h>
int main()
{
int prvi_broj, drugi_broj, treci_broj; // deklarisanje varijabli

printf("1. broj: ");       // ime varijable cija vrijednost se ucitava
scanf("%d", &prvi_broj);   // ucitavanje vrijednosti varijable prvi_broj sa tastature
printf("2. broj: ");       // ime varijable cija vrijednost se ucitava
scanf("%d", &drugi_broj);  // ucitavanje vrijednosti varijable drugi_broj sa tastature
printf("3. broj: ");       // ime varijable cija vrijednost se ucitava
scanf("%d", &treci_broj);  // ucitavanje vrijednosti varijable treci_broj sa tastature

printf("broj3 = %d\n", treci_broj);  // ispis vrijednosti treceg broja
printf("broj2 = %d\n", drugi_broj);  // ispis vrijednosti drugog broja
printf("broj1 = %d\n", prvi_broj);   // ispis vrijednosti provog broja
return 0;
}

II varijanta
// 06411153
#include <stdio.h>
int main()
{
int prvi_broj, drugi_broj, treci_broj; // deklarisanje varijabli

printf("1. broj: ");       // ime varijable cija vrijednost se ucitava
scanf("%d", &prvi_broj);   // ucitavanje vrijednosti varijable prvi_broj sa tastature
printf("2. broj: ");       // ime varijable cija vrijednost se ucitava
scanf("%d", &drugi_broj);  // ucitavanje vrijednosti varijable drugi_broj sa tastature
printf("3. broj: ");       // ime varijable cija vrijednost se ucitava
scanf("%d", &treci_broj);  // ucitavanje vrijednosti varijable treci_broj sa tastature

printf("broj3 = %d\nbroj2 = %d\nbroj1 = %d", treci_broj, drugi_broj, prvi_broj);   // ispis vrijednosti brojeva
return 0;
}
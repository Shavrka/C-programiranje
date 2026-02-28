/*
 * ZADATAK 4 - 06411152
 * Napisati program za učitavanje i ispis tri broja.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411152.htm
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

printf("broj1 = %d\n", prvi_broj);   // ispis vrijednosti provog broja
printf("broj2 = %d\n", drugi_broj);  // ispis vrijednosti drugog broja
printf("broj3 = %d", treci_broj);    // ispis vrijednosti treceg broja
return 0;
}

II varijanta ispis jednom naredbom
// 06411152
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

printf("broj1 = %d\nbroj2 = %d\nbroj3 = %d", prvi_broj, drugi_broj,treci_broj);   // ispis vrijednosti brojeva
return 0;
}
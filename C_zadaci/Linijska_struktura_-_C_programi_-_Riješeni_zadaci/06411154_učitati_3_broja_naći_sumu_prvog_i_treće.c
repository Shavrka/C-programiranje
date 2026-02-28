/*
 * ZADATAK 11 - 06411154
 * Učitati 3 broja. Naći sumu prvog i trećeg te razliku trećeg i prvog.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411154.htm
 */

#include <stdio.h>
int main()
{
int prvi_broj, drugi_broj, treci_broj, suma, razlika; // deklarisanje varijabli

printf("1. broj: ");       // ime varijable cija vrijednost se ucitava
scanf("%d", &prvi_broj);   // ucitavanje vrijednosti varijable prvi_broj sa tastature
printf("2. broj: ");       // ime varijable cija vrijednost se ucitava
scanf("%d", &drugi_broj);  // ucitavanje vrijednosti varijable drugi_broj sa tastature
printf("3. broj: ");       // ime varijable cija vrijednost se ucitava
scanf("%d", &treci_broj);  // ucitavanje vrijednosti varijable treci_broj sa tastature

suma = prvi_broj + treci_broj;       // suma prvog i treceg broja
razlika = treci_broj - prvi_broj;    // razlika treceg i prvog broja
printf("suma prvog i treceg broja = %d\n", suma);   // ispis vrijednosti provog broja
printf("razlika treceg i prvog broja = %d\n", razlika);  // ispis vrijednosti drugog broja
return 0;
}

II varijanta
// 06411154
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

printf("suma prvog i treceg broja = %d\n", prvi_broj + treci_broj);   // ispis vrijednosti provog broja
printf("razlika treceg i prvog broja = %d\n", treci_broj - prvi_broj);  // ispis vrijednosti drugog broja
return 0;
}
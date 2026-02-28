/*
 * ZADATAK 06411155 - 06411155
 * Učitati 3 broja. Naći razliku trećeg i drugog te proizvod prvog i drugog.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411155.htm
 */

#include <stdio.h>
int main()
{
int prvi_broj, drugi_broj, treci_broj, razlika, proizvod; // deklarisanje varijabli

printf("1. broj: ");       // ime varijable cija vrijednost se ucitava
scanf("%d", &prvi_broj);   // ucitavanje vrijednosti varijable prvi_broj sa tastature
printf("2. broj: ");       // ime varijable cija vrijednost se ucitava
scanf("%d", &drugi_broj);  // ucitavanje vrijednosti varijable drugi_broj sa tastature
printf("3. broj: ");       // ime varijable cija vrijednost se ucitava
scanf("%d", &treci_broj);  // ucitavanje vrijednosti varijable treci_broj sa tastature

razlika = treci_broj - drugi_broj;  // razlika treceg i prvog broja
proizvod = prvi_broj * drugi_broj;  // proizvod prvog i drugog broja
printf("razlika treceg i drugog broja =  %d\n", razlika);  // ispis vrijednosti razlike
printf("proizvod prvog i drugog broja = %d\n", proizvod);  // ispis vrijednosti proizvod
return 0;
}

II varijanta
// 06411155
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

printf("razlika treceg i drugog broja =  %d\n", treci_broj - drugi_broj); // ispis vrijednosti provog broja
printf("proizvod prvog i drugog broja = %d\n", prvi_broj * drugi_broj);   // ispis vrijednosti drugog broja
return 0;
}
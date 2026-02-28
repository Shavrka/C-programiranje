/*
 * ZADATAK 06411102 - 06411102
 * Napisati program koji učitava dvocifreni broj i ispisuje cifre unazad.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411102.htm
 */

#include <stdio.h>
int main()
{
int x, y, broj;             // deklarisanje varijabli
printf("Ucitaj dvocifren broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%d",&broj);         // ucitavanje vrijednosti varijable sa tastature

x = broj / 10;             // cifra desetica
y = broj % 10;             // cifra jedinica
printf("Broj= %d\nCifra jedinica= %d  Cifra desetica= %d", broj, y, x);  // ispis
return 0;
}

II varijanta
// 06411102
#include <stdio.h>
int main()
{
int broj;                  // deklarisanje varijable
printf("Ucitaj dvocifren broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%d",&broj);        // ucitavanje vrijednosti varijable sa tastature

printf("Broj= %d\nCifra jedinica= %d  Cifra desetica= %d", broj, broj % 10, broj / 10);  // ispis
return 0;
}
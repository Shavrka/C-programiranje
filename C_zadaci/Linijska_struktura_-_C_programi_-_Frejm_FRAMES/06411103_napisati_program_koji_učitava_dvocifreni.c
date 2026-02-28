/*
 * ZADATAK 06411103 - 06411103
 * Napisati program koji učitava dvocifreni broj i ispisuje sumu cifara.
 * Kategorija: Linijska struktura - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/064c/06411103.htm
 */

#include <stdio.h>
int main()
{
int x, y, s, broj;          // deklarisanje varijabli
printf("Ucitaj dvocifren broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%d",&broj);         // ucitavanje vrijednosti varijable sa tastature

x = broj / 10;    // cifra desetica
y = broj % 10;    // cifra jedinica
s = x + y;        // suma cifara
printf("Broj= %d  Cifra desetica= %d  Cifra jedinica= %d  Suma cifra= %d", broj, x, y, s);  // ispis
return 0;
}

II varijanta
// 06411103
#include <stdio.h>
int main()
{
int broj;                  // deklarisanje varijable
printf("Ucitaj dvocifren broj: ");  // ime varijable cija vrijednost se ucitava
scanf("%d",&broj);         // ucitavanje vrijednosti varijable sa tastature

printf("Broj= %d  Cifra desetica= %d  Cifra jedinica= %d  Suma cifra= %d", broj, x, y, broj / 10 + broj % 10);  // ispis
return 0;
}
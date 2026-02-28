/*
 * ZADATAK 111 - 06411104
 * Napisati program koji učitava trocifreni broj i ispisuje cifre.
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411104.htm
 */

#include <stdio.h>
int main()
{
int x, y, z, broj;    // deklarisanje varijabli
printf("Trocifren broj:"); // ime varijable cija vrijednost se ucitava
scanf("%d", &broj);      // ucitavanje vrijednosti varijable sa tastature

x = broj / 100;          // cifra stotica
y = broj / 10 % 10;      // cifra desetica
z = broj % 10;           // cifra jedinica
printf("Trocifren broj = %d\n", broj);  // ispis
printf("Cifra stotica = %d  Cifra desetica = %d  Cifra jedinica = %d", x, y, z);  // ispis
return 0;
}

II varijanta
// 06411104
#include <stdio.h>
int main()
{
int  broj, x, y, z, t;   // deklarisanje varijabli
printf("Trocifren broj:"); // ime varijable cija vrijednost se ucitava
scanf("%d", &broj);      // ucitavanje vrijednosti varijable sa tastature

x = broj / 100;          // cifra stotica
t = broj / 10;           // prve dvije cifre
y = t % 10;              // cifra desetica
z = broj % 10;           // cifra jedinica
printf("Trocifren broj = %d\n", broj);  // ispis
printf("Cifra stotica = %d  Cifra desetica = %d  Cifra jedinica = %d", x, y, z);  // ispis
return 0;
}

III varijanta
// 06411104
#include <stdio.h>
int main()
{
int broj;                 // deklarisanje varijabli
printf("Trocifren broj:"); // ime varijable cija vrijednost se ucitava
scanf("%d", &broj);      // ucitavanje vrijednosti varijable sa tastature

printf("Trocifren broj = %d\n", broj);  // ispis
printf("Cifra stotica = %d  Cifra desetica = %d  Cifra jedinica = %d", broj / 100, broj / 10 % 10, broj % 10);  // ispis
return 0;
}
/*
 * ZADATAK 06411105 - 06411105
 * Napisati program koji učitava trocifreni broj i ispisuje cifre unazad.
 * Kategorija: Linijska struktura - Izdvajanje cifara - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/064c/06411105.htm
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
printf("Cifra jedinica = %d  Cifra desetica = %d  Cifra stotica = %d", z, y, x);  // ispis
return 0;
}

II varijanta
// 06411105
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
printf("Cifra jedinica = %d  Cifra desetica = %d  Cifra stotica = %d", z, y, x);  // ispis
return 0;
}

III varijanta
// 06411105
#include <stdio.h>
int main()
{
int broj;                 // deklarisanje varijabli
printf("Trocifren broj:"); // ime varijable cija vrijednost se ucitava
scanf("%d", &broj);      // ucitavanje vrijednosti varijable sa tastature

printf("Trocifren broj = %d\n", broj);  // ispis
printf("Cifra jedinica = %d  Cifra desetica = %d  Cifra stotica = %d", broj % 10, broj / 10 % 10, broj / 100);  // ispis
return 0;
}
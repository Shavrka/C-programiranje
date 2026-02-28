/*
 * ZADATAK 06411108 - 06411108
 * Napisati program koji učitava četverocifreni broj i ispisuje cifre unazad.
 * Kategorija: Linijska struktura - Izdvajanje cifara - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/064c/06411108.htm
 */

#include <stdio.h>

main()
{
int x, y, z, w, t, broj;
printf("Cetverocifren broj:");
scanf("%d", &broj);            // ulaz

z = broj % 10;      // cifra jedinica
t = broj / 10;      // prve tri cifre
y = t % 10;         // cifra desetica
t = t / 10;         // prve dvije cifre
x = t %  10;        // cifra stotica
w = t / 10;         // cifra hiljadica

printf("Cetverocifren broj= %d  Cifra jedinica= %d  Cifra desetica= %d  Cifra stotica= %d  Cifra hiljadica= %d", broj, z, y, x, w);  // ispis

getchar();
}
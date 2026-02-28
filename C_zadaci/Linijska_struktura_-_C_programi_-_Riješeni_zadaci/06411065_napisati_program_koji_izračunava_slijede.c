/*
 * ZADATAK 55 - 06411065
 * Napisati program koji izračunava slijedeće izraze:c = x * yd = x - ye = c - x + y
 * Kategorija: Linijska struktura - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org//knjige/computer/c/v/064c/06411065.htm
 */

#include <stdio.h>
int main()
{
int x,y,c,d,e;         // deklarisanje varijabli
printf("Ucitaj x: ");  // ime varijabli cije vrijednosti se ucitava
scanf("%d",&x);        // ucitavanje vrijednosti varijable x
printf("Ucitaj y: ");  // imena varijabli cije vrijednosti se ucitava
scanf("%d",&y);        // ucitavanje vrijednosti varijable y

c = x * y;             // izračunaj c
d = x - y;             // izračunaj d
e = c-x+y;             // izračunaj e
printf("x = %d\n", x); // ispis vrijednosti x
printf("y = %d\n", y); // ispis vrijednosti y
printf("c = %d\n", c); // ispis vrijednosti c
printf("d = %d\n", d); // ispis vrijednosti d
printf("e = %d\n", e); // ispis vrijednosti e
return 0;
}

II varijanta
// 06411065
#include <stdio.h>
int main()
{
int x, y;              // deklarisanje varijabli
printf("Ucitaj x: ");  // ime varijabli cije vrijednosti se ucitava
scanf("%d",&x);        // ucitavanje vrijednosti varijable x
printf("Ucitaj y: ");  // imena varijabli cije vrijednosti se ucitava
scanf("%d",&y);        // ucitavanje vrijednosti varijable y

printf("x = %d\n", x);             // ispis vrijednosti x
printf("y = %d\n", y);             // ispis vrijednosti y
printf("c = %d\n", x * y);         // ispis vrijednosti c
printf("d = %d\n", x - y);         // ispis vrijednosti d
printf("e = %d\n", x * y - x + y); // ispis vrijednosti e
return 0;
}
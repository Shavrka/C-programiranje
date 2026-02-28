/*
 * ZADATAK 24010340 - 24010340
 * Sa tastature se unese neki cijeli broj, a koji će zatim na ekranu ispisati znak čija je ASCII šifra jednaka unesenom broju.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010340.htm
 */

#include <stdlib.h>
#include <string.h>

int main()
{
int n;
printf("Unesite cijeli broj:");
scanf("%d",&n);
char d=(char)n;
printf("ASCII sifra broja %d je %c.",n,d);

return 0;
}
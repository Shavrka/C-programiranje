/*
 * ZADATAK 08312002 - 08312002
 * Izračunati i ispisati sumu prirodnih brojeva od k do n.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312002.htm
 */

#include <stdio.h>

int main ()
{
int s=0,n,k;
printf("Od broja: ");
scanf("%d", &k);
printf("Do broja: ");
scanf("%d", &n);
do
{
s=s+k;
k++;
} while (k<=n);
printf("Suma iznosi: %d", s);
return 0;
}
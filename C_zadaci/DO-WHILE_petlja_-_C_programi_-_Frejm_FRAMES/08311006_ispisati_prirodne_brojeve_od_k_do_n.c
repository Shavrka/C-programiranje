/*
 * ZADATAK 08311006 - 08311006
 * Ispisati prirodne brojeve od k do n.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311006.htm
 */

#include <stdio.h>

int main ()
{
int k, n;
printf("Od broja: ");
scanf("%d", &k);
printf("Do broja: ");
scanf("%d", &n);
do
{
printf("%d\n", k);
k++;
}while (k<=n);
return 0;
}
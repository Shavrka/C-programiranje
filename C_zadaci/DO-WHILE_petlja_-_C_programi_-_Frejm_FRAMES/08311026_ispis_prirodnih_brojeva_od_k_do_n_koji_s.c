/*
 * ZADATAK 08311026 - 08311026
 * Ispis prirodnih brojeva od k do n koji su djeljivi sa 5.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311026.htm
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
if(k%5==0)
{
printf("%d\n", k);
}
k++;
}while (k<=n);
return 0;
}
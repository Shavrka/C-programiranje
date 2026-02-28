/*
 * ZADATAK 08311027 - 08311027
 * Ispis prirodnih brojeva od k do n koji su djeljivi sa a.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311027.htm
 */

#include <stdio.h>

int main ()
{
int k, n, a;
printf("Od broja: ");
scanf("%d", &k);
printf("Do broja: ");
scanf("%d", &n);
printf("Djelilac: ");
scanf("%d", &a);
do
{
if(k%a==0)
{
printf("%d\n", k);
}
k++;
}while (k <= n);
return 0;
}
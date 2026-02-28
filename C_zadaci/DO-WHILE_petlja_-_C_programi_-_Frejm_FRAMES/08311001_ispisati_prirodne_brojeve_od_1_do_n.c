/*
 * ZADATAK 08311001 - 08311001
 * Ispisati prirodne brojeve od 1 do n.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311001.htm
 */

#include <stdio.h>

int main ()
{
int i=1,n;
printf("Do broja: ");
scanf("%d", &n);
do
{
printf("%d\n", i);
i++;
}while (i<=n);
return 0;
}
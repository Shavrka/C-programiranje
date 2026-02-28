/*
 * ZADATAK 08311002 - 08311002
 * Napisati program za ispis parnih prirodnih brojeva od 1 do n.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311002.htm
 */

#include <stdio.h>

int main ()
{
int i=1, n;
printf("Do broja: ");
scanf("%d", &n);
do
{
if(i%2==0)
{
printf("%d\n", i);
}
i++;
}while (i<=n);
return 0;
}
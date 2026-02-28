/*
 * ZADATAK 08211002 - 08211002
 * Napisati program za ispis parnih brojeva od 1
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08211002.htm
 */

#include <stdio.h>

int main ()
{
int i=1, n;
printf("Do broja: ");
scanf("%d", &n);
while (i<=n)
{
if(i%2==0)
{
printf("%d\n", i);
}
i++;
}
return 0;
}
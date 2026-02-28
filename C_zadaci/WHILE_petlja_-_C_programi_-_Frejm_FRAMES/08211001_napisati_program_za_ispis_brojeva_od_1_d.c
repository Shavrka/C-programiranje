/*
 * ZADATAK 08211001 - 08211001
 * Napisati program za ispis brojeva od 1 do n
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08211001.htm
 */

#include <stdio.h>

int main ()
{
int i=1,n;
printf("Do broja: ");
scanf("%d", &n);
while (i<=n)
{
printf("%d\n", i);
i++;
}
return 0;
}
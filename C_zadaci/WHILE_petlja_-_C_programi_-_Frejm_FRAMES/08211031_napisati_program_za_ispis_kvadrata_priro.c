/*
 * ZADATAK 08211031 - 08211031
 * Napisati program za ispis kvadrata prirodnih brojeva do n (WHILE petlja).
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08211031.htm
 */

#include <stdio.h>

int main ()
{
int i=1, n;
printf("Do broja: ");
scanf("%d", &n);
while (i<=n)
{
printf("%d\n", i*i);
i++;
}
return 0;
}
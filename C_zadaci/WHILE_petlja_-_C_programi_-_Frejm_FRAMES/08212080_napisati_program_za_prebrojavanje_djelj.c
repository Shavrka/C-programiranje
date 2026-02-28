/*
 * ZADATAK 08212080 - 08212080
 * Napisati program  za prebrojavanje djeljivih sa 3 prirodne brojeve od 1do n.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212080.htm
 */

#include <stdio.h>

int main ()
{
int i=1,n,br=0;
printf("Do broja: ");
scanf ("%d", &n);

while (i<=n)
{
if(i%3==0)
br++;
i++;
}

printf("Djeljivih sa 3 ima: %d", br);
return 0;
}
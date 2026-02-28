/*
 * ZADATAK 08212001 - 08212001
 * Naći sumu prvih
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212001.htm
 */

#include <stdio.h>

int main ()
{
int i=1,s=0,n;
printf("Do broja: ");
scanf("%d", &n);
while (i<=n)
{
s=s+i;
i++;
}
printf("Suma iznosi: %d", s);
return 0;
}
/*
 * ZADATAK 07211001 - 07211001
 * Napisati program za ispis tri polovine korijena broja (3/2 korijena broja) ako je moguće inače ispisati 'Nedefinisan'.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211001.htm
 */

#include <stdio.h>

int main ()
{
float x,y;
printf("Broj: \n")
scanf("%e", &x);
if ( x > 0)
{
printf("x= %e",x,"y= %e",3*sqrt(x)/2,"\n")
}
else
printf("Nedefinisano \n")
return 0;
}
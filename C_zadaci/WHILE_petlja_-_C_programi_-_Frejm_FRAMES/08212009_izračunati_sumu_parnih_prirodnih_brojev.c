/*
 * ZADATAK 08212009 - 08212009
 * Izračunati  sumu parnih prirodnih brojeva u intervalu od
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212009.htm
 */

#include <stdio.h>

int main ()
{
int s=0,n,k;
printf("Od broja: ");
scanf("%d", &k);
printf("Do broja: ");
scanf("%d", &n);
while (k < =n) {
if(k % 2 == 0)
s = s + k;
k++;
}
printf("Suma iznosi: %d", s);
return 0;
}
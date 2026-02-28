/*
 * ZADATAK 08212004 - 08212004
 * Napisati program za ispis sume neparnih
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212004.htm
 */

#include <stdio.h>

int main ()
{
int i=1,s=0,n;
printf("Do broja: ");
scanf("%d", &n);
while (i<=n)  {
if(i%2==1){s=s+i;}
i++;
}
printf("Suma iznosi: %d", s);
return 0;
}
/*
 * ZADATAK 08212041 - 08212041
 * Napisati program za ispis proizvoda brojeva od 1 do n.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212041.htm
 */

#include <stdio.h>

int main()
{
int i=1,n,p;

printf("Unesi N: ");
scanf("%d",&n);

while(i <= n)
{
p*=i;
i++;
}
printf("Proizvod je: %d",p);

return 0;
}
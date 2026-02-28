/*
 * ZADATAK 08212044 - 08212044
 * Napisati program za ispis proizvoda brojeva od
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212044.htm
 */

#include <stdio.h>

main()
{
int i=1,n,p=1;

printf("Unesi N: ");
scanf("%d",&n);

while(i <= n) {
if(i % 7 == 0)
p*=i;
i++;
}

printf("Proizvod je: %d",p);

return 0;
getchar();
}
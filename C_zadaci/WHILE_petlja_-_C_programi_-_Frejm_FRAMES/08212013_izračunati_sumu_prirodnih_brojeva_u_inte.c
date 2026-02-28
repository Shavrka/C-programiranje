/*
 * ZADATAK 08212013 - 08212013
 * Izračunati sumu prirodnih brojeva u intervalu od 1 do n čija je cifra jedinica 8.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212013.htm
 */

#include <stdio.h>

main()
{
int i, n;
float suma;

printf("Unesite N: ");
scanf("%d",&n);

i=1;
while(i<=n)
{
if(i % 10 == 8)
{
suma+=i;
}
i++;
}
printf("Suma je: %f",suma);

return 0;
getchar();
}
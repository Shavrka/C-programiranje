/*
 * ZADATAK 08312013 - 08312013
 * Izračunati sumu prirodnih brojeva u intervalu od 1 do n čija je cifra jedinica 8.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312013.htm
 */

#include <stdio.h>

main()
{
int i, n;
float suma;

printf("Unesite N: ");
scanf("%d",&n);

i=1;
do	{
if(i % 10 == 8)
{
suma+=i;
}
i++;
} while(i<=n)

printf("Suma je: %f",suma);

return 0;
getchar();
}
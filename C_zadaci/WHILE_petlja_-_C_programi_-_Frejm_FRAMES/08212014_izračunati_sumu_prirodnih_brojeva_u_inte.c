/*
 * ZADATAK 08212014 - 08212014
 * Izračunati sumu prirodnih brojeva u intervalu od k do n čija je cifra jedinica 8.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212014.htm
 */

#include <stdio.h>

main()

{
int i, k, n;
float suma;

printf("Unesi K i N: \n");
scanf("%d%d",&k,&n);

i =  k;
while(i<=n)
{
if(k % 10 == 8)
{
suma += i;
}
i++;
}
printf("Suma je: %f",suma);

return 0;
getchar();
}
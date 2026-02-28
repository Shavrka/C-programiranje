/*
 * ZADATAK 08212031 - 08212031
 * Izračunati sumu prirodnih brojeva u intervalu od k do n koji su djeljivi sa 7.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212031.htm
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
if(k % 7 == 0)
{
suma += i;
}
i++;
}
printf("Suma je: %f",suma);

return 0;
getchar();
}
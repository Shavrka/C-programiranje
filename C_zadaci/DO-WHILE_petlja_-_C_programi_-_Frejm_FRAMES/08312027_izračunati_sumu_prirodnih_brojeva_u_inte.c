/*
 * ZADATAK 08312027 - 08312027
 * Izračunati sumu prirodnih brojeva u intervalu od k do n koji su parni.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312027.htm
 */

#include <stdio.h>

main()

{
int i, k, n;
float suma;

printf("Unesite K i N: \n");
scanf("%d%d",&k,&n);

i =  k;
do	{
if(k % 2 == 0)
{
suma += i;
}
i++;
} while(i<=n)

printf("Suma je: %f",suma);

return 0;
getchar();
}
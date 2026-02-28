/*
 * ZADATAK 08312019 - 08312019
 * Izračunati sumu prirodnih brojeva u intervalu od k do n koji su djeljivi sa a.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312019.htm
 */

#include <stdio.h>

main()

{
int i, k, n, a;
float suma;

printf("Unesi K i N: \n");
scanf("%d%d",&k,&n);

printf("Unesi djelioca: ");
scanf("%d",&a);

i =  k;
do	{
if(k % a == 0)
{
suma += i;
}
i++;
} while(i<=n)

printf("Suma je: %f",suma);

return 0;
getchar();
}
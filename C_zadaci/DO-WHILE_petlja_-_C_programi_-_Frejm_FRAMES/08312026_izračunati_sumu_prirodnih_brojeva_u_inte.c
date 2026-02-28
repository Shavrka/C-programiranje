/*
 * ZADATAK 08312026 - 08312026
 * Izračunati sumu prirodnih brojeva u intervalu od 1 do n koji nisu djeljivi sa a.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312026.htm
 */

#include <stdio.h>

main()

{
float suma;
int i,n,a;

printf("Unesite djelioca: ");
scanf("%d",&a);

printf("Unesite gornju granicu: ");
scanf("%d",&n);

i=1;
do	{
if(i % a != 0)
{
suma+=i;
}
i++;
} while(i<=n)

printf("Suma je: %f",suma);

return 0;
getchar();
}
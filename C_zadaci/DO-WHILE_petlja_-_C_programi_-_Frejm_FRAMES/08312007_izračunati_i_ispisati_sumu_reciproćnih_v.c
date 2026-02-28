/*
 * ZADATAK 08312007 - 08312007
 * Izračunati i ispisati sumu reciproćnih vrijednosti prvih n prirodnih brojeva (harmonijski niz: 1 + 1/2 + 1/3 + ... + 1/n).
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312007.htm
 */

#include <stdio.h>

main()

{
float suma;
int i,n;

printf("Unesite gornju granicu: ");
scanf("%d",&n);

i=1;
do	{
suma+=(1.0/i);
i++;
} while(i<=n)

printf("Suma reciprocnih vrijednosti je: %f",suma);

return 0;
getchar();
}
/*
 * ZADATAK 08312008 - 08312008
 * Izračunati i ispisati sumu reciprocnih vrijednosti prirodnih brojeva od k do n.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312008.htm
 */

#include <stdio.h>

main()

{
float suma;
int i, k, n;

printf("Unesite K i N: \n");
scanf("%d%d",&k,&n);

i =  k;
do	{
suma += (1.0/i);
i++;
} while(i<=n)

printf("Suma recprocnih vrijednosti je: %f",suma);

return 0;
getchar();
}
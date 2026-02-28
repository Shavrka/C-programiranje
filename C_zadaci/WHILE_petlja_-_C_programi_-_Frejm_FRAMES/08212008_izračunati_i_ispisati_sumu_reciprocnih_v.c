/*
 * ZADATAK 08212008 - 08212008
 * Izračunati i ispisati sumu reciprocnih vrijednosti prirodnih brojeva od k do n.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212008.htm
 */

#include <stdio.h>

main()

{
float suma;
int i, k, n;

printf("Unesite K i N: \n");
scanf("%d%d",&k,&n);

i =  k;
while(i<=n)
{
suma += (1.0/i);
i++;
}
printf("Suma recprocnih vrijednosti je: %f",suma);

return 0;
getchar();
}
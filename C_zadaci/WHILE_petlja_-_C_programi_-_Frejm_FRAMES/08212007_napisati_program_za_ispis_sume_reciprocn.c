/*
 * ZADATAK 08212007 - 08212007
 * Napisati program za ispis sume reciprocnih vrijednosti prvih n prirodnih brojeva (harmonijski niz:
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212007.htm
 */

#include <stdio.h>

main()

{
float suma;
int i,n;

printf("Unesite gornju granicu: ");
scanf("%d",&n);

i=1;
while(i<=n)
{
suma+=(1.0/i);
i++;
}
printf("Suma reciprocnih vrijednosti je: %f",suma);

return 0;
getchar();
}
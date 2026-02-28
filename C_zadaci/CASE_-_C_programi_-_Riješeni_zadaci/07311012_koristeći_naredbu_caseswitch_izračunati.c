/*
 * ZADATAK 31 - 07311012
 * Koristeći naredbu CASE/SWITCH izračunati recipročnu vrijednost učitanog broja.
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311012.htm
 */

#include <stdio.h>

main()

{
float a;
bool x;

printf("Unesite broj: ");
scanf("%d",&a);

if(a == 0) {x=false;}
else {x=true;}

switch(x)
{
case true: printf("Reciprocna vrijednost je: %f",1/a); break;
case false: printf("Djeljenje sa nulom nije moguce"); break;
}
return 0;
}
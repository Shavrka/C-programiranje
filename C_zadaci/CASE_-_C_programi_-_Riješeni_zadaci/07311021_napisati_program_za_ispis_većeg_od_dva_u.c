/*
 * ZADATAK 44 - 07311021
 * Napisati program za ispis većeg od dva učitana broja (koristiti naredbu CASE/SWITCH).
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311021.htm
 */

#include <stdio.h>

main()

{
bool c;
int a,b;

printf("Unesite A i B: \n");
scanf("%d%d",&a,&b);

if(a > b) {
c=true;}
else if(
a < b) {c=false;}

switch(c) {
case true: printf("Veci broj je: %d",a); break;
case false: printf("Veci broj je: %d",b); break;
}
return 0;
}
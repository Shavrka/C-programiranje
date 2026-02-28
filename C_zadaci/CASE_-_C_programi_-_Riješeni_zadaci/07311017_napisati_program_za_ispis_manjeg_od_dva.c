/*
 * ZADATAK 43 - 07311017
 * Napisati program za ispis manjeg od dva učitana broja (koristiti naredbu CASE/SWITCH).
 * Kategorija: CASE - C programi - Riješeni zadaci
 * Izvor: http://www.znanje.org/knjige/computer/c/v/073c/07311017.htm
 */

#include <stdio.h>
#include <stdbool.h>

int main() {
bool c;
int a,b;

printf("Unesite A i B: \n");
scanf("%d%d",&a,&b);

if(a > b) {c=true;}
else if(a < b) {c=false;}

switch(c) {
case true: printf("Manji broj je: %d",b); break;
case false: printf("Manji broj je: %d",a); break;
}
return 0;
}
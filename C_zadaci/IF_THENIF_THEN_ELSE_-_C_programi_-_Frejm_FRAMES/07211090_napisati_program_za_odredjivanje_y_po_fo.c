/*
 * ZADATAK 07211090 - 07211090
 * Napisati program za odredjivanje y po formuli:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211090.htm
 */

#include <stdio.h>

int main()
{
int x,y;

printf("Unesi x: ");
scanf("%d",&x);      // ulaz

if(x < -2)           // x < -2 ?
y=2*x;           // izracunaj
else if(x == -2)     // x == -2 ?
y=3*x+1;         // izracunaj
else                 // x > -2 ?
y=1-x;           // izracunaj

printf("Rezultat je: %d",y);  // ispis
return 0;
}
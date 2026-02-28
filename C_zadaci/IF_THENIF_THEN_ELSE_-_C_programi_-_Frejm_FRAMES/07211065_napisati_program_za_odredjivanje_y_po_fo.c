/*
 * ZADATAK 07211065 - 07211065
 * Napisati program za odredjivanje y po formuli:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211065.htm
 */

#include<stdio.h>

int main()
{
float x;                       // deklarisanje varjable
int y;                         // deklarisanje varjable

printf("Unesi x: ");
scanf("%d",&x);                // ulaz x

if( (x < -2 ) || (x > 2) )     // x je iz opsega ili x < -2 ili x > 2 ?
y=1;                       // da, izracunaj y
else                           // inace
y=0;                       // izracunaj

printf("Rezultat je: %f.",&y);
return 0;
}
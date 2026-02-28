/*
 * ZADATAK 07211005 - 07211005
 * Napisati program za odredjivanje apsolutne vrijednosti broja (koristiti IF ELSE naredbu).
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211005.htm
 */

#include <stdio.h>

int main ()
{
int broj,y;        // deklarisanje varijabli

printf("Broj: ");
scanf("%d", &broj);
if(broj >=0 )     // broj pozitivan ?
y = broj;     // broj pozitivan
else              // broj negativan
y =- broj;    // izracunaj
printf("Apsolutna Vrijednost broja je: %d \n", y);

return 0;
}
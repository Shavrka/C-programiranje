/*
 * ZADATAK 07211006 - 07211006
 * Napisati program za odredjivanje z po formuli:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211006.htm
 */

#include <stdio.h>

int main()
{
int x,z;              // deklarisanje varijabli

printf("Vas broj: ");
scanf("%d",&x);       // ulaz

if(x >= 0)            // ako je x vece ili jednako 0 ?
z = x + 3;        // x >= 0   ==>   z = x + 3
else                  // inace
z = x - 1;        // z = x - 1

printf("Vrijednost izraza je: %d",z);   // ispis

return 0;
}
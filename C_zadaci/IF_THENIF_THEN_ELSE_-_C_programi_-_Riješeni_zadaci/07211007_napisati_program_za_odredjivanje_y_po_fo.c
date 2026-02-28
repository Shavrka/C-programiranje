/*
 * ZADATAK 21 - 07211007
 * Napisati program za odredjivanje y po formuli:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211007.htm
 */

#include <stdio.h>

int main()
{
int x,y;             // deklarisanje varijabli
printf("Unesite broj x : ");
scanf("%d", &x);      // ulaz

if(x <=-2)            // x <= -2 ?
y = x + 2;        // izracunaj
else                  // -2 < x  lijeva granica (naredba else)?
if(x < 2)         // x < 2 (naredba if za desnu granicu)?
y = 2;        // izracunaj; za opseg2  -2 < x < 2
else              // x > 2
y = x - 2;    // izracunaj

printf("%d \n",y);    // ispis

return 0;
}

II varijanta
#include <stdio.h>

int main()
{
int x,y;
printf("Unesite broj x : ");
scanf("%d", &x);  // ulaz

if(x <=-2)        // x <= -2 ?
y = x + 2;    // izracunaj
else if(x < 2)    // -2 < x < 2 ?
y = 2;        // izracunaj
else
y = x - 2;    // izracunaj

printf("%d \n",y);   // ispis

return 0;
}
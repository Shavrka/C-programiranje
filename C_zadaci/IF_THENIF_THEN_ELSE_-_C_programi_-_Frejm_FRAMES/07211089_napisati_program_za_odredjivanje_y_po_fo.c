/*
 * ZADATAK 07211089 - 07211089
 * Napisati program za odredjivanje y po formuli:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211089.htm
 */

#include<stdio.h>

int main()
{
int x,y;
printf("Broj: ");
scanf("%d",&x);       // ulaz

if(x > 0)             // x > 0 ?
y = x + 3;        // izracunaj
else if(x == 0)       // x = 0 ?
y = 2;            // izracunaj
else                  // x < 0 ?
y = x - 3;        // izracunaj

printf("Rjesenje = %d",y);  // ispis
return 0;
}

II varijanta
#include<stdio.h>

int main()
{
int x,y;
printf("Broj: ");
scanf("%d",&x);     // ulaz

if(x > 0) {         // x > 0 ?
y=x+3;          // izracunaj
}
else if(x == 0) {   // x = 0 ?
y=2;            // izracunaj
}
else if(x < 0) {    // x < 0 ?
y=x-3;          // izracunaj
}
printf("Rjesenje = %d",y);  // ispis
return 0;
}
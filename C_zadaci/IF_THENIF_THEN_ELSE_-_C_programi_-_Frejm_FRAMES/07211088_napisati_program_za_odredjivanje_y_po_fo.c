/*
 * ZADATAK 07211088 - 07211088
 * Napisati program za odredjivanje y po formuli:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211088.htm
 */

#include<stdio.h>

int main()
{
int x,y;

printf("Broj: ");
scanf("%d",&x);      // ulaz

if( x > 0)           // x > 0 ?
y = 1;           // izracunaj
else if(x == 0)      // x = 0 ?
y = 0;           // izracunaj
else                 // x < 0 ?
y = -1;          // izracunaj

printf("Rjesenje = %d",y);  // ispis
return 0;
}

II varijanta
#include<stdio.h>

int main()
{
int x,y;

printf("Unesi X: ");
scanf("%d",&x);    // ulaz

if( x > 0)  {      // x > 0 ?
y=1;           // izracunaj
}
else if(x == 0) {  // x = 0 ?
y=0;           // izracunaj
}
else if(x < 0) {   // x < 0 ?
y = -1;
}
printf("Rjesenje je: %d",y);  // ispis
return 0;
}
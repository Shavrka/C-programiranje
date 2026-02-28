/*
 * ZADATAK 07211083 - 07211083
 * Učitati realan broj. Ako je negativan izračunati apsolutnu vrijednost. Realan broj zaokružiti na prvi manji cijeli broj.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211083.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
double a;
printf("Broj: ");
scanf("%lf", &a);

if(a < 0)	    // a negativan broj?
printf("abs(%lf) = %lf\n", a, fabs(a));   // apsolutna vrijednost broja
else
printf("Odbaci decimalne cifre broja = %lf \t trunc(a) = %lf\n", a, trunc(a));   // prvi manji cijeli broj
return 0;
}
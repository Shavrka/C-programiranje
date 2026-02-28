/*
 * ZADATAK 07211060 - 07211060
 * Učitati brojeve a1, a2, i a3. Ako je a1>=a2>=a3 brojevi se udvostručuju inače se svakom broju dodeljuje njegova apsolutna vrijednost.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211060.htm
 */

#include <stdio.h>
#include <math.h>

int main ()
{
double a1, a2, a3;
printf("1. broj: ");     // ulaz
scanf("%lf", &a1);
printf("2. broj: ");
scanf("%lf", &a2);
printf("3. broj: ");
scanf("%lf", &a3);

if((a1 >= a2) && (a2 >= a3))    // nerastuci redoslijed varijabli
{
a1=2*a1;
a2=2*a2;
a3=2*a3;
}
else	 	                // inace
{
a1=fabs(a1);
a2=fabs(a2);
a3=fabs(a3);
}

printf("a1= %lf \ta2= %lf \ta3= %lf", a1, a2, a3);

return 0;
}
/*
 * ZADATAK 72 - 07212003
 * Od tri broja naći recipročnu vrijednost najmanjeg a ako je min=0 ispisati 3.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07212003.htm
 */

#include <stdio.h>
int main()
{
double a, b, c, min, r;
printf("1. broj: ");     // ulaz
scanf("%lf", &a);
printf("2. broj: ");
scanf("%lf", &b);
printf("3. broj: ");
scanf("%lf", &c);

min=a;            // pretpostavka: prvi broj je najmanji
if(b < min)
min=b;        // b je manji od prva dva
if(c < min)
min=c;        // c najmanji

if(min==0)	      // najmanja vrijednost je nula?
printf("3");
else
{
r=1/min;
printf("Reciprocna vrijednost najmanjige = %lf ",  r);
}
return 0;
}
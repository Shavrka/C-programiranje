/*
 * ZADATAK 33 - 07212001
 * Napiši program za rješavanje slijedećeg izraza:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07212001.htm
 */

#include <stdio.h>
#include <math.h>
int main() {
printf("Izracunati izraz\n");
float x, y;

printf("Prvi broj: ");        // ulazne vrijednosti
scanf("%f", &x);

if ((x*x+3*x-10) >= 0) {       //  podkorjena velicina nenegativna?
y = 2*x+sqrt(x*x+3*x-10); //  >= 0
printf("v= %f\n", y);
}
else
printf("Nije definisano"); //  < 0

return 0;
}
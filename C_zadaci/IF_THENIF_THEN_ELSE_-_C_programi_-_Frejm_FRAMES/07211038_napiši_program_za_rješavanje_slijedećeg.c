/*
 * ZADATAK 07211038 - 07211038
 * Napiši program za rješavanje slijedećeg izraza:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211038.htm
 */

#include <stdio.h>
#include <math.h>
int main() {
printf("Izracunati izraz\n");
float x, y, z;
float v;

printf("Prvi broj: ");        // ulazne vrijednosti
scanf("%f", &x);
printf("Drugi broj: ");       // ulazne vrijednosti
scanf("%f", &y);
printf("Treci broj: ");       // ulazne vrijednosti
scanf("%f", &z);

if ((x-y+(z*z)) >= 0) {       // podkorjena velicina nenegativna?
v = sqrt(x-y+(z*z));     // >= 0
printf("v= %f\n", v);
}
else
printf("Nije definisano"); // < 0

return 0;
}
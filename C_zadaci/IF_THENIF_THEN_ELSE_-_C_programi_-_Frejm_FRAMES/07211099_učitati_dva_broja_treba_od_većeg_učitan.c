/*
 * ZADATAK 07211099 - 07211099
 * Učitati dva broja. Treba od većeg učitanog broja oduzeti manji i rezultat ispisati na ekran.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211099.htm
 */

#include <stdio.h>

int main()
{
int br1, br2;
printf("Ucitati 1. broj: ");
scanf("%d", &br1);
printf("Ucitati 2. broj: ");
scanf("%d", &br2);

if(br1 > br2)
printf("Prvi broj je veci razlika je= %d ", br1-br2);
else
if(br2 > br1)
printf("Drugi broj je veci, razlika je %d", br2 - br1);
else
printf("Brojavi su isti");

return 0;
}
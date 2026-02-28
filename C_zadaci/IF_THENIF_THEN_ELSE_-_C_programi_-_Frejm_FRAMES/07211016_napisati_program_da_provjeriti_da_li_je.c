/*
 * ZADATAK 07211016 - 07211016
 * Napisati program da provjeriti da li je upisani broj pozitivan, negativan ili nula i to ispiše.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211016.htm
 */

#include <stdio.h>

int main()
{
float a;

printf("Unesite vas broj:   \n");
scanf("%e", &a);

if(a > 0)
printf("Vas broj je pozitivan \n");
else if(a < 0)
printf("Vas broj je negativan \n");
else
printf("Vas broj je nula \n");

return 0;
}
/*
 * ZADATAK 07211026 - 07211026
 * Provjera vrijednosti za uslov x parno?
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211026.htm
 */

#include <stdio.h>

int main ()
{
int x, y;           // deklarisanje varijabli
printf("x parno\n");   // naslov
printf("Broj: ");   // ulaz
scanf("%d", &x);

if (x % 2 == 0)        // x parno?
{
x = x - 2;         // x parno
y = x - 2;
}
else                   // x nije parno
{
x = x + 2;
y = x + 2;
}
printf("x= %d\t y= %d", x, y);

return 0;
}
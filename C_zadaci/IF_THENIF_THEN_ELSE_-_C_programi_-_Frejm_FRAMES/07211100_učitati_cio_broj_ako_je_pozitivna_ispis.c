/*
 * ZADATAK 07211100 - 07211100
 * Učitati cio broj. Ako je pozitivna ispisati sljedeći cio broj, ako je nula ispisati 0, inače ispisati prethodnu vrijednost.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211100.htm
 */

#include <stdio.h>

int main()
{
int a;
printf("Ucitati cijeli broj: ");
scanf("%d", &a);

if(a > 0)
printf("Slijedeci cio broj = %d", a + 1);
else
if(a < 0)
printf("Prethodni broj = %d", a - 1);
else
printf("Ucitani broj je nula");

return 0;
}
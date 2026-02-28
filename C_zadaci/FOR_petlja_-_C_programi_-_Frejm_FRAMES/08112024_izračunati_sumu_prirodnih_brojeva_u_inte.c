/*
 * ZADATAK 08112024 - 08112024
 * Izračunati sumu prirodnih brojeva u intervalu od 1 do n koji nisu djeljivi sa 3.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112024.htm
 */

#include <stdio.h>

int main()
{
int i,n;
double s;

printf("Do broja: ");
scanf("%d",&n);

s=0;
for (i=1; i<=n; ++i)
{
if (i % 3 != 0)	{
s=s+i;
i++;
}
printf("Suma nedjeljivih sa 3 od 1 do n iznosi: %lf",as);

return 0;
}
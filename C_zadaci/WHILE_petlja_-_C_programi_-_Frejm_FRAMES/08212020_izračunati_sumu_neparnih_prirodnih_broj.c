/*
 * ZADATAK 08212020 - 08212020
 * Izračunati  sumu neparnih prirodnih brojeva u intervalu od k do n.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212020.htm
 */

#include <stdio.h>

int main ()
{
int i,k, n;
double s;

printf("Od broja: ");
scanf("%d", &k);          // ulaz k
printf("Do broja: ");
scanf("%d", &n);          // ulaz n

s=0;
i=1;
while(i<=n) {
if (i % 2 != 0)
s = s + i;
i++;
}
printf("Suma neparnih od 1 do n iznosi: %lf", s);

return 0;
}
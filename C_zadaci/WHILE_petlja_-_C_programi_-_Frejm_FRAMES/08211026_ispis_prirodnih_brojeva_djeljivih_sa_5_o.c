/*
 * ZADATAK 08211026 - 08211026
 * Ispis prirodnih brojeva djeljivih sa 5 od k do n.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08211026.htm
 */

#include <stdio.h>

int main ()
{
int k, n;
printf("Od broja: ");
scanf("%d", &k);
printf("Do broja: ");
scanf("%d", &n);
while (k<=n)
{
if(k%5==0)
{
printf("%d\n", k);
}
k++;
}
return 0;
}
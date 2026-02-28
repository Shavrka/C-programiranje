/*
 * ZADATAK 08211027 - 08211027
 * Ispis prirodnih brojeva djeljivih sa a od k do n.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08211027.htm
 */

#include <stdio.h>

int main ()
{
int k, n, a;
printf("Od broja: ");
scanf("%d", &k);
printf("Do broja: ");
scanf("%d", &n);
printf("Djelilac: ");
scanf("%d", &a);
while (k<=n)
{
if(k%a==0)
printf("%d\n", k);
k++;
}
return 0;
}
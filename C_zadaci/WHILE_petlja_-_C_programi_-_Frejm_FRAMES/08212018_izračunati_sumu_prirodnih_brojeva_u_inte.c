/*
 * ZADATAK 08212018 - 08212018
 * Izračunati sumu prirodnih brojeva u intervalu od k do n koji su deljivi sa a.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212018.htm
 */

#include <stdio.h>

int main ()
{
int i, n, a;
float suma;

printf("Unesite gornju granicu: ");
scanf("%d",&n);
printf("Unesite djelioca: ");
scanf("%d",&a);

i = 1;
while(i<=n) {
if(i % a == 0)
suma+=i;
i++;
}
printf("Suma je: %f",suma);

return 0;
}
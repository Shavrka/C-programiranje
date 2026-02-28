/*
 * ZADATAK 08212026 - 08212026
 * Izračunati sumu prirodnih brojeva u intervalu od 1 do n koji nisu djeljivi sa a.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212026.htm
 */

#include <stdio.h>

int main ()
{
float suma;
int i,n,a;

printf("Unesite gornju granicu: ");
scanf("%d",&n);
printf("Unesite djelioca: ");
scanf("%d",&a);

i=1;
while(i <= n) {
if(i % a != 0)
suma+=i;
i++;
}
printf("Suma je: %f",suma);

return 0;
}
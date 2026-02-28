/*
 * ZADATAK 08212019 - 08212019
 * Izračunati sumu prirodnih brojeva u intervalu od k do n koji su deljivi sa a.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212019.htm
 */

#include <stdio.h>

int main ()
{
int i, k, n, a;
float suma;

printf("Od broja: ");
scanf("%d", &k);          // ulaz k
printf("Do broja: ");
scanf("%d", &n);          // ulaz n

printf("Unesi djelioca: ");
scanf("%d",&a);           // ulaz a

i =  k;
while(i <= n) {
if(k % a == 0)
suma += i;
i++;
}
printf("Suma je: %f",suma);

return 0;
}
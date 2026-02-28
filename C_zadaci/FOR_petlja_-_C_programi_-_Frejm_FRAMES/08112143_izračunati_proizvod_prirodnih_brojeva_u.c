/*
 * ZADATAK 08112143 - 08112143
 * Izračunati proizvod prirodnih brojeva u intervalu od k do n koji nisu djeljivi sa a.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112143.htm
 */

#include <stdio.h>

int main ()
{
printf("Proizvod od k do n nisu djeljivi sa a\n"); // naslov
int i, k,  n, a, p=1;    // deklarisanje varjabli
printf("Od broja: ");
scanf("%d", &k);         // ulaz k
printf("Do broja: ");
scanf("%d", &n);          // ulaz n
printf("Unesi djelioca: ");
scanf("%d",&a);           // ulaz a

p=1;                      // pocetna vrijednost

for (i=k; i <= n; ++i)    // ponavljanje za i=k do i=n - pocetak petlje
if(i % a != 0)        // broj nije djeljiv sa a?
p = p * i;        // da, nije djeljiv, nova vrijednost proizvoda

printf("Proizvod = %d", p);
return 0;
}
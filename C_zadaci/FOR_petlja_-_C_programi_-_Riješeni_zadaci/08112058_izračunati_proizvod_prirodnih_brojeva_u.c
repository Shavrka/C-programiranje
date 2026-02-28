/*
 * ZADATAK 146 - 08112058
 * Izračunati proizvod prirodnih brojeva u intervalu od k do n koji su djeljivi sa a.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112058.htm
 */

#include <stdio.h>

int main ()
{
printf("Proizvod od k do n djeljivi sa a\n"); // naslov
int i, k, n, a;          // deklarisanje varjabli
float p;                 // deklarisanje varjabli
printf("Od broja: ");
scanf("%d", &k);         // ulaz k
printf("Do broja: ");
scanf("%d", &n);          // ulaz n
printf("Unesi djelioca: ");
scanf("%d",&a);           // ulaz a
p=1;                      // pocetna vrijednost

for (i=k; i <= n; ++i)    // ponavljanje za i=k do i=n - pocetak petlje
if(i % a == 0)        // provjera da li broj nije djeljiv sa a
p = p * i;        // nova vrijednost proizvoda  p *= i;

printf("Proizvod: %f", p);
return 0;
}
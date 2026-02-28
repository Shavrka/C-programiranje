/*
 * ZADATAK 82 - 08112026
 * Izračunati sumu prirodnih brojeva u intervalu od 1 do n koji nisu djeljivi sa a.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112026.htm
 */

#include <stdio.h>

int main ()
{
int i,n,a;                 // deklarisanje varjabli
float suma = 0;            // deklarisanje sume i pocetna vrijednost

printf("Do broja: ");
scanf("%d",&n);            // ulaz n

printf("Djelioca: ");
scanf("%d",&a);            // ulaz djelilac

for(i = 1; i < = n; i++)   // ponavljanje za i=1 do i=n - pocetak petlje
if(i % a != 0)         // nije djeljiv sa a?
suma += i;         // da, uvecaj sumu za vrijednosti i; s=s+i

printf("Suma je: %f",suma);  // ispis

return 0;
}
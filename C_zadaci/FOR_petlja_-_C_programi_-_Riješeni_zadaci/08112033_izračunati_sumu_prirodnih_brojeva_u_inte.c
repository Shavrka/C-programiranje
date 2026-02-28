/*
 * ZADATAK 94 - 08112033
 * Izračunati sumu prirodnih brojeva u intervalu od k do n koji nisu djeljivi sa a.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112033.htm
 */

#include <stdio.h>

int main ()
{
printf("Suma brojeve od k do n nisu djeljivi sa a\n"); // naslov
int i, k, n, a;          // deklarisanje varjabli
double s;                // deklarisanje varjabli

printf("Od broja: ");
scanf("%d", &k);          // ulaz k
printf("Do broja: ");
scanf("%d", &n);          // ulaz n

printf("Unesi djelioca: ");
scanf("%d",&a);           // ulaz a

s = 0;                    // pocetna vrijednost kumulativne sume

for (i=k; i<=n; ++i)
if(i % a != 0)        // i nije djeljivo sa a?
s = s + i;        // da - nije djeljivo sa a, uvecaj s za vrijednosti i; s=s+i
printf("Suma je: %f", s); // ispis

return 0;
}

II varijanta   s += i
// 08112033
//Izračunati sumu prirodnih brojeva u intervalu od k do n koji nisu djeljivi sa a.
#include <stdio.h>

int main ()
{
printf("Suma brojeve od k do n nisu djeljivi sa a\n"); // naslov
int i, k, n, a;          // deklarisanje varjabli
double s;                // deklarisanje varjabli

printf("Od broja: ");
scanf("%d", &k);          // ulaz k
printf("Do broja: ");
scanf("%d", &n);          // ulaz n

printf("Unesi djelioca: ");
scanf("%d",&a);           // ulaz a

s = 0;                    // pocetna vrijednost kumulativne sume

for (i=k; i<=n; ++i)      // ponavljanje za i=1 do i=n - pocetak petlje
if(i % a != 0)        // i nije djeljivo sa a?
s += i;           // da - nije djeljivo sa a, uvecaj s za vrijednosti i; s=s+i
printf("Suma je: %f", s); // ispis

return 0;
}
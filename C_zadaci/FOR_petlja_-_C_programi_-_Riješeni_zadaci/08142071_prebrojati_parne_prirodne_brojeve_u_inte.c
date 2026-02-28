/*
 * ZADATAK 176 - 08142071
 * Prebrojati parne prirodne brojeve u intervalu od k do n.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08142071.htm
 */

#include <stdio.h>
int main ()
{
printf("Prebroj prirodne brojeve od k do n - parni\n"); // naslov
int i, k, n, br;           // deklarisanje varijabli
printf("Od broja: ");
scanf("%d", &k);           // ulaz k
printf("Do broja: ");
scanf("%d", &n);           // ulaz n
br = 0;                    // pocetna vrijednost brojaca

for(i=k; i <= n; i++)      // ponavljanje za i=1 do i=n - pocetak petlje
if(i % 2 == 0)         // i parno?
br = br + 1;       // da - i parno, uvecaj brojac brojeva

printf("Prebrojanih ima = %d", br);; // ispis
return 0;
}

II varijanta  br += 1;
// 08142071
#include <stdio.h>
int main ()
{
printf("Prebroj prirodne brojeve od k do n - parni\n"); // naslov
int i, k, n, br;           // deklarisanje varijabli
printf("Od broja: ");
scanf("%d", &k);           // ulaz k
printf("Do broja: ");
scanf("%d", &n);           // ulaz n
br = 0;                    // pocetna vrijednost brojaca

for(i=k; i <= n; i++)      // ponavljanje za i=1 do i=n - pocetak petlje
if(i % 2 == 0)         // i parno?
br += 1;           // da - i parno, uvecaj brojac brojeva

printf("Prebrojanih ima = %d", br);; // ispis
return 0;
}
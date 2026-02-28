/*
 * ZADATAK 08111027 - 08111027
 * Ispis prirodnih brojeva od k do n koji su djeljivi sa a.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08111027.htm
 */

#include <stdio.h>

int main ()
{
int i, k, n, a;              // deklarisanje varijabli i, k, n, a
printf("Od broja: ");
scanf("%d", &k);             // ulaz k
printf("Do broja: ");
scanf("%d", &n);             // ulaz n
printf("Djelilac: ");
scanf("%d", &a);             // ulaz a

for (i = k; i <= n; ++i)     // ponavljanje za i=k do i=n - pocetak petlje
if(i % a == 0)           // provjera da li je broj djeljiv sa a
printf("%d\n", i);   // \n - novi red poslije svakog ispisa

return 0;
}

II varijanta  for(int i = k;
// 08111027
#include <stdio.h>

int main ()
{
int k, n, a;                 // deklarisanje varijabli i, k, n, a
printf("Od broja: ");
scanf("%d", &k);             // ulaz k
printf("Do broja: ");
scanf("%d", &n);             // ulaz n
printf("Djelilac: ");
scanf("%d", &a);             // ulaz a

for(int i = k; i <= n; ++i)  // deklarisanje varijable i; ponavljanje za i=k do i=n - pocetak petlje
if(i % a == 0)           // provjera da li je broj djeljiv sa a
printf("%d\n", i);   // \n - novi red poslije svakog ispisa

return 0;
}
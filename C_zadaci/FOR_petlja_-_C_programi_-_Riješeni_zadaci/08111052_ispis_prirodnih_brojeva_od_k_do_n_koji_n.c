/*
 * ZADATAK 48 - 08111052
 * Ispis prirodnih brojeva od k do n koji nisu djeljivi sa a.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08111052.htm
 */

#include <stdio.h>

int main ()
{
printf("Brojevi koji nisu djeljivi sa a\n");

int i, k, n, a;              // deklarisanje varjabli
printf("Od broja: ");
scanf("%d", &k);             // ulaz k
printf("Do broja: ");
scanf("%d", &n);             // ulaz n
printf("Unesi djelilac: ");
scanf("%d",&a);              // vrijednosti djelioca

for (i = k; i <= n; i++)     // ponavljanje za i=k do i=n - pocetak petlje
if(i % a != 0)           // broj nije djeljiv sa a?
printf("%d\n", i);   // da - nije djeljiv, \n - novi red poslije svakog ispisa
return 0;
}

II varijanta  for(int i = k;
// 08111052
#include <stdio.h>

int main ()
{
printf("Brojevi koji nisu djeljivi sa a\n");

int k, n, a;                 // deklarisanje varjabli
printf("Od broja: ");
scanf("%d", &k);             // ulaz k
printf("Do broja: ");
scanf("%d", &n);             // ulaz n
printf("Unesi djelilac: ");
scanf("%d",&a);              // vrijednosti djelioca

for(int i = k; i <= n; i++)  // deklarisanje varijable i; ponavljanje za i=k do i=n - pocetak petlje
if(i % a != 0)           // broj nije djeljiv sa a?
printf("%d\n", i);   // da - nije djeljiv, \n - novi red poslije svakog ispisa
return 0;
}
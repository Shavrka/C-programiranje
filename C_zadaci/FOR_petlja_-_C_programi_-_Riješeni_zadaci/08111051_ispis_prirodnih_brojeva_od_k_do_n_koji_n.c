/*
 * ZADATAK 45 - 08111051
 * Ispis prirodnih brojeva od k do n koji nisu djeljivi sa 5.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08111051.htm
 */

#include <stdio.h>

int main ()
{
printf("Ispis brojeva k-n - nisu djeljivi sa 5 \n"); // \n ima za posljedicu prelazak u novi red
int i, k, n;               // deklarisanje varjabli
printf("Od broja: ");
scanf("%d", &k);           // upis broja od kojeg se ispisuje
printf("Do broja: ");
scanf("%d", &n);           // upis broja do kojeg se ispisuje

for (i=k; i<=n; ++i)       // ponavljanje za i=k do i=n - pocetak petlje
if(i % 5 != 0)         // provjera da li broj nije djeljiv sa 5
printf("%d\n", i); // \n - novi red poslije svakog ispisa

return 0;
}
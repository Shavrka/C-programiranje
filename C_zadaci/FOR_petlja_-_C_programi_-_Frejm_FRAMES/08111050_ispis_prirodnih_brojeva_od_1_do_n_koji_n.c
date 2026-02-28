/*
 * ZADATAK 08111050 - 08111050
 * Ispis prirodnih brojeva od 1 do n koji nisu djeljivi sa a.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08111050.htm
 */

#include <stdio.h>
int main ()
{
int i, n, a;                // deklarisanje varjabli
printf("Do broja: ");
scanf("%d", &n);            // ulaz n
printf("Unesi djelioca: ");
scanf("%d",&a);             // ulaz a

for (i = 1; i <= n; i++)    // ponavljanje za i = 1 do i = n - pocetak petlje
if(i % a != 0)          // provjera djeljivosti sa a
printf("%d\n", i);  // ispis vrijednost i kad nije djeljivo sa a
return 0;
}

II varijanta   for(int i = 1;
// 08111050
#include <stdio.h>
int main ()
{
int n, a;                   // deklarisanje varjabli
printf("Do broja: ");
scanf("%d", &n);            // ulaz n
printf("Unesi djelioca: ");
scanf("%d",&a);             // ulaz a

for (int i = 1; i <= n; i++)  // deklarisanje varijable i; ponavljanje za i = 1 do i = n - pocetak petlje
if(i % a != 0)          // provjera djeljivosti sa a
printf("%d\n", i);  // ispis vrijednost i kad nije djeljivo sa a
return 0;
}
/*
 * ZADATAK 08111047 - 08111047
 * Ispisati neparne prirodne brojeve od 1 do n.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08111047.htm
 */

#include <stdio.h>

int main ()
{
int i, n;                        // deklarisanje varjabli
printf("Ispis od 1 do n neparnih\n"); // naslov
printf("Do broja: ");
scanf("%d",&n);                  // ulaz n

for(i = 1; i < =n; i++)                // ponavljanje za i=1 do i=n - pocetak petlje
if(i % 2 != 0)               // i neparno?
printf("i = %d\n", i);   // da, ispis vrijednosti i  \n ima za posljedicu prelazak u novi red
return 0;
}

II varijanta   for(int i = 1;
// 08111047
#include <stdio.h>

int main ()
{
int n;                           // deklarisanje varjabli
printf("Ispis od 1 do n neparnih\n"); // naslov
printf("Do broja: ");
scanf("%d",&n);                  // ulaz n

for(int i = 1; i < =n; i++)      // deklarisanje varijable i; ponavljanje za i=1 do i=n - pocetak petlje
if(i % 2 != 0)               // i neparno?
printf("i = %d\n", i);   // da, ispis vrijednosti i  \n ima za posljedicu prelazak u novi red
return 0;
}
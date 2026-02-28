/*
 * ZADATAK 08111042 - 08111042
 * Ispisati neparne prirodne brojeve od 1 do 5.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08111042.htm
 */

#include <stdio.h>

int main()
{
int i;                            // deklarisanje varijable i
printf("Neparni od 1 do 5 \n");   // naslov   \n - prelazak u novi red
for(i = 1; i <= 5; i++)           // ponavljanje za i=1 do i=5 - pocetak petlje
if(i % 2 != 0)                // i neparno (broj nije djeljiv sa 2)?
printf("%d\n",i);         // i neparno: ispis vrijednosti i

return 0;
}

II varijanta   int i;
// 08111042
// Ispis neparnih prirodnih brojeva od 1 do 5
#include <stdio.h>

int main()
{
printf("Neparni od 1 do 5 \n");   // naslov   \n - prelazak u novi red
for(int i = 1; i <= 5; i++)       // deklarisanje varijable i; ponavljanje za i=1 do i=5 - pocetak petlje
if(i % 2 == 1)                // i neparno (broj nije djeljiv sa 2)?
printf("%d\n",i);         // i neparno: ispis vrijednosti i

return 0;
}

III varijanta     i = i + 2
// 08111042
// Ispis neparnih prirodnih brojeva od 1 do 5
#include <stdio.h>

int main()
{
int i;                            // deklarisanje varijable i
printf("Neparni od 1 do 5 \n");   // naslov   \n - prelazak u novi red
for(i = 1; i <= 5; i = i + 2)     // ponavljanje za i=1 do i=5; sa koramom +2 - pocetak petlje
printf("%d\n",i);             // i neparno: ispis vrijednosti i

return 0;
}
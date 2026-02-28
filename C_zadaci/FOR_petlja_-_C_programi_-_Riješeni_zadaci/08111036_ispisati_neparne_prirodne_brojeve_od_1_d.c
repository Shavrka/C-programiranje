/*
 * ZADATAK 15 - 08111036
 * Ispisati neparne prirodne brojeve od 1 do 17.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08111036.htm
 */

#include <stdio.h>

int main ()
{
int i;                          // deklarisanje varijable i
printf("Neparni od 1 do 17\n"); // naslov   \n - prelazak u novi red
for(i = 1;  i <= 17; ++i)       // ponavljanje za i=1 do i=17 - pocetak petlje
if(i % 2 != 0)              // i neparno (nije djeljivo sa 2)? - provjera da li je broj neparana (nije djeljiv sa 2)
printf("%d ", i);       // neparno i (nije djeljivo sa 2): ispis neparnog broja
return 0;
}

II varijanta
// 08111036
#include <stdio.h>

int main ()
{
int i;                          // deklarisanje varijable i
printf("Neparni od 1 do 17\n"); // naslov   \n - prelazak u novi red
for(i=1; i <= 17; i = i + 2)    // ponavljanje za i=1 do i=17; sa koramom +2 - pocetak petlje
printf("%d ", i);           // neparno i (nije djeljivo sa 2): ispis neparnog broja
return 0;
}

III varijanta
#include <stdio.h>

int main ()
{
int i;                          // deklarisanje varijable i
printf("Neparni od 1 do 17\n"); // naslov   \n - prelazak u novi red
for(i = 1;  i <= 17; ++i)       // ponavljanje za i=1 do i=17 - pocetak petlje
if(i % 2 == 1)              // i neparno (nije djeljivo sa 2)? - provjera da li je broj neparana (nije djeljiv sa 2)
printf("%d ", i);       // neparno i (nije djeljivo sa 2): ispis neparnog broja
return 0;
}
/*
 * ZADATAK 40 - 09351018
 * Suma brojeva od 1 do n.
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09351018.htm
 */

#include <stdio.h>

long suman(int n)             //  definisanje funkcije suman: suma do n
{
long suma = 0;             // pocetna vrijednost sume
for (int i = 1; i <= n; i++) // ponavljanje za i=1 do i=n - pocetak petlje
suma = suma + i;       // uvecaj sumu za i
return suma;
}

int main ()
{
printf("Suma prvih n prirodan brojeva\n");
int n;                      // deklarisanje varijabli
printf("Do broja : ");      // naziv varijable
scanf("%d",&n);        // do broja n

printf("Suma prvih %d prirodnih brojeva = %ld", n, suman(n));   // poziv funkcije i ispis vrijednosti
return 0;
}

II varijanta poziv funkcije iz naredbe pridruzivanja
// 09351018
#include <stdio.h>

long suman(int n)             //  definisanje funkcije suman: suma do n
{
long suma = 0;             // pocetna vrijednost sume
for (int i = 1; i <= n; i++) // ponavljanje za i=1 do i=n - pocetak petlje
suma = suma + i;       // uvecaj sumu za i
return suma;
}

int main ()
{
printf("Suma prvih n prirodan brojeva\n");
int n;                     // deklarisanje varijabli
long s;
printf("Do broja : ");      // naziv varijable
scanf("%d",&n);        // do broja n

s = suman(n);             // poziv funkcije

printf("Suma prvih %d prirodnih brojeva = %ld", n, suman(n));   // poziv funkcije i ispis vrijednosti
return 0;
}
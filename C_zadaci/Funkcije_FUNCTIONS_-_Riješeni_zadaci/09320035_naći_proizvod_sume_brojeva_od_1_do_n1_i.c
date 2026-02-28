/*
 * ZADATAK 40_1 - 09320035
 * Naći proizvod sume brojeva od 1 do n1 i sume brojeva od 1 do n2.
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09320035.htm
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
printf("Proizvod sume brojeva od 1 do n1 i sume brojeva od 1 do n2.\n");
int n1, n2;                 // deklarisanje varijabli
long s;
printf("1. broj : ");      // naziv varijable
scanf("%d",&n1);           // do broja n1
printf("2. broj : ");      // naziv varijable
scanf("%d",&n2);           // do broja n2

printf("Proizvod sume prirodnih brojeva od 1 do %d i sume prirodnih brojeva od 1 do  %d  = ", n1, n2);
printf("%ld", suman(n1) * suman(n2));   // poziv funkcije suman za n1 i n2 i racuna proizvod i ispis vrijednosti
return 0;
}

II varijanta poziv funkcije iz naredbe pridruzivanja
// 09320035
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
printf("Proizvod sume brojeva od 1 do n1 i sume brojeva od 1 do n2.\n");
int n1, n2;                // deklarisanje varijabli
long p;                    // proizvod suma
printf("1. broj : ");      // naziv varijable
scanf("%d",&n1);           // do broja n1
printf("2. broj : ");      // naziv varijable
scanf("%d",&n2);           // do broja n2

p = suman(n1) * suman(n2); // poziv funkcije

printf("Proizvod sume prirodnih brojeva od 1 do %d i sume prirodnih brojeva od 1 do  %d  = ", n1, n2);
printf("%ld", suman(n1) * suman(n2));   // poziv funkcije suman za n1 i n2 i racuna proizvod i ispis vrijednosti
return 0;
}
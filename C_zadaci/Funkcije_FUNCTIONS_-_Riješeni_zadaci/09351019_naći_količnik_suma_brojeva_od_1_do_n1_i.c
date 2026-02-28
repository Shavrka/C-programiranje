/*
 * ZADATAK 41 - 09351019
 * Naći količnik suma brojeva od 1 do n1 i sume brojeva od 1 do n2.
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09351019.htm
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
printf("Kolicnik sume brojeva od 1 do n1 i sume brojeva od 1 do n2.\n");
int n1, n2;                 // deklarisanje varijabli
printf("1. broj : ");      // naziv varijable
scanf("%d",&n1);           // do broja n1
printf("2. broj : ");      // naziv varijable
scanf("%d",&n2);           // do broja n2

printf("Kolicnik sume prirodnih brojeva od 1 do %d i sume prirodnih brojeva od 1 do  %d  = ", n1, n2);
printf("%.2f", (float)suman(n1) / suman(n2));   // poziv funkcije suman za n1 i n2 i racuna kolicnik i ispis vrijednosti
return 0;
}

II varijanta poziv funkcije iz naredbe pridruzivanja
// 09351019
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
printf("Kolicnik sume brojeva od 1 do n1 i sume brojeva od 1 do n2.\n");
int n1, n2;                 // deklarisanje varijabli
float k;
printf("1. broj : ");      // naziv varijable
scanf("%d",&n1);           // do broja n1
printf("2. broj : ");      // naziv varijable
scanf("%d",&n2);           // do broja n2

k = (float)suman(n1) / suman(n2); // poziv funkcije

printf("Kolicnik sume prirodnih brojeva od 1 do %d i sume prirodnih brojeva od 1 do  %d  = ", n1, n2);
printf("%.2f", k);   // ispis vrijednosti
return 0;
}
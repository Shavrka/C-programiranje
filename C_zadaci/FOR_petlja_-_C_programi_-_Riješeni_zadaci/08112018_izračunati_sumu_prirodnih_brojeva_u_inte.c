/*
 * ZADATAK 80 - 08112018
 * Izračunati sumu prirodnih brojeva u intervalu od 1 do n koji su djeljivi sa a.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112018.htm
 */

#include <stdio.h>
int main()
{
int i,n,a;                 // deklarisanje varjabli
float suma;                // deklarisanje varjabli

printf("Do broja: ");
scanf("%d", &n);            // ulaz n
printf("Unesi djelilac: ");
scanf("%d",&a);             // vrijednosti djelioca

suma = 0;                   // pocetna vrijednost
for(i=1; i <= n; i++)       // ponavljanje za i=1 do i=n - pocetak petlje
if(i % a == 0)         // broj djeljiv sa a?
suma = suma + i;    // uvecaj s za vrijednosti i; s=s+i
printf("Suma je: %f",suma);// ispis

return 0;
}

II verijanta suma+=i;
// 08112018
#include <stdio.h>
int main()
{
int i,n,a;                 // deklarisanje varjabli
float suma;                // deklarisanje varjabli

printf("Do broja: ");
scanf("%d", &n);            // ulaz n
printf("Unesi djelilac: ");
scanf("%d",&a);             // vrijednosti djelioca

for(i=1; i <= n; i++)       // ponavljanje za i=1 do i=n - pocetak petlje
if(i % a == 0)         // broj djeljiv sa a?
suma+=i;            // uvecaj s za vrijednosti i; s=s+i
printf("Suma je: %f",suma);// ispis

return 0;
}
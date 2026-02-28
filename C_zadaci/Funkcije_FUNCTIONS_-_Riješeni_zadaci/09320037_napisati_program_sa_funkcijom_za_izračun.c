/*
 * ZADATAK 42 - 09320037
 * Napisati program sa funkcijom za izračunavanje proizvoda neparnih brojeva od 1 do n.
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09320037.htm
 */

#include <stdio.h>
// funkcija, k! - faktorijel broja

long fact(int k) {   // definisanje funkcije faktorijela
int i;             // deklarisanje varijabli
long p;
p = 1;             // pocetna vrijednost
for (i= 1; i <= k; i++)    // za 1 do k radi
if(i % 2 != 0)          // neparni?
p = p * i;           // mnozi proizvod sa novom vrijednosti i
return p;
}

int main ()
{
printf("Faktorijel neparnih brojeva do n\n");
int n;                     // deklarisanje varijable
long s;
printf("Do broja: ");      // naziv varijable
scanf("%d",&n);            // do broja n

printf("Proizvod neparnih brojeva od 1 do %d = %ld", n, fact(n));
return 0;
}

II varijanta poziv funkcije iz naredbe pridruzivanja
// 09320037
#include <stdio.h>
// funkcija, k! - faktorijel broja

long fact(int k) {   // definisanje funkcije faktorijela
int i;             // deklarisanje varijabli
long p;
p = 1;             // pocetna vrijednost
for (i= 1; i <= k; i++)    // za 1 do k radi
if(i % 2 != 0)          // neparni?
p = p * i;           // mnozi proizvod sa novom vrijednosti i
return p;
}

int main ()
{
printf("Faktorijel neparnih brojeva do n\n");
int n;                     // deklarisanje varijable
long p;
printf("Do broja: ");      // naziv varijable
scanf("%d",&n);            // do broja n

p = fact(n);               // poziv funkcije

printf("Proizvod neparnih brojeva od 1 do %d = %ld", n, p);
return 0;
}
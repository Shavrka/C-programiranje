/*
 * ZADATAK 41_2 - 09311016
 * Naći proizvod prvih n prirodnih brojeva, odnosno izračunati faktorijel broja n korišćenjem funkcije.
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09311016.htm
 */

#include <stdio.h>
// funkcija, k! - faktorijel broja

long fact(int k) {   // definisanje funkcije faktorijela
int i;             // deklarisanje varijabli
long p;
p = 1;             // pocetna vrijednost
for (i= 1; i <= k; i++)    // za 1 do k radi
p = p * i;              // mnozi proizvod sa novom vrijednosti i
return p;
}

int main ()
{
printf("Faktorijel broja\n");
int n;                     // deklarisanje varijable
long s;
printf("Do broj : ");      // naziv varijable
scanf("%d",&n);            // do broja n

printf("Proizvod od 1 do %d = %ld", n, fact(n));
return 0;
}

II varijanta poziv funkcije iz naredbe pridruzivanja
// 09311016
#include <stdio.h>
// funkcija, k! - faktorijel broja

long fact(int k) {   // definisanje funkcije faktorijela
int i;             // deklarisanje varijabli
long p;
p = 1;             // pocetna vrijednost
for (i= 1; i <= k; i++)    // za 1 do k radi
p = p * i;              // mnozi proizvod sa novom vrijednosti i
return p;
}

int main ()
{
printf("Faktorijel broja\n");
int n;                     // deklarisanje varijable
long p;
printf("Do broj : ");      // naziv varijable
scanf("%d",&n);            // do broja n

p = fact(n);               // poziv funkcije

printf("Proizvod od 1 do %d = %ld", n, p);
return 0;
}
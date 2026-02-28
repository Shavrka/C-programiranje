/*
 * ZADATAK 21 - 09311026
 * Napisati program sa funkcijom za odredjivanje većeg od 2 broja.
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09311026.htm
 */

#include <stdio.h>
int max(int a, int b) {   // definisanje funkcije max - veci od dva
int max;
if (a > b)             // ako je prvi veci?
max = a;            // izlazna vrijednost funkcije - veci od dva broja
else                   // drugi veci
max = b;            // izlazna vrijednost funkcije - veci od dva broja
return max;
}

int main ()
{
printf("Veci od 2\n");
int a, b;                 // deklarisanje varijable
printf("Prvi broj: ");    // ulazne vrijednosti
scanf("%d",&a);           // prvi broj
printf("Drugi broj: ");
scanf("%d",&b);           // drugi broj

printf("Veci od %d i %d je %d ", a, b, max(a, b)); // ispis vrijednosti ulaznih i izlaznih varijabli

return 0;
}

II varijanta
// 09311026
#include <stdio.h>
int max(int a, int b) {   // definisanje funkcije max - veci od dva
if (a > b)             // ako je prvi veci?
return a;           // izlazna vrijednost funkcije - veci od dva broja
else                   // drugi veci
return b;           // izlazna vrijednost funkcije - veci od dva broja
}

int main ()
{
printf("Veci od 2\n");
int a, b;                 // deklarisanje varijable

printf("Prvi broj: ");    // ulazne vrijednosti
scanf("%d",&a);           // prvi broj
printf("Drugi broj: ");
scanf("%d",&b);           // drugi broj

printf("Veci od %d i %d je %d ", a, b, max(a, b)); // ispis vrijednosti ulaznih i izlaznih varijabli

return 0;
}
/*
 * ZADATAK 31 - 09311002
 * Napisati program za odredjivanje najvećeg među 4 broja, korišćenjem funkcije nalaženja većeg od 2 broja.
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09311002.htm
 */

int main ()
{
printf("Najveci od 4\n");
int a, b, c, d;           // deklarisanje varijable

printf("Prvi broj: ");    // ulazne vrijednosti
scanf("%d",&a);           // prvi broj
printf("Drugi broj: ");
scanf("%d",&b);           // drugi broj
printf("Treci broj: ");
scanf("%d",&c);           // prvi broj
printf("Cetvrti broj: ");
scanf("%d",&d);           // drugi broj

printf("najveci od %d, %d, %d, %d je %d ", a, b, c, d, max(max(a, b), max(c, d))); // ispis vrijednosti ulaznih i izlaznih varijabli

return 0;
}

II varijanta
// 09311002
#include <stdio.h>
int max(int a, int b) {   // definisanje funkcije max - veci od dva
if (a > b)             // ako je prvi veci?
return a;           // izlazna vrijednost funkcije - veci od dva broja
else                   // drugi veci
return b;           // izlazna vrijednost funkcije - veci od dva broja
}

int max4(int a, int b, int c, int d) {   // definisanje funkcije max4 - najveci od cetiri
return max(max(a, b), max(c, d));      // izlazna vrijednost funkcije - veci od dva broja
}

int main ()
{
printf("Najveci od 4\n");
int a, b, c, d;           // deklarisanje varijable

printf("Prvi broj: ");    // ulazne vrijednosti
scanf("%d",&a);           // prvi broj
printf("Drugi broj: ");
scanf("%d",&b);           // drugi broj
printf("Treci broj: ");
scanf("%d",&c);           // prvi broj
printf("Cetvrti broj: ");
scanf("%d",&d);           // drugi broj

printf("najveci od %d, %d, %d, %d je %d ", a, b, c, d, max4(a, b, c, d)); // ispis vrijednosti ulaznih i izlaznih varijabli

return 0;
}
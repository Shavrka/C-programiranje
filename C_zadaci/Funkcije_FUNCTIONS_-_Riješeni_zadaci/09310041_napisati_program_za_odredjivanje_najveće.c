/*
 * ZADATAK 27 - 09310041
 * Napisati program za odredjivanje najvećeg od 3 broja, korišćenjem funkcije nalaženja većeg od 2 broja.
 * Kategorija: Funkcije /FUNCTIONS/ - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/093c/09310041.htm
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
printf("Najveci od 3\n");
int a, b, c, naj;         // deklarisanje varijabli
printf("Prvi broj: ");    // ulazne vrijednosti
scanf("%d",&a);           // prvi broj
printf("Drugi broj: ");
scanf("%d",&b);           // drugi broj
printf("Treci broj: ");
scanf("%d",&c);           // treci broj

printf("Od brojeva: %d, %d i %d", a, b, c); // ispis vrijednosti ulaznih varijabli
printf("\nNajveci =  %d ", max(max(a, b), c)); // ispis vrijednosti izlazne varijable

return 0;
}

II varijanta  dvije naredbe return (dvije mogucnosti izlaza iz potprograma), poziv iz naredbe pridruzivanja
// 09310041
#include <stdio.h>
int max(int a, int b) {   // definisanje funkcije max - veci od dva
if (a > b)             // ako je prvi veci?
return a;           // izlazna vrijednost funkcije - veci od dva broja
else                   // drugi veci
return b;           // izlazna vrijednost funkcije - veci od dva broja
}

int main ()
{
printf("Najveci od 3\n");
int a, b, c, naj;         // deklarisanje varijabli
printf("Prvi broj: ");    // ulazne vrijednosti
scanf("%d",&a);           // prvi broj
printf("Drugi broj: ");
scanf("%d",&b);           // drugi broj
printf("Treci broj: ");
scanf("%d",&c);           // treci broj

naj = max(max(a, b), c);      // najveci od 3 dva broja

printf("Od brojeva: %d, %d i %d", a, b, c); // ispis vrijednosti ulaznih varijabli
printf("\nNajveci =  %d ", naj); // ispis vrijednosti izlazne varijable

return 0;
}
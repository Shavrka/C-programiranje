/*
 * ZADATAK 08112065 - 08112065
 * Izračunati proizvod parnih prirodnih brojeva u intervalu od k do n.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112065.htm
 */

#include <stdio.h>
int main ()
{
int i, k, n, p;         // deklarisanje varijabli
printf("Od broja: ");
scanf("%d", &k);        // upis broja od kojeg se ispisuje
printf("Do broja: ");
scanf("%d", &n);        // upis broja do kojeg se ispisuje

p=1;                    // pocetna vrijednost proizvoda

for(i=k; i <= n; ++i)   // ponavljanje za i=k do i=n
if(i % 2 == 0)      // ako je i djeljiv sa 2-parno izvedi
p=p*i;          // p=p*i;

printf("Proizvod: %d", p); // ispis
return 0;
}

II varijanta  int i = k; p *= i;
// 08112065  Izračunati proizvod parnih prirodnih brojeva u intervalu od k do n.
#include <stdio.h>
int main ()
{
int k, n, p;            // deklarisanje varijabli
printf("Od broja: ");
scanf("%d", &k);        // upis broja od kojeg se ispisuje
printf("Do broja: ");
scanf("%d", &n);        // upis broja do kojeg se ispisuje

p=1;                    // pocetna vrijednost proizvoda

for(int i = k; i <= n; ++i) // ponavljanje za i=k do i=n
if(i % 2 == 0)      // ako je i djeljiv sa 2-parno izvedi
p *= i;         // p=p*i;

printf("Proizvod: %d", p); // ispis
return 0;
}
/*
 * ZADATAK 09411123 - 09411123
 * Napisati rekurzivnu funkciju koja ostavlja parne cifre (izbacuje sve neparne cifre) datog cijelog broja n. Test primjer:1234567246.
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411123.htm
 */

#include <stdio.h>

int samo_parni(int n) {
int cifra;
if(n == 0) {            // cio dio dijeljenja broja sa 10 = 0 ?
return;               // kraj dijeljenja - rekurzije
}

// provjera parnosti; izdvoji cifru i formiraj novi broj
if(n % 2 == 0) {        // parna cifra?
return n % 10 + 10 * samo_parni(n / 10);  // parna cifra
} else  {
return samo_parni(n / 10);  // same parne cifre
}
}

int main()
{
printf("Samo parne cifre broja - Rekurzija\n");
int n, p;

printf("Broj: ");      // ulazne vrijednosti
scanf("%d",&n);

printf("Dati broj:  %d \n", n);            // dati broj
printf("Samo parni: %d", samo_parni(n));   // Samo parne cifre broja

return 0;
}

Ispis na ekranu:
Samo parne cifre broja - Rekurzija
Broj: 1234567
Dati broj:  1234567
Samo parni: 246
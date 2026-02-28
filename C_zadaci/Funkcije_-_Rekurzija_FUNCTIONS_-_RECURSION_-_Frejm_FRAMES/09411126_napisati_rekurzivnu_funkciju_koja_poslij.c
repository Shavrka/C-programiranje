/*
 * ZADATAK 09411126 - 09411126
 * Napisati rekurzivnu funkciju koja poslije svake neparne cifre datog broja dodaje 0.
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411126.htm
 */

#include <stdio.h>

int dodaj_nulu(int n) {
int cifra;
if(n == 0) {            // cio dio dijeljenja broja sa 10 = 0 ?
return;               // kraj dijeljenja - rekurzije
}

// provjera parnosti; izdvoji cifru i formiraj novi broj
if(n % 2 != 0) {        // neparna cifra?
return 10 *(n % 10) + 100 * dodaj_nulu(n / 10);  // same neparne cifre
} else  {
return n % 10 + 10 * dodaj_nulu(n / 10);  // neparna cifra        }
}
}

int main ()
{
printf("Iza neparne cifre dodaj 0 - Rekurzija\n");
int n, p;

printf("Broj: ");      // ulazne vrijednosti
scanf("%d",&n);

printf("Dati broj:     %d \n", n);           // dati broj
printf("Iza neparne 0: %d", dodaj_nulu(n));  // Samo neparne cifre broja

return 0;
}

Ispis na ekranu:
Iza neparne cifre dodaj 0 - Rekurzija
Broj: 12345
Dati broj:     12345
Iza neparne 0: 10230450
/*
 * ZADATAK 09411124 - 09411124
 * Napisati rekurzivnu funkciju koja ostavlja neparne cifre (izbacuje sve parne cifre) datog cijelog broja n. Test primjer:12345671357
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411124.htm
 */

#include <stdio.h>

// 09411024

int samo_neparni(int n) {
int cifra;
if(n == 0) {            // cio dio dijeljenja broja sa 10 = 0 ?
return;               // kraj dijeljenja - rekurzije
}

// provjera parnosti; izdvoji cifru i formiraj novi broj
if(n % 2 != 0) {        // neparna cifra?
return n % 10 + 10 * samo_neparni(n / 10);  // same neparne cifre
} else  {
return samo_neparni(n / 10);  // neparna cifra        }
}
}

int main()
{
printf("Samo neparne cifre broja - Rekurzija\n");
int n, p;

printf("Broj: ");      // ulazne vrijednosti
scanf("%d",&n);

printf("Dati broj:  %d \n", n);               // dati broj
printf("Samo neparni: %d", samo_neparni(n));  // Samo neparne cifre broja

return 0;
}

Ispis na ekranu:
Samo neparne cifre broja - Rekurzija
Broj: 1234567
Dati broj:  1234567
Samo neparni: 1357
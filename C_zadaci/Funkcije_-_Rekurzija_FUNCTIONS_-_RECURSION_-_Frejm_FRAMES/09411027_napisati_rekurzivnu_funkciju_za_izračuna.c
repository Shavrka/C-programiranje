/*
 * ZADATAK 09411027 - 09411027
 * Napisati rekurzivnu funkciju za izračunavanje sume parnih u intervalu od k do n.
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09411027.htm
 */

#include <stdio.h>

int suma_paran(int k, int n) {
if(n < k)       // ponavljanje dok je n vece od donje granice k?
return 0;    // kraj rekurzije
else
return n + suma_paran(k, n - 2);  // formira sumu i poziv iste funkcije sa sljedeci paran broj1
}

int main () {
printf("Suma parnih prirodnih brojeva od k do n. Rekurzija\n");
int broj_k, broj_n, s;

printf("Od broja: ");      // ulazne vrijednosti
scanf("%d",&broj_k);
printf("Do broja: ");      // ulazne vrijednosti
scanf("%d",&broj_n);
if(broj_n % 2 != 0) broj_n--;         // ako je n neparno uzmi prethodnika?

s = suma_paran(broj_k, broj_n);      // poziv funkcije suma za parne brojeve

printf("Suma parnih brojeva od %d do %d je %d", broj_k, broj_n, s);     // ispis vrijednosti ulaznih i izlaznih varijabli
return 0;
}

II verzija
// 09411027_v2
#include <stdio.h>

int suma_paran(int k, int n) {
if(k > n)           // ponavljanje do izlaska iz granica dok je k <= n?
return 0;          // kraj rekurzije

if(k % 2 == 0)       // k parno?
return k + suma_paran(k + 1, n);  // povratne vrijednost i poziv iste funkcije sa uvecanim k za 1
else
return suma_paran(k + 1, n);     // poziv iste funkcije sa uvecanim k za 1 bez uticaja na sumu
}

int main () {
printf("Suma parnih prirodnih brojeva od k do n. Rekurzija\n");
int broj_k, broj_n, s;

printf("Od broja: ");      // ulazne vrijednosti
scanf("%d",&broj_k);
printf("Do broja: ");      // ulazne vrijednosti
scanf("%d",&broj_n);

s = suma_paran(broj_k, broj_n);      // poziv funkcije suma

printf("Suma parnih brojeva od %d do %d je %d", broj_k, broj_n, s);     // ispis vrijednosti ulaznih i izlaznih varijabli
return 0;
}

III verzija
// 09411027_v3
#include <stdio.h>

int suma_paran(int k, int n) {
if(n < k)     // ponavljanje dok je n vece od donje granice k?
return 0;    // kraj rekurzije

if(n % 2 == 0)       // k parno?
return n + suma_paran(k, n - 1);  // formira sumu i poziv iste funkcije sa umanjemnim n za 1
else
return suma_paran(k, n - 1);      // poziv iste funkcije sa umanjemnim n za 1
}

int main () {
printf("k prirodnih brojeva od k do n. Rekurzija\n");
int k, n, s;

printf("Od broja: ");      // ulazne vrijednosti
scanf("%d",&k);
printf("Do broja: ");      // ulazne vrijednosti
scanf("%d",&n);

s = suma_paran(k, n);      // poziv funkcije suma

printf("k brojeva od %d do %d je %d", k, n, s); // ispis vrijednosti ulaznih i izlaznih varijabli
return 0;
}

Ispis na ekranu:
Suma parnih prirodnih brojeva od k do n. Rekurzija
Od broja: 2
Do broja: 11
Suma parnih brojeva od 2 do 11 je 30
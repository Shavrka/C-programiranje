/*
 * ZADATAK 09412018 - 09412018
 * Napisati rekurzivnu funkciju koja formira niz po izrazu M(i+1) = M(i) + maxCifra(M(i)) * minCifra(M(i)), gdje je i u intervalu od 0 do n. Sa tastature učitati n i vrijednost prvog člana niza (prirodni brojevi). Primjer: k = 12, n = 3,M(i+1) = M(i) + maxCifra(M(i)) * minCifra(M(i))M(0)= k = 12M(1)= 12 + 2 * 1 = 14M(2)= 14 + 4 * 1 = 18M(3)= 18 + 8 * 1 = 26
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09412018.htm
 */

#include <stdio.h>

int veca_cifra(int x, int y) { // f. nadji vecu cifru
if (x > y) return x;       // prva cifra veca? vrati prvu cifru kao vecu
else return y;             // vrati drugu cifru kao vecu
}

int najveca_cifra(int n) {   // f. izdvoji cifru; poredi sa prethodnom cifrom; vrati vecu
if (n < 10) return n;    // posljednja cifra datog broja
else  return veca_cifra(najveca_cifra(n/10), n%10); // vraca veće vrijednosti između cifre i tekucag maksimuma ako novog tekućeg maksimuma
}

int manja_cifra(int x, int y) { // f. nadji manju cifru
if (x < y) return x;    // prva cifra manja? vrati prvu cifru kao manju
else return y;          // vrati drugu cifru kao manju
}

int najmanja_cifra(int n) { // izdvoji cifru; poredi sa prethodnom cifrom; vrati manju
if(n < 10) return n;    // posljednja cifra datog broja
else  return manja_cifra(najmanja_cifra(n/10), n%10); // vraca veće vrijednosti između cifre i tekucag maksimuma ako novog tekućeg maksimuma
}

int clan_niza(int k, int n) { // f. nadji vecu cifru
int prethodni, min, max, clan;
if (k == 0) return n;     // prvi clan niza
prethodni = clan_niza(k - 1, n); // prethodni clan
max = najveca_cifra(prethodni);    // najveca cifra
min = najmanja_cifra(prethodni);
clan = prethodni + max * min;  // najmanja cifra
printf("Indeks niza: %d\t clan = %d = %d + %d * %d\n", k-1, clan, prethodni, max, min );   // ispis najvece cifre - maksimum
return clan;
}

int main () {
printf("Formirati niz - prethodni uvecaj za proizvod min i max cifre - Rekurzija\n");
int broj_n, broj_k;

printf("Nulti clan niza: ");       // ulazna vrijednost
scanf("%d",&broj_n);

printf("Indeks: ");       // ulazna vrijednost
scanf("%d",&broj_k);

printf("Izabrani clan niza: %d", clan_niza(broj_k, broj_n));   // ispis posljednjeg clana

return 0;
}

Ispis na ekranu:
Formirati niz - prethodni uvecaj za proizvod min i max cifre - Rekurzija
Nulti clan niza: 14
Indeks: 10
Indeks niza: 0   clan = 18 = 14 + 4 * 1
Indeks niza: 1   clan = 26 = 18 + 8 * 1
Indeks niza: 2   clan = 38 = 26 + 6 * 2
Indeks niza: 3   clan = 62 = 38 + 8 * 3
Indeks niza: 4   clan = 74 = 62 + 6 * 2
Indeks niza: 5   clan = 102 = 74 + 7 * 4
Indeks niza: 6   clan = 102 = 102 + 2 * 0
Indeks niza: 7   clan = 102 = 102 + 2 * 0
Indeks niza: 8   clan = 102 = 102 + 2 * 0
Indeks niza: 9   clan = 102 = 102 + 2 * 0
Izabrani clan niza: 102
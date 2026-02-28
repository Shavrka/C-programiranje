/*
 * ZADATAK 09413121 - 09413121
 * Napisati rekurzivnu funkciju void koja za dato n iscrtava trougao dimenzije n x n. Napr za n=7:
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09413121.htm
 */

#include <stdio.h>

void ispisi_red(int n2)  {    // ispis reda
if (n2 == 0)  return;     // kraj reda
printf("* ");             // ispis znak

ispisi_red(n2 - 1);       // rekurzija, ispsi slijedeci znak u redu
}

void novi_red(int n, int i) { // brojac broja znakova u redu
if (n == 0)   return;     // kraj?
ispisi_red(i);            // ispis reda
printf("\n");             // prelazak u novi red
novi_red(n - 1, i + 1);   // rekurzivni poziv slijedeci red
}

int main () {
printf("Ispis trougla. Rekurzija\n");
int broj;

printf("Broj: ");      // ulazne vrijednosti
scanf("%d",&broj);

novi_red(broj, 1);      // { // broj redova i prvi 5red
return 0;
}

II varijanta
// 09413121
#include <stdio.h>

void ispisi_red(int n, int i, int j) { // broj redova i tekuc red
if(n >= j){
if(i >= j) printf("x "); // prazan prostor do k?
else  printf(" ");       // ispis x poslije ?

ispisi_red(n, i, j + 1);
}
return ;  // izlaz
}

void novi_red(int n, int i) { // broj redova i tekuc red
if(n >= i) {   // zavrsen ispis?
ispisi_red(n, i, 1);   // pocetak ispisa u redu
printf("\n");          // prelazak u novi red
novi_red(n, i+1);      // slijedeci red
}
return ;                // kraj rekurzije
}

int main ()
{
printf("Ispis trougla. Rekurzija\n");
int broj;

printf("Broj: ");      // ulazne vrijednosti
scanf("%d",&broj);

novi_red(broj, 1);      // { // broj redova i prvi 5red
return 0;
}
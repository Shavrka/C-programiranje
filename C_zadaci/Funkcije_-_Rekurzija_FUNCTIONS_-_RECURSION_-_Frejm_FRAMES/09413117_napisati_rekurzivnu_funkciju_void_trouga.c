/*
 * ZADATAK 09413117 - 09413117
 * Napisati rekurzivnu funkciju void trougao(int n, int trenutna linija) koja za dato n iscrtava trougao dimenzije n x n. Napr za n=7:
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09413117.htm
 */

#include <stdio.h>

void ispisi_red(int n, int i, int j) { // broj redova i tekuc red
if(n >= j){
if(i + j > n + 1) printf(" "); // prazan prostor do k?
else  printf("x");             // ispis x poslije ?

ispisi_red(n, i, j + 1);
}
return ;                           // izlaz
}

void novi_red(int n, int i) {  // broj redova i tekuc red
if(n >= i) {               // zavrsen ispis?
ispisi_red(n, i, 1);   // pocetak ispisa u redu
printf("\n");          // prelazak u novi red
novi_red(n, i+1);      // slijedeci red
}
return ;                   // kraj rekurzije
}

int main ()
{
printf("Ispis trougla. Rekurzija\n");
int broj;

printf("Broj: ");       // ulazne vrijednosti
scanf("%d",&broj);

novi_red(broj, 1);      // broj redova i prvi 5red
return 0;
}
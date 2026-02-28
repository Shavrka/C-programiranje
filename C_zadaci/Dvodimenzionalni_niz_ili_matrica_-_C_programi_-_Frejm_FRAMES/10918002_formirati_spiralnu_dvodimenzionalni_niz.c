/*
 * ZADATAK 10918002 - 10918002
 * Formirati spiralnu dvodimenzionalni niz - kvadratnu matricu nxn. Popuniti je prirpdnim brojevima od 1 do n*n po spirali. Popunjavanje matrice po spirali po;inje iy gornjeg lijevog ugla u smjeru kazaljke na časovniku. Početna vrijednostu u prvom polju je jedan, a podatak na svakom narednom polju uvećava se zа један u odnosu na prethodno polje:
 * Kategorija: Dvodimenzionalni niz ili matrica - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/109c/10918002.htm
 */

#include <stdio.h>

int main()
{
int i, j , n;
printf("Kvadratna matrica se popunjava spiralno \n");
printf("Unesite dimenziju kvadratne matrice: ");
scanf("%d", &n);

int lijevo = 0;   // lijeva granica
int desno = n-1;  // desna granica
int vrh = 0;      // granica vrha
int dno = n -1;   // granica dna
int br = 1;       // vrijednost popunjavanja spirale
int A[n][n];

do{
// lijevo >> desno    red
for(j = lijevo; j <= desno; j++) {
A[vrh][j] = br;
br ++;
}
vrh++;

// vrh >> dno     kolona
for(j = vrh; j <= dno; j++) {
A[j][desno] = br;
br ++;
}
desno--;

// lijevo << desno    red
for(j = desno; j >= lijevo; j--) {
A[dno][j] = br;
br ++;
}
dno--;

// vrh << dno   kolona
for(j = dno; j >= vrh; j--) {
A[j][lijevo] = br;
br ++;
}
lijevo++;
}while (lijevo <= desno );

printf("\nSpiralna matrica\n");
for(i=0; i < n; i++) {
for(j=0; j < n; j++) {
printf("%4d%4 ", A[i][j]);
}
printf("\n");
}
return 0;
}
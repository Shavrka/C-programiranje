/*
 * ZADATAK 10111005 - 10111005
 * Učitati članove niza. Ispisati susjedne članove niza čija je suma parna.
 * Kategorija: Niz /ARRAY/ - Izdvajanje, suma, proizvod i prebrojavanje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/101c/10111005.htm
 */

#include <stdio.h>

int main()
{

int n[10];		// rezervisanje prostora za niz cijelih brojeva - ARRAY
int i, s;

for ( i = 0; i < 10; i++ ) {  // ulaz
scanf ("%d",&n[i]);
}

for (i = 0; i < 9; ++i ) {
s = n[i] + n[i+1];  // suma susjednih clanova niza
if (s %2 == 0){     // suma susjednih clanova parna?
printf("n[%d]= %d n[%d]= %d  suma= %d \n", i, n[i], i+1, n[i+1], s);

return 0;
}
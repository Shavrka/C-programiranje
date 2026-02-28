/*
 * ZADATAK 09412014 - 09412014
 * Napisati rekurzivnu funkciju int maksimum_niza(int*niz, int n) koja odreduje maksimum niza cijelih brojeva.
 * Kategorija: Funkcije - Rekurzija /FUNCTIONS - RECURSION/ - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/094c/09412014.htm
 */

#include <stdio.h>

int nadji_max(int*niz, int n){   // niz i broj clanova niza
int m_max;
if(n==1){               // prvi clan niza
return niz[0];
}
m_max=nadji_max(niz, n-1);
if(niz[n-1]>m_max)      // poredi tekuci clan niza i maksimum od prethodnih clanova
m_max=niz[n-1];
return m_max;           // vraca maksimum do tekuceg indeksa
}

int main ()
{
printf("Maksimum niza - Rekurzija\n");
int i, n, max;
printf("Unesi broj elemenata niza: ");
scanf("%d", &n);
int niz[n];        // rezervisanje prostora za niz - ARRAY

for ( i = 0; i < n; i++ ) {
scanf ("%d", &niz[i]);    // ulaz clanova niza
}

max = nadji_max(niz, n);

printf("Maksimum niza = %d", max);

return 0;
}
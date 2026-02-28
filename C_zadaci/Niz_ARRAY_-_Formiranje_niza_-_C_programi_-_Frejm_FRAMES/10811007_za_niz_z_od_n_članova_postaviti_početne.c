/*
 * ZADATAK 10811007 - 10811007
 * Za niz Z od n članova postaviti početne vrijednosti:
 * Kategorija: Niz /ARRAY/ - Formiranje niza - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/108c/10811007.htm
 */

#include <stdio.h>
// 10811007

int main()
{
int n;
int i;
printf("Niz Z: \n");
printf("Unesi broj elemenata niza: ");
scanf("%d", &n);
int Z[n];
for(i=0; i < n; i++) {
if(i%2==0) {
Z[i]=1;
}
else {
Z[i]=0;
}
}

printf("Ispis niza: ");
for(i=0; i < n; i++) {
printf("%d ", Z[i]);
}

return 0;
}
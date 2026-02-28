/*
 * ZADATAK 10112079 - 10112079
 * Izračunati proizvod članova niza čija je vrijednost u intervalu [3,9].
 * Kategorija: Niz /ARRAY/ - Izdvajanje, suma, proizvod i prebrojavanje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/101c/10112079.htm
 */

#include <stdio.h>

int main()
{
int n,i,proizvod=1;
do{
printf("Unesi broj elemenata niza, mora biti >=10: ");
scanf("%d", &n);
}
while (n < 10);
int iNiz[n];

printf("Unesi elemente niza: \n");
for(i=0; i < n; i++) {
scanf("%d", &iNiz[i]);
}       // for

for(i=3; i < 10; i++) {
proizvod*=iNiz[i];

}       // for
printf("\n%d", proizvod);
return 0;
}
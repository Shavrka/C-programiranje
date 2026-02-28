/*
 * ZADATAK 23010320 - 23010320
 * Generisati 5 slučajnih 3-cifrenih brojeva i ispisati najmanji neparan od njih ako ga ima ili reći da ga nema.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010320.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, n, sluc, min;
time_t t;
n = 5;

srand((unsigned) time(&t));  /* Inicijalizacija generatora slucajnog broja RND */
min=1000;  // pocetna vrijednost min. Ako se ne promjeni nije generisan ni jedan neparn broj

for( i = 0 ; i < n ; i++ ) {    // geneirsanje 5 trocifrenih brojeva - ponavljaj
sluc = rand() % 900 + 100;  // geneirsanje trocifrenog broja
printf("%d. trocifren broj = %d\n", i+1, sluc);

if (sluc < min && sluc %2 !=0) min=sluc;
}
if (min < 1000) printf("Najmanji neparan od generisanih trocifrenih brojeva je %d\n", min);
else printf("nema neparnog broja");

return(0);
}
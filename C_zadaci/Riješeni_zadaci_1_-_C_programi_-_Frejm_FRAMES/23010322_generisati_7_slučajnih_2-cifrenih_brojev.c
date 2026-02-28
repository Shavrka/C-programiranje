/*
 * ZADATAK 23010322 - 23010322
 * Generisati 7 slučajnih 2-cifrenih brojeva i ispisati najmanji neparan od njih ako ga ima ili reći da ga nema.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010322.htm
 */

#include <stdio.h>

int main()
{
int i, n, sluc, min;
time_t t;
n = 7;  // koliko ce se generisati slucajnih brojeva

srand((unsigned) time(&t));  /* Inicijalizacija generatora slucajnog broja RND */
min = 100;  // pocetna vrijednost min. Ako se ne promjeni nije generisan ni jedan neparn broj

for( i = 0 ; i < n ; i++ ) {    // geneirsanje 5 trocifrenih brojeva - ponavljaj
sluc = rand() % 90 + 10;    // geneirsanje dvocifrenog broja
printf("%d. trocifren broj = %d\n", i+1, sluc);

if (sluc < min && sluc %2 !=0) min=sluc;
}
if (min < 100) printf("Najmanji neparan od generisanih dvocifrenih brojeva je %d\n", min);
else printf("nema neparnog broja");

return(0);
}
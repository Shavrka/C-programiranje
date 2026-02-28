/*
 * ZADATAK 23010333 - 23010333
 * Generisati 6 slučajnih 3-cifrenih brojeva i ispisati najveći paran od njih ako ga ima.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010333.htm
 */

#include <stdio.h>

int main()
{
int i, n, sluc, max;
time_t t;
n = 6;  // koliko ce se generisati slucajnih brojeva

srand((unsigned) time(&t));  /* Inicijalizacija generatora slucajnog broja RND */
max = 99;  // pocetna vrijednost max. Ako se ne promjeni nije generisan ni jedan neparn broj

for( i = 0 ; i < n ; i++ ) {    // geneirsanje 5 trocifrenih brojeva - ponavljaj
sluc = rand() % 900 + 100;  // geneirsanje trocifrenog broja
printf("%d. trocifren broj = %d\n", i+1, sluc);

if (sluc > max && sluc %2 ==0)  // da li je novi slucajan broj > stare vrijednosti max
max = sluc;  // nova vrijednsot max

}
if (max > 99) printf("Najveci paran od generisanih trocifrenih brojeva je %d\n", max);
else printf("nema parnog broja");

return(0);
}
/*
 * ZADATAK 24010620 - 24010620
 * Sa tastature unese cijeli broj n, a zatim iscrtava na ekranu ispunjeni jednakostranični trougao sastavljen od zvjezdica čija je osnovica horizontalna a vrh usmjeren nagore. Na primjer, ukoliko se unese n = 5, ispis na ekranu treba da izgleda kao
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010620.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
int i, j, k, n;

printf("Do broja: ");
scanf("%d",&n);

i = 1;                    // pocetna vrijednosti i
while (i <= n)  {         // dok je i <= n ponavljaj - pocetak petlje
j = 1;
while (i + j < n + 1) {  // iznad sporedne dijagonale (i + j < n + 1)
printf(" ");         // prazan prostor
j++;
}    // kraj While petlje j
k = 1;
while (k <= (2*i - 1)) {  // broj ispisa dvostruki broj reda umanjen za 1
printf("*");          // ispis znaka
k++;
}          // kraj While petlje k
printf("\n");
i++;
}   // kraj While petlje i
return 0;
}
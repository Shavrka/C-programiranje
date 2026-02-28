/*
 * ZADATAK 08614038 - 08614038
 * Napisati program da ispisuje na glavnoj dijagonali + a osali su -:
 * Kategorija: WHILE petlja u petlji - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08614038.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
int i, j, n;

printf("Do broja: ");
scanf("%d",&n);           // dimenzija matrice

i = 1;                    // pocetna vrijednosti i
while (i <= n)  {         // dok je i <= n ponavljaj - pocetak petlje
j = 1;
while (j < i) {      // dok je j < i ponavljaj - pocetak petlje
printf(" ");      // ispis praznog znaka
j++;              // slijedeca vrijednost j
}    // kraj While petlje j
printf("x\n");        // ispis na glavnoj dijagonali i novi red
i++;                      // slijedeca vrijednost i
}   // kraj While petlje i
return 0;
}

II varijanta    ispis na glavnoj dijagonali sa if (j == i)
// 08614038
# include <stdio.h>

int main ()
{
int i, j, n;

printf("Do broja: ");
scanf("%d",&n);           // dimenzija matrice

i = 1;                    // pocetna vrijednosti i
while (i <= n)  {         // dok je i <= n ponavljaj - pocetak petlje
j = 1;
while (j <= n) {      // dok je j <= i ponavljaj - pocetak petlje
if (i == j)           // glavna dijagonala?
printf("x");      // na glavnoj dijagonali
else
printf(" ");      // izvan glavne dijagonale
j++;                  // slijedeca vrijednost j
}    // kraj While petlje j
printf("\n");             // novi red
i++;                      // slijedeca vrijednost i
}   // kraj While petlje i
return 0;
}

III varijanta     ispis praznine ispod glavne dijagonale izvodi se sa while (j < i) ;   getchar()
// 08614038
# include <stdio.h>

int main ()
{
int i, j, n;
char znak;

printf("Otkucaj znak: ");
scanf("%c",&znak);            // znak
printf("Do broja: ");
scanf("%d",&n);               // dimenzija matrice

i = 1;                    // pocetna vrijednosti i
while (i <= n)  {         // dok je i <= n ponavljaj - pocetak petlje
j = 1;
while (j < i) {       // dok je j < i ponavljaj - pocetak petlje
printf(" ");      // ispis praznog znaka
j++;              // slijedeca vrijednost j
}    // kraj While petlje j
printf("%c\n", znak); // na glavnoj dijagonali i novi red
i++;                  // slijedeca vrijednost i
}   // kraj While petlje i
return 0;
}

IV varijanta  ispis na glavnoj dijagonali sa if (j == i);   getchar()
// 08614038
# include <stdio.h>

int main ()
{
int i, j, n;
char znak;

printf("Otkucaj znak: ");
scanf("%c",&znak);            // znak
printf("Do broja: ");
scanf("%d",&n);               // dimenzija matrice

i = 1;                    // pocetna vrijednosti i
while (i <= n)  {         // dok je i <= n ponavljaj - pocetak petlje
j = 1;
while (j <= n) {      // dok je j <= i ponavljaj - pocetak petlje
if (i == j)           // glavna dijagonala?
printf("%c", znak); // na glavnoj dijagonali
else
printf(" ");      // izvan glavne dijagonale
j++;                  // slijedeca vrijednost j
}    // kraj While petlje j
printf("\n");             // novi red
i++;                      // slijedeca vrijednost i
}   // kraj While petlje i
return 0;
}
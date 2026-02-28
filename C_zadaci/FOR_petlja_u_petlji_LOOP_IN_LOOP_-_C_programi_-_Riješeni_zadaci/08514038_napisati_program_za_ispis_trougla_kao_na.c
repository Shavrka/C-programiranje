/*
 * ZADATAK 32 - 08514038
 * Napisati program za ispis trougla kao na slici sa željenim brojem redova:.
 * Kategorija: FOR petlja u petlji /LOOP IN LOOP/ - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/085c/08514038.htm
 */

#include <stdio.h>

int main()
{
int i, j, n;
int znak;

printf("Do broja: ");
scanf("%d",&n);               // dimenzija matrice

for (i = 1; i <= n; i++) {    // redovi
for (j = 1; j <= n; j++)  // kolone
if (i == j)           // glavna dijagonala?
printf("x");      // na glavnoj dijagonali
else
printf(" ");      // izvan glavne dijagonale
printf("\n");             // novi red
}
return 0;
}

II varijanta dvije for petlje i ispis parazno kad nije glavna dijagonala if (i != j), a na glavnoj dijagonali ispis x
// 08514038
#include <stdio.h>

int main()
{
int i, j, n;
int znak;

printf("Do broja: ");
scanf("%d",&n);               // dimenzija matrice

for (i = 1; i <= n; i++) {    // redovi
for (j = 1; j <= n; j++)  // kolone
if (i != j)           // glavna dijagonala?
printf(" ");      // izvan glavne dijagonale
else
printf("x");      // na glavnoj dijagonali
printf("\n");             // novi red
}
return 0;
}

III varijanta ispis x poslije j petlje
// 08514038
#include <stdio.h>

int main()
{
int i, j, n;

printf("Do broja: ");
scanf("%d",&n);               // dimenzija matrice

for (i = 1; i <= n; i++) {    // redovi
for (j = 1; j < i; j++)   // kolone
printf(" ");          // izvan glavne dijagonale
printf("x\n");            // na glavnoj dijagonali i novi red
}
return 0;
}

IV varijanta dvije for petlje i izdvajanje if (i == j) za ispis; getchar()
// 08514038
#include <stdio.h>

int main()
{
int i, j, n;
char znak;

printf("Otkucaj znak: ");
scanf("%c",&znak);            // znak
printf("Do broja: ");
scanf("%d",&n);               // dimenzija matrice

for (i = 1; i <= n; i++) {    // redovi
for (j = 1; j <= n; j++)  // kolone
if (i == j)           // glavna dijagonala?
printf("%c", znak); // na glavnoj dijagonali
else
printf(" ");      // izvan glavne dijagonale
printf("\n");             // novi red
}
return 0;
}

V varijanta  dvije for petlje i ispis parazno kad nije glavna dijagonala if (i != j), a na glavnoj dijagonali ispis x; getchar()
// 08514038
#include <stdio.h>

int main()
{
int i, j, n;
char znak;

printf("Otkucaj znak: ");
scanf("%c",&znak);            // znak
printf("Do broja: ");
scanf("%d",&n);               // dimenzija matrice

for (i = 1; i <= n; i++) {    // redovi
for (j = 1; j <= n; j++)  // kolone
if (i != j)           // glavna dijagonala?
printf(" ");      // izvan glavne dijagonale
else
printf("%c", znak); // na glavnoj dijagonali
printf("\n");             // novi red
}
return 0;
}

VI varijanta ispis x poslije j petlje;   getchar()
// 08514038
#include <stdio.h>

int main()
{
int i, j, n;
char znak;

printf("Otkucaj znak: ");
scanf("%c",&znak);            // znak
printf("Do broja: ");
scanf("%d",&n);               // dimenzija matrice

for (i = 1; i <= n; i++) {    // redovi
for (j = 1; j < i; j++)   // kolone
printf(" ");          // izvan glavne dijagonale
printf("%c\n", znak);     // na glavnoj dijagonali i novi red
}
return 0;
}
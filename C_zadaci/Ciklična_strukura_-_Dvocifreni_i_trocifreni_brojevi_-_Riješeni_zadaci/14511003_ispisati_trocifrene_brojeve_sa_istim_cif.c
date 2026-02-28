/*
 * ZADATAK 503 - 14511003
 * Ispisati trocifrene brojeve sa istim ciframa (koristi jednu petlju).
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14511003.htm
 */

#include <stdio.h>

int main()
{
printf("Trocifreni brojevi sa istim ciframa\n");  // naslov
int broj, j, d, s;          // deklarisanje varijabli

for (broj=100; broj <= 999; broj++){  // za trocifrene brojeve radi
j = broj % 10;          // cifra jedinica
d = (broj / 10);
d = d % 10;             // cifra desetice
s = broj / 100;         // cifra stotice
if (s == d && d == j)   // iste cifre?
printf("%d, ", broj);   // ispis
}

return 0;
}
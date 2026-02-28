/*
 * ZADATAK 520 - 14511020
 * Ispisati trocifrene brojeve čija je prva cifra djeljiva sa 3 a druga cifra djeljiva sa 4 (jedna petlja).
 * Kategorija: Ciklična strukura - Dvocifreni i trocifreni brojevi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/140c/14511020.htm
 */

#include <stdio.h>

int main()
{
printf("Trocifren broj - prva cifra djeljiva sa 3 a druga cifra djeljiva sa 4\n");  // naslov

int broj, d, s;                       // deklarisanje varijabli

for (broj=100; broj <= 999; broj++){  // za trocifrene brojeve radi
d = (broj / 10);
d = d % 10;                       // desetice
s = broj / 100;                   // stotice
if (s % 3 == 0 && d % 4 == 0)     // prva cifra djeljiva sa 3 a druga cifra djeljiva sa 4?
printf("%d, ", broj);         // ispis
}
return 0;
}
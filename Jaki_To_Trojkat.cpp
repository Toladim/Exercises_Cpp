#include <conio.h>
#include <iostream>

using namespace std;

int a, b, c;

int main()
{
    do {
        cout << "Podaj pierwszy bok trojkata: ";
        cin >> a;
    } while (a <= 0);
    do
    {
        cout << "Podaj drugi bok trojkata: ";
        cin >> b;
    } while (b <= 0);
    do
    {
        cout << "Podaj trzeci bok trojkata: ";
        cin >> c;
    } while (c <= 0);

  
    if (a + b == c || b + c == a || a + c == b)
        cout << "To trojkat zdegenerowany!";
    else if (a + b > c && b + c > a && a + c > b)
    {
        if (a == b && a == c)
            cout << "To trojkat rownoboczny!";
        else if ((a == b) || (b == c) || (a == c))
            cout << "To trojkat rownoramienny!";
        else
            cout << "To trojkat roznoboczny!";
    }
    else
        cout << "To nie jest trojkat!";

   int getch();
}


/*

Uwaga
Aby kształt w ogóle był trójkątem, wszystkie boki muszą mieć długość > 0,
a suma długości dowolnych dwóch boków musi być większa lub równa długości trzeciego boku. 
Zobacz nierówność trójkąta.

Kop głębiej
Przypadek, w którym suma długości dwóch boków równa się długości trzeciego, 
nazywany jest trójkątem zdegenerowanym - ma on pole zerowe i wygląda jak pojedyncza linia.
Możesz dodać własny kod/testy, aby sprawdzić zdegenerowane trójkąty.*/
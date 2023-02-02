#include <conio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double earth_year;
    double second;

    cout << "Podaj swoj wiek w sekundach: \n";
    cin >> second;

    earth_year = second/31557600;
    cout << setprecision(10);
    cout << "Na Merkury mialbys: " << earth_year * 0.2408467 << " lat.\n";
    cout << "Na Wenus mialbys: " << earth_year * 0.61519726 << " lat.\n";
    cout << "Na Ziemi mialbys: " << earth_year << " lat.\n";
    cout << "Na Marsie mialbys: " << earth_year * 1.8808158 << " lat.\n";
    cout << "Na Jowiszu mialbys: " << earth_year * 11.862615 << " lat.\n";
    cout << "Na Saturnie mialbys: " << earth_year * 29.447498 << " lat.\n";
    cout << "Na Uranie mialbys: " << earth_year * 84.016846 << " lat.\n";
    cout << "Na Neptunie mialbys " << earth_year * 164.79132 << " lat.\n";

    int getch();
}


/*Mercury: orbital period 0.2408467 Earth years
Venus: orbital period 0.61519726 Earth years
Earth : orbital period 1.0 Earth years, 365.25 Earth days, or 31557600 seconds
Mars : orbital period 1.8808158 Earth years
Jupiter : orbital period 11.862615 Earth years
Saturn : orbital period 29.447498 Earth years
Uranus : orbital period 84.016846 Earth years
Neptune : orbital period 164.79132 Earth years*/
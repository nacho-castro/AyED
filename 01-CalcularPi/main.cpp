#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    double serie_Liebniz = 0;
    int n = 0;
    double i = 1.0; // Variable para indicar el signo

    while (abs(serie_Liebniz - (3.141592/4.0)) > 0.0000001)
    {
        serie_Liebniz += i / (2.00 * n + 1.00);
        n++;
        i *= -1.0;
    }

    // La serie de Liebniz obtiene el valor de 1/4 pi. Debo multiplicarlo por 4.
    serie_Liebniz *= 4.0;
    cout << "El valor de Pi es: " << setprecision(7) << serie_Liebniz;
}
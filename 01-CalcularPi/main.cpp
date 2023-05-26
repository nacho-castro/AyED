#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double serie_Liebniz = 0;

    for (int n = 0; n < 1000000; n++)
    {
        if (n % 2 == 0)
        {
            serie_Liebniz += 1.00/(2.00*n + 1.00);
        } else {
            serie_Liebniz += -1.00/(2.00*n + 1.00);
        }
    }

    //La serie de Liebniz obtiene el valor de 1/4 pi. Debo multiplicarlo por 4.
    cout << "El valor de Pi es: " << setprecision(7) << 4*serie_Liebniz;
}
#include "sum.h"

int main()
{
    int num;
    cout << "Hasta que numero quieres sumar? " << endl;
    cin >> num;

    if (num < 1)
    {
        cout << "Please input a number higher than 0" << endl;
        
        
    }

    cout << suma_alternativa(num) << endl;
    cout << "El valor de la recursiva es de: " << suma_recursiva(num) << endl;
    cout << suma_directa(num) << endl;

    
    


}
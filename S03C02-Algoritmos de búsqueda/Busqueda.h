#include "Misc.h"
#pragma once

template <typename T>
class Busqueda
{

    public:

    void busquedaSecuencial(std::vector<T> elementos,std::vector<T> numeros)
    {
        int j = 5;
        int a = 0;

        while (a < j)
        {
            int i = 0;
            char band = 'F';
            while (i < elements.size() && band == 'F')
            {
                if(elementos[i] == numeros[a]){band = 'V'}
                else{i++}
            }
            if (band == 'F'){cout << "The index of: " <<  numeros[a] << " is " << "-1" << endl;}
            else if (band == 'V'){cout << "The index of: " <<  numeros[a] << " is " << i-1 << endl;}
            a++   
        }
    }

    void busquedaSecuencialOrdenada1(std::vector<T> elementos,std::vector<T> numeros)
    {

        
    }

};




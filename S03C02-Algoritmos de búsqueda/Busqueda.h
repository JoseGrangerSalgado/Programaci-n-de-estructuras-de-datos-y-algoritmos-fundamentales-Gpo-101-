#include "Misc.h"


class Busqueda : public Misc
{

    public:
    Busqueda() {};
    ~Busqueda() {};


    void busquedaSecuencial(std::vector<double> elementos,std::vector<double> numeros)
    {
        int j = 5;
        int a = 0;

        while (a < j)
        {
            int i = 0;
            char band = 'F';
            while (i < elementos.size() && band == 'F')
            {
                if(elementos[i] == numeros[a]){band = 'V';}
                else{i++;}
            }
            if (band == 'F'){std::cout << "Busqueda secuencial: " << "The index of: " <<  numeros[a] << " is " << "-1" << std::endl;}
            else if (band == 'V'){std::cout << "Busqueda secuencial: " << "The index of: " <<  numeros[a] << " is " << i-1 << std::endl;}
            a++; 
        }
    }

    void busquedaSecuencialOrdenada1(std::vector<double> elementos,std::vector<double> numeros) 
    {

        int j = 5;
        int a = 0;
        std::sort(elementos.begin(), elementos.end());
        
        while (a < j)
        {
            int i = 0;
            char band = 'F';
            while (i < elementos.size() && band == 'F')
            {
                if(elementos[i] == numeros[a]){band = 'V';}
                else{i++;}
            }
            if (band == 'F'){std::cout << "Busqueda secuencialordenada1: " << "The index of: " <<  numeros[a] << " is " << "-1" << std::endl;}
            else if (band == 'V'){std::cout << "Busqueda secuencialordenada1: " << "The index of: " <<  numeros[a] << " is " << i-1 << std::endl;}
            a++;  
        }


    }

   /* void busquedaSecuencialOrdenada2(std::vector<double> elementos,std::vector<double> numeros) 
    {

        int j = 5;
        int a = 0;
        std::sort(elementos.begin(), elementos.end());
        
        while (a < j)
        {
            int i = 0;
            char band = 'F';
            while (i < elementos.size() && band == 'F')
            {
                if(elementos[i] == numeros[a]){band = 'V';}
                else{i++;}
            }
            if (band == 'F'){std::cout << "The index of: " <<  numeros[a] << " is " << "-1" << std::endl;}
            else if (band == 'V'){std::cout << "The index of: " <<  numeros[a] << " is " << i-1 << std::endl;}
            a++;  
        }


    } */
     
    void busquedaBinaria(std::vector<double> elementos,std::vector<double> numeros)
    {
        std::sort(elementos.begin(), elementos.end());
        int j = 5;
        int a = 0;

        while (a < j)
        {
            
            int left = 0;
            int right = elementos.size();
            int middle;
            char key = 'F';
            
            while(left <= right)
            {
                middle = (left+right)/2;
                if(elementos[middle] == numeros[a]){key = 'V'; break;}
                if(elementos[middle] > numeros[a]){right = middle-1; middle = (left+right)/2;}
                if(elementos[middle] < numeros[a]){left = middle+1; middle = (left+right)/2;}
            }

            if (key == 'V'){std::cout << "Busqueda Binaria: " << "The index of: " <<  numeros[a] << " is " << middle << std::endl;}
            else{std::cout << "Busqueda Binaria: " << "The index of: " <<  numeros[a] << " is " << "-1" << std::endl;}
            a++;    
        }
    }


void busquedaBinaria1(std::vector<double> elementos,std::vector<double> numeros)
{

std::string met;
std::cout << "Para poder hacer la busqueda Binaria, se necesita ordenar el arreglo, porfavor seleciona el metodo que prefieres: " << std::endl;
std::cout << "Para usar el metodo de insertion ponga i, para usar el metodo de Burbuja, ponga b, y finalmente para usar el metodo Quick, ponga q: " << std::endl;

/*if (met == "i"){Sort::insertionSort(elementos);}
else if (met == "b"){Sort::bubbleSort(elementos);}
else if (met == "q"){Sort::quickSort(elementos,0,elementos.size());}
else{throw "Invalid input";}*/

std::sort(elementos.begin(), elementos.end());


int i,n,j;
int prim = 0;
int ult = elementos.size()-1;
int med = (prim+ult)/2;

while (j < numeros.size()-1)
{
while (prim<=ult)
{
    if(elementos[med] < numeros[j])
    {
        prim = med+1;
    }
    else if (elementos[med] == numeros[j])
    {
        std::cout << "Posicion: " << med+1;
        j++;
        break;


    }
    else
    {
        ult = med - 1;
    }

    med = (prim+ult)/2;

    if (prim>ult)
    {

        std::cout << "-1";
        j++;

    }  
}

}


}

};


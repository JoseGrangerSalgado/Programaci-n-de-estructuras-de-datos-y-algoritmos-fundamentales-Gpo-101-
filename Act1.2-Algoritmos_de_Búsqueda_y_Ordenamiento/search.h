#include "order.h"

class Search : public Sort
{

public:
    Search() {};
    ~Search() {};

 void busquedaSecuencial(std::vector<int> elementos,std::vector<int> numeros)
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
            if (band == 'F'){std::cout << "Secuential Search: " << "The index of " <<  numeros[a] << " is " << "-1" << std::endl;}
            else if (band == 'V'){std::cout << "Secuential Search: " << "The index of " <<  numeros[a] << " is " << i-1 << std::endl;}
            a++; 
        }
    }

void busquedaBinaria(std::vector<int> elementos,std::vector<int> numeros)
{

std::string met;
std::cout << std::endl << "In order to do a Binary Search, you need to select a sorting method of your preference: " << std::endl;
std::cout << "In order to do an InsertionSort(medium), please type i, in order to do a BubbleSort(slow), please type b, and finally, in order to do a QuickSort(fast), please type q: " << std::endl;
std::cin >> met;
std::cout << "Sorting, please wait a second... " << std::endl;
if (met == "i"){Sort::insertionSort(elementos);}
else if (met == "b"){Sort::bubbleSort(elementos);}
else if (met == "q"){Sort::quickSort(elementos,0,elementos.size());}



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

            if (key == 'V'){std::cout << "Binary Search: " << "The index of " <<  numeros[a] << " is " << middle-1 << std::endl;}
            else{std::cout << "Binary Search: " << "The index of " <<  numeros[a] << " is " << "-1" << std::endl;}
            a++;    
        }

}

};

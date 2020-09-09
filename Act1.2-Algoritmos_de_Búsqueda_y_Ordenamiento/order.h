#include "misc.h"

class Sort : public Method
{   

public:

void bubbleSort(std::vector<int> &elementos) // Complexity is O(n^2)
    {
        int i,j,p;
        int n = elementos.size();

        for (i = 0; i < n-1; i++)
        {
            for(j =0; j < n-i-1; j++)
            {
                if (elementos[j] > elementos[j+1])
                {
                    swap(&elementos[j], &elementos[j+1]);
                }
            }
        }



        /*for(p=0; p < elementos.size(); p++)
        {
            std::cout << elementos[p] << " ";
            
        } */ // Prints results, but lags on big arrangements
        
    }


void insertionSort(std::vector<int> &elementos)  
{  
    int i, set, j,p;  
    int n = elementos.size();

    for (i = 1; i < n; i++) 
    {  
        set = elementos[i];  
        j = i - 1;  
  
        while (j >= 0 && elementos[j] > set) 
        {  
            elementos[j + 1] = elementos[j];  
            j = j - 1;  
        }  
        elementos[j + 1] = set;  
    }  

    /*for(p=0; p < elementos.size(); p++)
        {
            std::cout << elementos[p] << " ";
            
        }*/  // Prints results, but lags on big arrangements
}

void quickSort(std::vector<int> &elementos, int low, int high)
    {
        if (low < high)  
        {  
            
            int pi = partition(elementos, low, high);  
      
            quickSort(elementos, low, pi - 1);  
            quickSort(elementos, pi + 1, high);  
        }  
    }
        
};












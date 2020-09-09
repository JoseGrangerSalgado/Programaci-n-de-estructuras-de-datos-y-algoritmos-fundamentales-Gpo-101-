#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <string>


class Method
{
    public:
    std::vector<int> elementos;
    std::vector<int> numeros;
    
void genVector() 
    {
        
        double c1 = 0;
        double gen = 0;
        
        std::cout << "How many numbers would you like to be generated randomly? " << std::endl;
        std::cin >> gen;
        while (c1 <= gen)
        {
            elementos.push_back(rand() % RAND_MAX);
            c1++;
        }

    }

void setNum()
    {
        int c2 = 0;
        int val;
        int num;
        std::cout << "Please insert the amount numbers you want to be searched for: " << std::endl;
        std::cin >> num;
        std::cout << "Now, Please insert the numbers you want to be searched for: " << std::endl;
        while (c2 < num)
        {
            std::cin >> val;
            numeros.push_back(val);
            c2++;

        }
    
     }

void swap(int *a, int *b)
{
    int store = *a;
    *a = *b;
    *b = store;


}

int partition (std::vector<int> &elementos, int low, int high)
    {  
        int pivot = elementos[high]; 
        int i = (low - 1);     
      
        for (int j = low; j <= high - 1; j++)  
        {  
            
            if (elementos[j] < pivot)  
            {  
                i++; 
                swap(&elementos[i], &elementos[j]);
            }  
        }  
        swap(&elementos[i+1], &elementos[high]);
        return (i + 1);  
    }
};



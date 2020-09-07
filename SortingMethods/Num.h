#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>


class Method
{
    public:
    std::vector<double> elementos;
    
void genVector() 
    {
        
        double c1 = 0;
        double gen = 0;
        
        std::cout << "How many numbers would you like the to generate (recommended number is 100,000)" << std::endl;
        std::cin >> gen;
        while (c1 <= gen)
        {
            elementos.push_back(rand() % RAND_MAX);
            c1++;
        }

    }

void swap(double *a, double *b)
{
    double store = *a;
    *a = *b;
    *b = store;


}

void merge(std::vector<double> elementos, int l, int m, int r) {
   int i, j, k, nl, nr;
   
   nl = m-l+1; nr = r-m;
   int lelementos[nl], relementos[nr];
   
   for(i = 0; i<nl; i++)
      lelementos[i] = elementos[l+i];
   for(j = 0; j<nr; j++)
      relementos[j] = elementos[m+1+j];
   i = 0; j = 0; k = l;
  
   while(i < nl && j<nr) {
      if(lelementos[i] <= relementos[j]) {
         elementos[k] = elementos[i];
         i++;
      }else{
         elementos[k] = elementos[j];
         j++;
      }
      k++;
   }
   while(i<nl) {       
      elementos[k] = lelementos[i];
      i++; k++;
   }
   while(j<nr) {     
      elementos[k] = relementos[j];
      j++; k++;
   }
}
};
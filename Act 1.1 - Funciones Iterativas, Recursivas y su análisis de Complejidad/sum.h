#include <iostream>
using namespace std;

int suma_alternativa(int num) // O(n)
{

    int val = 0;
    for (int i = 0; i <= num; i++) 
    {
        val = val + i;
    }

    cout << "El valor de la iterativa es: " << val << endl;
    return 0;
}

int suma_recursiva(int num) // O(n)
{

    if(num == 1){return 1;}
    else{return (suma_recursiva(num-1) + num);}
    
     
    
    
}

int suma_directa(int num) // O(n)
{
    int add;
    add = ((num*(num+1))/2);
    cout <<  "El valor de la directa es: " << add << endl;
    return 0;
}

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
int n = 5; // This is the horizontal size of the matrix
int m = 6; // This is the vertical size of the matrix

int counter = 0; // Este se refiere a un counter para los while
int search = 0; // Este es el valor que vamos a buscar en la matriz
int tallest = 0; // Este se converita en el valor del edificio mas alto
int heimax = 0; // Es la altura maxima donde se busca
int heimin = n-1; //Es la altura minimo donde se busca
int heimid = 0; // Es la mitad
int need = 0;


vector<vector<int> > photo = {{1,1,1,1,1,1},
                             {1,1,1,1,0,1},
                             {1,1,0,1,0,1},
                             {1,1,0,0,0,1},
                             {1,1,0,0,0,1}}; // This vector represents the photo of the skyline, with 1's being sky and 0's being the buildings

while(counter == 0){

    heimid = heimax + (heimin-heimax) / 2;
    for(int x = 0; x < m; x++){
        if(search == photo[heimid][x] && heimid != need){
            heimin = heimid -1;
            tallest = x;
            break;
        }
        else if(search == photo[heimid][x] && heimid == need){
            counter = 1;
            tallest = x;
            break; 
        }
        else if(x == m-1 && search != photo[heimid][x]){
                heimax = heimid +1;
                need = heimax;
        }



    }

}

cout << " The biggest building is in m: " << tallest;
}

/* Se puede considerar que este programa es O(mlog(n)) debido a que estamos haciendo un binary search con la n, por lo cual se convierte en una log(n), y lo demas debido a que 
por cada log(n) que tenemos se esta haciendo una busqueda lineal con m, por lo cual podemos concluir que es un programa O(mlog(n)) */ 
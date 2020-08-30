#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
int n = 5;
int m = 6;
int search = 0;
int man = 0;
int res = 0;

vector<vector<int> > photo = {{1,1,1,1,1,1},
                             {1,1,1,1,0,1},
                             {1,1,0,1,0,1},
                             {1,1,0,0,0,1},
                             {1,1,0,0,0,1}}; // This vector represents the photo of the skyline, with 1's being sky and 0's being the buildings


for (int i = 0; i < m; i++)
{
   if(search = photo[i][man])
   {
       res = man;
   }
   else
   {
       man = man+1;
   }

}
cout << "The Highest building is in n: ";
cout << man;






}
#include <iostream>
using namespace std;

int main (){
  /*  
   int n;
   cout<<" how many stars you want to print ";
   cin>>n;
   for (int j=1 ; j<=n ; j=j+1){
    for (int i =1 ; i<=n ; i++)
    {
        cout<< "*";
    }
    cout<<endl;
   }
*/
int count=1;
   for (int row=1; row<=5;row=row+1)
   {
for(int col=1; col<=5 ; col= col+1)
    {
        cout<<col<<" ";
    }
    //count=count+1;
     cout<<endl;
   }
}

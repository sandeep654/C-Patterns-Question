#include <iostream>
using namespace std;

int main(){
    /*
    char name='a';
    for ( int row=1; row<=26 ; row = row+1 )
     {

        for (int col=1 ; col<=5 ; col=col+1)
            {
             cout<<name<<" ";
            }
            name=name+1;
            cout << endl;}
     */

  char name='a';
    for ( int row=1; row<=6 ; row = row+1 )
     {

        for (int col=1 ; col<=26 ; col=col+1)
            {name='a'+(col-1);
             cout<<name<<" ";
            }
            cout << endl;}
}
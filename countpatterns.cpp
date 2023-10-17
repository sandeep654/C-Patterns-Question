#include<iostream>
using namespace std;
int main() {
   /*     int count=1;
        for(int row=1 ; row<=20 ; row=row+1 )
        {

            for (int col=1;col<=5;col=col+1)
            {
                cout<<(row)*5+col<<" ";
                
            }
            cout<<endl;
        } */

/*
    for(int row=1 ; row<=5 ; row=row+1 )
    {

        for (int col=1;col<=5-row+1;col=col+1)
        {
            cout<<row<<" ";
            
        }
        cout<<endl;
    }
*/

    
    for(int row=10 ; row>=1 ; row=row-1 )
    {

        for (int col=10;col>=row;col=col-1)
        {
            cout<<col<<" ";
            
        }
        cout<<endl;
    }
}   

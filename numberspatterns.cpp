#include<iostream>
using namespace std;

int main(){

int n ;
cout<<" Enter a number : ";
cin>>n;
/*
    for (int row = 1; row <= n; row = row + 1)
    { //print Space
        for (int col = 1; col <= n - row; col = col + 1)
        {
            cout << "  ";
        }
    //print Star 
        for (int col = 1; col <= row; col = col + 1)
        {
            cout << col<<" ";
        }

        cout<<endl;
    }
*/
// print col
     for (int row = 1; row <= n; row = row + 1)
    { //print Space
        for (int col = 1; col <= n - row; col = col + 1)
        { 
            cout << "  ";
        }
    //print Star 
        for (int col = 1; col <= row; col = col + 1)
        {
            cout << col;
        }

        cout<<endl;
    }
/*
    output:

        1
       12
      123
     1234
    12345

    */ 

/*
        for(int row=1; row<=n; row=row+1)

        {
            for( int col=1; col<=n-row; col=col+1)
            {
                cout<<"  ";

            }

            for( int col=1; col<=row ; col=col+1)
            {
                cout<<col<<" ";
            }

            for(int col=row-1; col>=1;col=col-1)
              {
                cout<<col<<" ";
              }
            
            cout<<endl;
        }

output:- 
                  1
                1 2 1
              1 2 3 2 1
            1 2 3 4 3 2 1
          1 2 3 4 5 4 3 2 1
        1 2 3 4 5 6 5 4 3 2 1
      1 2 3 4 5 6 7 6 5 4 3 2 1
    1 2 3 4 5 6 7 8 7 6 5 4 3 2 1
  1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1 
1 2 3 4 5 6 7 8 9 10 9 8 7 6 5 4 3 2 1

*/

        for(int row=1; row<=n; row=row+1)

        {
            for( int col=1; col<=n-row; col=col+1)
            {
                cout<<"  ";

            }

            for( int col=1; col<=row ; col=col+1)
            {
                cout<<col<<" ";
            }

            for(int col=row-1; col>=1;col=col-1)
              {
                cout<<col<<" ";
              }
            
            cout<<endl;
        }

}
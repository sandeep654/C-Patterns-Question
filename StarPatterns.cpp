#include<iostream>
using namespace std;

int main()
//loop in loop is nested loop 
{  /*      for(int row=1; row<=10; row=row+1)

        {
            for( int col=row; col<=10; col=col+1)
            { //print Star
                cout<<"* ";

            }
            cout<<endl;
        } */


/*   output:-
    * * * * *
    * * * *
    * * *
    * *
    *

     */
    /*

     for(int row=1; row<=40; row=row+1)

        {
            for( int col=1; col<=40-row; col=col+1)
            {
                cout<<" ";

            }

            for( int col2=1; col2<=row ; col2=col2+1)
            {
                cout<<"*";
                }
            cout<<endl;
        }
    }

     output:

        *
       **
      ***
     ****
    *****

    */
/*
   int n;
   cout<<"Enter a number ";
   cin>> n;

        for(int row=1; row<=n; row=row+1)

        {
            for( int col=1; col<=n-row; col=col+1)
            {
                cout<<"  ";

            }

            for( int col=1; col<=row*2-1 ; col=col+1)
            {
                cout<<"* ";
                }
            cout<<endl;
        }

    output:-

        *
       ***
      *****
     *******
    *********
   ***********
  *************
 ***************
*****************

*/


/*
 int n,x;
   cout<<"Enter a number ";
   cin>> n;

        for(int row=n; row>=1; row=row-1)

        { //space
            for( int col=1; col<=n-row; col=col+1)
            {
                cout<<"  ";

            }
             //star
            for( int col= 1; col<= 2*row-1; col=col+1)
            {   
                cout<< "* " ;
            }

            cout<<endl;
        }

Output:
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
        
*/

 int n,x;
   cout<<"Enter a number ";
   cin>> n;

        for(int row=1; row<=n; row=row+1)

        { //space
            for( int col=1; col<=n-row; col=col+1)
            {
                cout<<"  ";

            }
             //star
            for( int col= 1; col<= row; col=col+1)
            {   
                cout<< "*   " ;
            }

            cout<<endl;
        }

        cout<<"*                    Sandeep bhai chill                 *" <<endl;

        for( int row=n;row>=1; row=row-1)
        {    // print space
           for( int col=1 ; col<=n-row ; col=col+1 )
                {
                   cout<< "  " ;
                }
            // print star
            for(int col=1 ; col <= row ; col =col+1)

            {
                cout<< "*   ";
            }
               cout<< endl;
        }

        
        
}
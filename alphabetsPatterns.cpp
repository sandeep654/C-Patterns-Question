#include <iostream>
using namespace std;

int main()
{ /*
char name='a';
for(int row=1; row<=5; row=row+1)

{ name='a'+ (row-1);
for( int col=1; col<=row; col=col+1)
{
 cout<<name<<" ";

}
cout<<endl;
} */

    /*


    output:-
    a
    b b
    c c c
    d d d d
    e e e e e
*/
    char name = 'a';
    int n ;
    cout<<" Enter a number: ";
    cin>> n ;

    for (int row = 1; row <= n; row = row + 1)

    { // name='a'+ (row-1);

        for (int col = 1; col <= n - row; col = col + 1)

        {
            cout << "  ";
        }
        for (int col = 1; col <= row; col = col + 1)
        {
            name = 'A' + (col - 1);
            cout << name <<" " ;
        }
        cout << endl;
    }
}
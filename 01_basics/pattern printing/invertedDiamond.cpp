#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int space = 1;

    for(int i=1; i<=n; i++) 
    
    {
        for(int j=n-i+1; j>=1; j--) 
        {
            cout << "*";
        }
        for(int j=1; j<=space; j++)
        {
            cout << " ";
        }

        space+=2;

        for(int j=n-i+1; j>=1; j--) 
        {
            cout << "*";
        }
        cout << endl;
    }

    space = (n*2)-3;

    for(int i=n-1; i>=1; i--) 

    {
        for(int j=n-i+1; j>=1; j--) 
        {
            cout << "*";
        }
        for(int j=1; j<=space; j++)
        {
            cout << " ";
        }

        space-=2;
        
        for(int j=n-i+1; j>=1; j--) 
        {
            cout << "*";
        }
        cout << endl;
    }


    
    return 0;
}
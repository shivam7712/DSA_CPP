#include <iostream>
#include <string>

using namespace std;


bool isVovel(char ch)
{
    if(
        ch == 'a' || 
        ch == 'e' || 
        ch == 'i' || 
        ch == 'o' || 
        ch == 'u' || 
        ch == 'A' || 
        ch == 'E' || 
        ch == 'I' || 
        ch == 'O' || 
        ch == 'U'
    ) return true;
    return false;
}



int main()
{
    int n, k;
    cin >> n >> k;
    cin.ignore();
    string s;
    getline(cin, s);

    int count = 0;

    for(int i=0; i<k; i++)
    {
        if(isVovel(s[i])) count ++;
    }

    cout << count << " ";

    for(int i=k; i<n; i++)
    {
        if(isVovel(s[i])) count++;
        if(isVovel(s[i-k])) count--;
        cout << count << " ";
    }
    
    
}
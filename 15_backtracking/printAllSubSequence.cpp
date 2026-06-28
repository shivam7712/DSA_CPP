#include <iostream>
#include <vector>

using namespace std;

void printSequence(vector<int>& seq)
{
    for(int i: seq) cout << i << " ";
    cout << "\n";
}

void f(int i, vector<int>& orignal, vector<int>& seq)
{

    if(i == orignal.size()) 
    {
        if(!seq.empty())
        {
            printSequence(seq);
        }
        
        return;
    }
    //take
    seq.push_back(orignal[i]);
    f(i+1, orignal, seq);
    seq.pop_back();

    //not take

    f(i+1, orignal, seq);

}

int main()
{
    int n;
    cin >> n;

    vector<int> orignal(n);
    vector<int> seq;

    for(int i=0; i<n; i++)
    {
        cin >> orignal[i];
    }

    f(0, orignal, seq);
    
}
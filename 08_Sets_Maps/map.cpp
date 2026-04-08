#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> ages;

    ages["Shivam"] = 21;
    cout << ages["Shivam"];
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cin >> n;
    
    cout << n*(n-1)*(n-2)*(n-3)/24;
    
    return 0;
}
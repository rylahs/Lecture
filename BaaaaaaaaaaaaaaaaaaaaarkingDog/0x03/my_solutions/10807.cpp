#include <bits/stdc++.h>
using namespace std;

int arr[202];
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        arr[input + 100]++;
    }
    
    int findNumber;
    cin >> findNumber;
    
    cout << arr[findNumber + 100] << "\n";
    
    
    return 0;
}
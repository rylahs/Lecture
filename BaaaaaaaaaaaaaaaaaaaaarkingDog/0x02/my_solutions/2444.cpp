#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = n - i; j > 0; j--)
		{
			cout << " ";
		}
		for (int j = 1; j <= 2 * i - 1; j++)
			cout << "*";
		cout << "\n";
	}

	for (int i = n - 1; i >= 1; i--)
	{
		for (int j = n - i; j > 0; j--)
		{
			cout << " ";
		}
		for (int j = 1; j <= 2 * i - 1; j++)
			cout << "*";
		cout << "\n";
	}


	return 0;
}
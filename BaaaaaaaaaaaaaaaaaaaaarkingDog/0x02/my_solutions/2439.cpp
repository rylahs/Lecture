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
			cout << " ";
		for (int j = 0; j < i; j++)
			cout << "*";

		cout << "\n";
	}

	return 0;
}
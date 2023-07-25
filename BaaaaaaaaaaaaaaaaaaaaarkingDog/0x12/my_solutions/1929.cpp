#include <bits/stdc++.h>
using namespace std;

vector<int> prime_number_solve(int m, int n) 
{
	vector<int> res;
	vector<bool> isPrime(n + 1, true);
	isPrime[1] = false;

	for (int i = 2; i * i <= n; i++)
	{
		if (!isPrime[i])
			continue;

		for (int j = i * i; j <= n; j += i)
			isPrime[j] = false;
	}

	for (int i = m; i <= n; i++)
		if (isPrime[i])
			res.emplace_back(i);

	return res;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int m, n;
	cin >> m >> n;

	vector<int> ans = prime_number_solve(m, n);

	for (auto& e : ans)
	{
		if (e < m) continue;
		cout << e << "\n";
	}
	return 0;
}
#include <bits/stdc++.h>

using namespace std;

void func1() {
	// 128���� ���� hi�� ��� �ϴ� �Լ� (OverFlow)
	for (char s = 0; s < 128; s++) {
		cout << "hi " << s << "\n";
	}
}

int func2() {
	// 50!�� 61�� ���� �������� ��ȯ�ϴ� �Լ�
	int r = 1;
	for (int i = 1; i <= 50; i++) {
		r = r * i % 61;
	}
	return r;
}
int func3() {
	// Overflow
	// 10�� 10 �ŵ������� 1000000007�� ���� �������� ��ȯ�ϴ� �Լ�
	int a = 10;
	int mod = 1000000007;

	for (int i = 0; i < 10; i++)
		a = 10 * a % mod;
		//a = 10ll * a % mod;

	return a;
	
}
int main(void)
{

	int r = func2();
	cout << r << "\n";

	int k = func3();
	cout << k << "\n";
}
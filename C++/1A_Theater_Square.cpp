#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
	long long int n, m , a;

	cin >> n >> m >> a;

	long long int l = (n + a - 1) / a;
	long long int w = (m + a - 1) / a;
	cout << w*l;
	return 0;
}
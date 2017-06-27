#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
	int c, v0, v1, a, l;
	cin >> c >> v0 >> v1 >> a >> l;

	int p = v0, day = 1;
	int s = v0 ;
	while(p < c) {
		s = min(v1, s + a);
		p += s;
		p -= l;
		++day;
	}

	cout << day << endl;
}
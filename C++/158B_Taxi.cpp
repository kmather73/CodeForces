#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
	int n, tmp;
	cin >> n;
	int counts[4] {0,0,0,0};
	while(n--){
		cin >> tmp;
		++counts[tmp-1];
	}

	int a = min(counts[0], counts[2]);
	counts[0] -= a;
	counts[2] -= a;

	int b = counts[1] / 2;
	counts[1] -= 2*b;

	int c = min(counts[1] , (1+counts[0])/2);
	counts[0] -= 2*c;
	counts[1] -= c;

	int d = (counts[0]  + 3) / 4;
	int ans = a + b + c + d + counts[1] + counts[2] + counts[3];
	
	cout << ans << endl;
	return 0;
}
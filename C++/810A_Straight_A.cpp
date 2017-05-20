#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
	int n, k;
	cin >> n >> k;
	int marks = 0, tmp=0;

	for(int i=0; i<n; ++i){
		cin >> tmp;
		marks += tmp;
	}

	int m =0;
	while(round((marks+0.0) / n) < k-0.0001) ++m, ++n, marks += k;


	cout << m << endl;;
	return 0;
}
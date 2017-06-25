#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
	long long int m,b;
	cin >> m >> b;

	long long int count = 0;

	
	for(long long int x = 0; x < m*b; ++x){
		long long int y = b - x/m;
		if(x%m != 0) --y;
		long long int bann = (x+1)*(y+1)*(x+y)/2;
		count = max(count, bann);
	}
	

	for(long long int y = b; y >= 0; --y){
		long long int x = m*(b-y);
		long long int bann = (x+1)*(y+1)*(x+y)/2;
		count = max(count, bann);
	}

	cout << count << endl;
}
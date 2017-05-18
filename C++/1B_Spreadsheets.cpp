#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

string row2excel(const string &s){
	string t;
	long long int r = 0, i=1, n=s.size();
	
	while (s[i] != 'C') {
		r = 10*r + s[i]-'0';
		++i;
	}

	++i;

	long long int c = 0;

	while (i < n){
		c = 10LL*c + s[i]-'0';
		++i;
	}

	string col = "";
	string row = std::to_string(r);
	string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while(c > 0) {
		long long int rem = (c-1) % 26LL;
		c = (c-1) / 26LL;
		col = alpha[rem] + col;
	}

	return col + row;
}

string excel2row(const string &s){
	long long int r=0, i=0, n=s.size();
	
	while (s[i] >= 'A' && s[i] <= 'Z'){
		r = r*26 + s[i]-'A'+1;
		++i;
	}
	
	string row = "R" + s.substr(i);
	string col = "C" + std::to_string(r);
	return row + col;
}

int main(int argc, char const *argv[]) {
	int n;
	string s;
	cin >> n;


	while(n--){
		cin >> s;

		if(s[0] == 'R' && s[1] >= '1' && s[1] <= '9' && (1 < s.find('C') && s.find('C') < s.size() - 1)) {
			cout << row2excel(s) << endl;
		} else {
			cout << excel2row(s) << endl;
		}
	}
	
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool isUpper(char ch){
	return ch >= 'A' && ch <= 'Z';
}

bool capsLockOn(string& str){
	bool on = true;
	for(int i=1; i<str.size(); ++i) {
		on = on && isUpper(str[i]);
	}

	return on;
}

int main(int argc, char const *argv[]) {
	string str;
	cin >> str;

	if(capsLockOn(str)){
		bool allCaps = isUpper(str[0]);
		transform(str.begin(), str.end(), str.begin(), ::tolower);
		
		if(!allCaps) str[0] = toupper(str[0]);
	}

	cout << str << endl;
	return 0;
}
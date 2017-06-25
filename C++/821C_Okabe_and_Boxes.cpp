#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
	int n, num, last = 10E6;
	cin >> n;
	vector<int> boxs;
	boxs.reserve(n);

	string str;
	set<int> bb;
	int remove = 1, count = 0, n2 = n*2;
	int size = 0;
	bool sorted = true;
	for(int i=0; i<n2; ++i){
		cin >> str;
		if(str[0] == 'a'){
			cin >> num;
			bb.insert(num);

			if(size == 0){
				sorted = true;
			} else {
				sorted = sorted && last >= num;
			}
			
			last = num;
			++size;

		} else {

			bb.erase(bb.begin());

			if(!sorted && last == remove){
				if(bb.size() > 0) last = *bb.rbegin();
			} else {
				if( !sorted ) {
					++count;
					sorted = true;
				}

				if(bb.size() > 0) last = *bb.begin();
			}
			++remove;
			--size;
		}
	}

	cout << count << endl;

}
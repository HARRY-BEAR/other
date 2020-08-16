#include<bits/stdc++.h>
using namespace std;
int main() {
	int boy = 0, girl = 0;
	string str;
	cin >> str; 
	str += ".......";
	for (int i = 0; i <= str.length()-4; i++) {
		if (str[i] == 'b' || str[i + 1] == 'o' || str[i + 2] == 'y') boy++; 
		if (str[i] == 'g' || str[i + 1] == 'i' || str[i + 2] == 'r' || str[i + 3] == 'l') girl++; 
	}
	cout << boy << endl << girl;
	return 0;
}
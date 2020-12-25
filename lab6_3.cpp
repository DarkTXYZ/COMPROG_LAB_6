#include<iostream>
using namespace std;

char before(char x){
	if(x < 'A' or x > 'Z')
		return '0';
	x -= 1;
	if(x < 'A')
		x += 26;
	return x;
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}

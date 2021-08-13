#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	
	/*
	 * Declaration:
	 * string a = "abc";
	 *
	 * Size:
	 * int len = a.size();
	 * 
	 * Concatenate two strings:
	 * string a = "abc";
	 * string b = "def";
	 * string c = a + b; // c = "abcdef".
	 * 
	 * Accessing  i^th element:
	 * string s = "abc";
	 * char  c0 = s[0];   // c0 = 'a'
	 * char  c1 = s[1];   // c1 = 'b'
	 * char  c2 = s[2];   // c2 = 'c'
	 * s[0] = 'z';         // s = "zbc"
	 * */
	
	string a, b;
    	cin>>a;
    	cin>>b;
    	char temp;
   	temp = a[0];

    	cout<<a.size()<<" "<<b.size()<<endl;

   	cout<<a<<b<<endl;

    	a[0] = b[0];
    	b[0] = temp;

    	cout<<a<<" "<<b<<endl;

	return 0;
}

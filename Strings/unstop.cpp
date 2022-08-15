
#include <bits/stdc++.h>
using namespace std;
void moveAtEnd(string s, int i, int l)
{
    cout<<i<<" ";
	if (i >= l)
		return;
	char curr = s[i];
	if (curr != 'x')
		cout << curr;
	moveAtEnd(s, i + 1, l);
    
    cout<<i<<" ";
	if (curr == 'x')
		cout << curr;
	return;
}

// Driver code
int main()
{
	string s = "pxixe";
	int l = s.length();
    cout<<l; 
	moveAtEnd(s, 0, l);
	return 0;
}

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t, max, min;
	vector <string> s1;
	vector <string> s2;
	string a, b;
	cin >> t;
	for(int i=0; i<t; i++){
	     cin >> a;
	     s1.push_back(a);
	     cin >> b;
	     s2.push_back(b);
	}
	int s;
	for(int i=0; i<t; i++){
	    s = s1[i].size();
	    for(int j=0; j<s; j++){
	        if(s1[i][j]=='?'||s2[i][j]=='?')
	            max++;
	        else if(s1[i][j]!=s2[i][j]){
	            min++;
	            max++;
	        }
	    }
	    cout << min << " " << max << "\n";
	    max=0;
	    min=0;
	}
	return 0;
}

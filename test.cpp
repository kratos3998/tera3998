#include <bits/stdc++.h>
using namespace std;

int main(){
	cout<<1<<endl;;
	vector<string> vec;
	vec.push_back("done");
	cout<< vec.size()<< " "<<vec[vec.size()-1]<<endl;

	stack<int> s;
	s.push(2);
	s.push(3);
	cout<<s.top();

	return 0;
}
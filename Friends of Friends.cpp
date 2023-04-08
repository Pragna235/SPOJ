#include <iostream>
#include<set>
using namespace std;

int main() {
	// your code goes here
	int n,f,m;
	cin>>n;
	set<int> s;
	for(int i=0;i<n;i++){
		cin>>f>>m;
		s.insert(f);
		for(int i=0;i<m;i++){
			cin>>f;
		s.insert(f);
		}
	}
	cout<<s.size()-n<<endl;
	return 0;
}

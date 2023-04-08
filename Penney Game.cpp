#include<bits/stdc++.h>
using namespace std;
int cnt[8];
int main() {
	// your code goes here
	int test;
	scanf("%d",&test);
	while(test--){
		int n,i,x;
		scanf("%d",&n);

		for(i=0;i<8;i++)
		cnt[i]=0;
		char str[41];
		scanf("%s",str);
		map<char,int> seq;
		seq['H']=1;
	    seq['T']=0;
	    for(i=0;i<38;i++){
	    	int x=seq[str[i]];
	    	int y=seq[str[i+1]];
	    	int z=seq[str[i+2]];
	    	cnt[z+2*y+4*x]++;
	    }
	    printf("%d",n);
	    for(i=0;i<8;i++)
	    printf("%d ",cnt[i]);
	    printf("\n");
	}

	return 0;
}

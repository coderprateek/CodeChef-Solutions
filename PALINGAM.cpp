#include <iostream>
#include<vector>
using namespace std;
 
int main() {
	int f;
	cin>>f;
	while(f>0){
		string s,t;
		cin>>s>>t;
		vector<int> a(26, 0);
		vector<int> b(26, 0);
		vector<int> c(26);
		int n= s.length();
		for(int i=0;i<n;i++){
			a[s[i]-97]++;
			b[t[i]-97]++;
		}
		int g=0,h=0;
		int y=0;
		int z=0;
		if(n>1){
		for(int i=0;i<26;i++){
			if(a[i]>=2 && b[i]==0){
				z=1;
				break;
			}
			else{
				if(b[i]==n && a[i]>=1 && a[i]!=n){
					z=1;
				}
				else{
				 z=0;
				}
			}
			if(b[i]>0 && a[i]>0){
			g=g+b[i];
			h=h+a[i];
			}
		}
			if(g==n && h>0 && h!=n){
				z=1;
			}
		}
		else{
			z=0;
		}
		if(z==1){
			cout<<"A"<<endl;
		}
		if(z==0){ 
			cout<<"B"<<endl;
		}
		f--;
	}
	
	return 0;
}  
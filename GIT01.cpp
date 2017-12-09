#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t>0){
   	int m,n;
   	cin>>n>>m;
   	string a[n];
   	for(int i=0;i<n;i++){
   		cin>>a[i];
   		}
   		int asum=0,bsum=0;
   			for(int i=0;i<n;i++){
   				for(int j=0;j<m;j++){
   					int k=i+j;
   					if(k%2==0){
   						if(a[i][j]=='R'){
   							continue;
   						}
   						else{
   							asum=asum+3;
   						}
   					}
   					else{
   						if(a[i][j]=='G'){
   							continue;
   						}
   						else{
   							asum=asum+5;
   						}	
   					}
   				}
   			}
   		
   	
   			for(int i=0;i<n;i++){
   				for(int j=0;j<m;j++){
   					int k=i+j;
   					if(k%2==0){
   						if(a[i][j]=='G'){
   							continue;
   						}
   						else{
   							bsum=bsum+5;
   						}
   					}
   					else{
   						if(a[i][j]=='R'){
   							continue;
   						}
   						else{
   							bsum=bsum+3;
   						}	
   					}
   				}
   			}
   			if(asum>=bsum){
   				cout<<bsum<<endl;
   			}
   			else{
   				cout<<asum<<endl;
   			}
   				
   		
   	t--;
   }
	return 0;
}
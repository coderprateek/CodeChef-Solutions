#include <iostream>
using namespace std;
 
int main() {
int t;
cin>>t;
while(t>0){
	float n,v1,v2;
	cin>>n>>v1>>v2;
	float d=1.414;
	if(n*d/v1 > 2*n/v2){
		cout<<"Elevator"<<endl;
	}
	if(n*d/v1 < 2*n/v2){
		cout<<"Stairs"<<endl;
	}
	t--;
}
	return 0;
} 
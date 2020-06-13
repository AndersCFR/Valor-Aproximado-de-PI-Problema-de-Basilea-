#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int a=0,b=0,c=0;
	cout << "Dame a:"<<endl;
	cin>>a;
	cout << "Dame b:"<<endl;
	cin>>b;
	cout << "Dame c:"<<endl;
	cin>>c;
	
	if( a <= c or b <= c){
		if(c%a==0){
			cout<<a<<" es múltiplo de "<<c<<endl;
		}
		if(c%b==0){
			cout<<b<<" es múltiplo de "<<c<<endl;
		}
	}else if(a <= b or c <= b){
		if(b%a==0){
			cout<<a<<" es múltiplo de "<<b<<endl;
		}
		if(b%c==0){
			cout<<c<<" es múltiplo de "<<b<<endl;
		}			
	}else if(b <= a or c <= a){
		if(a%b==0){
			cout<<b<<" es múltiplo de "<<a<<endl;
		}
		if(a%c==0){
			cout<<c<<" es múltiplo de "<<a<<endl;
		}	
	}
	return 0;
}

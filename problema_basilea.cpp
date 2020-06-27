#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float epsilon=0, pij=0, pijanterior=0, abs_diferencia_pij=0;
	float sum_superior=1, sumatorio=0;
	bool flag=false; 
	cout<<"Ingresa epsilon: \n"<<endl;
	cin>>epsilon;
	
	while(flag == false){
		cout<<"\n\nNueva iteracion"<<endl;
		for(int i=1; i<=sum_superior; i++){
			sumatorio+=(6/(pow(i,2)));
		}
		pij = sqrt(sumatorio);
		cout<<"---pij \t"<<pij<<endl;
		cout<<"---pijanterior \t"<<pijanterior;
		abs_diferencia_pij=abs(pij-pijanterior);
		cout<<"\ndiferencia absoluta \t"<<abs_diferencia_pij;
		if(abs_diferencia_pij < epsilon){
			flag=true;
		}else{
			pijanterior=pij;
			pij=0;
			sumatorio=0;
			sum_superior++;
		}
	}
	cout<<"\n Considerando el error el valor aproximado de pi aproximado es: "<<pij;

	return 0;
}

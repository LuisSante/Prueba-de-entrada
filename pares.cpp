#include<iostream>

void pares(int n){
	int i=1,j=0;
	std::cout<<"Sin considerar el 0= ";
	for(;i<=n;i++){
		std::cout<<i*2<<" ";
	}
	
	std::cout<<std::endl;
	
	std::cout<<"Considerando el 0= ";
	for(;j<n;j++){	
		std::cout<<j*2<<" ";
	}
}
int main(){
	int n=5;
	pares(n);
}



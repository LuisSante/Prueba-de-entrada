#include<iostream>

int main(){
	int n=14,c=0;
	int contador_primos=0;
	int numero_primos=2;
	//std::cout<<"digite numero: ";std::cin>>n;
	while(n>contador_primos){
		c=0;
		for(int i=1;i<=numero_primos;i++){
			if(numero_primos%i==0){
				c++;
			}
		}
		if(c==2){
			std::cout<<numero_primos<<" ";
			contador_primos++;
		}
		numero_primos++;
	}	
}


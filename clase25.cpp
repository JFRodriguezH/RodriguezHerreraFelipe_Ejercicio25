#include <iostream>

int rellenar(int **M);

int main(){
    int x;
	bool c = true;
	while(c){
	    std::cout<<"Escriba un numero de 3 a 11: "<<std::endl;
		std::cin>> x;
		if(x>=3 && x<=11){
			c=false;
		}else{
			std::cout<<"Error, el numero no esta entre 3 y 11."<<std::endl;
		}	
    }
    int M[x][x+2];
	for(int i=0; i<x; i++){
		for(int j=0; j<(x+2); j++){
			M[i][j]=i+j;
		}
	}
	std::cout<<M[1][2]<<std::endl;
    return 0;
}

int rellenar(int **M){
	M[0][0] = 1;
	return 0;
}
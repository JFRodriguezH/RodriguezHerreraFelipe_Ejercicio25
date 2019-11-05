#include <iostream>

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
    int m[x][x+2]{};
	rellenar(m);
	std::cout<<m[0][0];
    return 0;
}

int rellenar(int **m){
	m[0][0] = 1;
	return 0;
}
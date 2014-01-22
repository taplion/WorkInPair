#include <iostream>
int printTab(int* tab, int size){
    for(int i=0;i<size;i++){
        std::cout<<"tab["<<i<<"] = "<<tab[i]<<", ";
    }
    std::cout<<std::endl;
}

int sum(int* tab, int size){
	int sumA=0;
	 for(int i=0;i<size;i++){
	sumA+=tab[i];

				}
return sumA;
}

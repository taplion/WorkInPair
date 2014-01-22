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
int* generator(){
    int tab=new tab[10];
    for(int i=0;i<10;i++){
        tab[i]=rand()%101;
    }
    return &tab;
}
int min(int *tab, int size){
int temp=tab[0];
for(int i=0; i<size;i++){
if(temp>tab[i]){
temp=tab[i];
}
return temp;
}
int max(int* tab, int size){
    int max=0;
    for(int i=0;i<size;++i){
    max=max<tab[i]?tab[i];
    }
    return max;
}

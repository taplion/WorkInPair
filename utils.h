#include <iostream>
int printTab(int* tab, int size){
    for(int i=0;i<size;i++){
        std::cout<<"tab["<<i<<"] = "<<tab[i]<<", ";
    }
    std::cout<<std::endl;
}

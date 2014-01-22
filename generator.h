#include <cstdlib>
int* generator(){
    int tab=new tab[10];
    for(int i=0;i<10;i++){
        tab[i]=rand()%101;
    }
    return &tab;
}

#include <cstdlib>
int* generator(){
    int tab [10];
    for(int i=0;i<9;i++){
        tab[i]=rand()%101;
    }
    return tab;
}

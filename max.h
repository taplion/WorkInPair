int max(int* tab, int size){
    int max=0;
    for(int i=0;i<size;++i){
    max=max<tab[i]?tab[i];
    }
    return max;
}

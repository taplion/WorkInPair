int min(int *tab, int size){
int temp=tab[0];
for(int i=0; i<size;i++){
if(temp>tab[i]){
temp=tab[i];
}
return temp;
}

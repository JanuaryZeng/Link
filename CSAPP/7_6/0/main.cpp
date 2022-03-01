void swap(int i1, int i2){
    i1 = i1+i2;
}
void swap(int i1, int i2, int i3){
    i3 = i1;
}

int main(){
    swap(1,2,3);
    swap(1,2);
    return 0;
}

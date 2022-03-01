void swap(int i1, int i2){
    i1 = i1+i2;
}
void swap(int i1, int i2, int i3){
    i3 = i1;
}
class C{
int cc;
};

class D{
int *dd;
};

class E{
public:
E(int val):ee(val), eeptr(&ee){
}
int ee;
int *eeptr;
};

int *a;
int b;
C c;
D d;
//E e(1);
//int f = 0;

int main(){
    swap(1,2,3);
    swap(1,2);
    return 0;
}

int mulrcnt = 0;

void multvec(int *x, int *y, int *z, int n){
 int i;
 mulrcnt++;
 for(int i = 0; i < n; i++)
         z[i] = x[i] * y[i];
}


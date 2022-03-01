# C++ 重载对于函数符号的重整策略

```c++
void swap(int i1, int i2){
    i1 = i1+i2;
}
void swap(int i1, int i2, int i3){
    i3 = i1;
}
```

.o文件中显示为：

```shell
Symbol table '.symtab' contains 11 entries:
   Num:    Value          Size Type    Bind   Vis      Ndx Name
     0: 0000000000000000     0 NOTYPE  LOCAL  DEFAULT  UND 
     1: 0000000000000000     0 FILE    LOCAL  DEFAULT  ABS main.cpp
     2: 0000000000000000     0 SECTION LOCAL  DEFAULT    1 
     3: 0000000000000000     0 SECTION LOCAL  DEFAULT    3 
     4: 0000000000000000     0 SECTION LOCAL  DEFAULT    4 
     5: 0000000000000000     0 SECTION LOCAL  DEFAULT    6 
     6: 0000000000000000     0 SECTION LOCAL  DEFAULT    7 
     7: 0000000000000000     0 SECTION LOCAL  DEFAULT    5 
     8: 0000000000000000    19 FUNC    GLOBAL DEFAULT    1 _Z4swapii
     9: 0000000000000013    22 FUNC    GLOBAL DEFAULT    1 _Z4swapiii
    10: 0000000000000029    46 FUNC    GLOBAL DEFAULT    1 main

```


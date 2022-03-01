# 使用ar命令生成.a静态库

```shell
gcc- c addvector.c mulvec.c
ar rcs libvector.a addvec.o multvec.o
```

以下命令使用静态库

```shell
gcc -c main2.c 
gcc -static -o prog2c main2.o ./libvector.a 
```

![](./链接图.png)
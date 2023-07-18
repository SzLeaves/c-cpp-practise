# C++指针

计算机在存储程序时必须了解的三个属性：
* 信息存储在何处（变量的地址）
* 存储的信息是什么类型（变量的类型）
* 存储的值是多少（变量的值）

对于普通变量：`[type] [variable_name] = [variable_values]`  
这个声明语句指出了变量的类型，变量名称和变量的值  
编译器会根据**变量的类型和值**自动分配内存，并在内部跟踪对应的内存单元（变量的地址）  
如果需要访问变量的地址，可以使用`&`取地址符：`&[variable_name]`  


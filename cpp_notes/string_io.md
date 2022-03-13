# 字符串和字符串输入/输出

## C-Style类型字符串（`char`数组）
形式：`char str[int:length] = "..."`  
在内存中是连续字节中的一系列字符，以空字符`'\0'`结尾  
> 本质上字符数组是这样组成字符串的（例如`"hello"`）：  
> `char str[6] = {'h', 'e', 'l', 'l', 'o' '\0'};  `  
> 但是一般都这么写： `char str[6] = "hello"`  

**特点**：具有数组的一切特性，字符串名称代表字符串中首元素的地址  
每个字符串都以空字符结尾，注意字符串的实际长度要比需求长度至少多一位（存储空字符）
* 初始化：`char str[int:length] = "..."`  
* 计算长度：使用`strlen()`（计算字符串长度直到空结束字符，**但不包括空结束字符**）
* 比较：**不能直接用`==`比较**，与另一个字符数组比较可以用`strcmp()`
* 拼接：使用`strcat(char *target, char *src)`（把s`src`拼接到`targer`的**末尾**）
* 赋值：**不能直接使用变量的方法赋值**  （直接使用`=`会把字符串首字符地址赋给变量）  
  拷贝给另外一个字符数组可以使用`strcpy()`或`strncpy()`

## `string`类
C++库的拓展类，使用时需要包含`#include <string>`  
`string`位于`std`中，需要使用`using namespace std`或使用`std::string`  
```cpp
using namespace std;

// 声明变量
string str;

// 可以使用cin/cout输入/输出string类字符串
cout << "Enter a string: ";
cin >> str;
cout << str << endl;

// 可以使用下标方式访问string元素
cout << "third letter: " << str[2] << endl;
```

* 初始化：`std::string str_name = "..."`

* 赋值：`string`类变量是标识字符串的实体，可以使用`=`给`string`变量赋值  
```cpp
string str = "hello";
string str2 = str;
```

* 拼接：可以使用`+`和`+=`把字符串连接起来
```cpp
string str = "world"
string str2 = str + "hello"
// 等同于str = str + str2
str += str2
```

* 计算长度：`str.size()`，返回一个整数值  
* 比较：直接使用`==`：`str1 == str2`


## 字符串I/O
* 未被初始化的`char`数组，内容是未定义的，空字符的出现位置也是随机的  
  对这样的数组使用`strlen()`计算长度可能是不一样的  
* 未被初始化的`string`对象，长度将被自动设置为0
* 对于`char`数组，读取一行时使用`cin.getline()`  
  对于`string`，读取一行时使用`getline()`
```cpp
// string使用的getline()
string str {};
getline(cin, str);  // 参数：std::istream &__is, std::string &__str
cout << str << endl << endl;

// 与字符串数组使用比较: cin.getline()
char cstr[20] {};
cin.getline(cstr, 20);  // 参数：char *__s, std::streamsize __n
cout << cstr << endl;
```

## 1. 复习题

### 1.1. 为什么C++有多种整型？

可以根据特定需求选择合适的类型。

### 1.2. 声明与下述描述相符的变量。

| 序号 | 说明                        | 代码                           |
| ---- | --------------------------- | ------------------------------ |
| a    | short整数，值为80           | short sdata = 80;              |
| b    | unsigned int整数，值为42110 | unsigned int idata = 42110;    |
| c    | 值为3000000000的整数        | long long lldata = 3000000000; |

### 1.3. C++提供了什么措施来防止超出整型的范围？

==C++没有提供自动防止超出整型限制的功能，可以使用头文件 climits来确定限制情况。==

### 1.4. 33L与33之间有什么区别？

33L是long,33是int

### 1.5. 下面两条C++语句是否等价？

- char grade = 65;
- char grade = 'A';

==这两条语句并不真正等价，虽然对于某些系统来说，它们是等 效的。最重要的是，只有在使用ASCII码的系统上，第一条语句才将得 分设置为字母A，而第二条语句还可用于使用其他编码的系统。其次， 65是一个int常量，而‘A’是一个char常量。==

### 1.6. 如何使用C++来找出编码88表示的字符？指出至少两种方法。

1. `std::cout << static_cast<char>(88) << std::endl;`
2. `std::putchar(88);`
3. `std::cout << char (88) << std::endl;`
4. `std::cout << (char) 88 << std::endl;`

### 1.7.将long值赋给float变量会导致舍入误差，将long值赋给double变量呢？将long long值赋给double变量呢？

取决于long的有效数字个数。double最小有效数字个数为15个。long



### 1.8.下列C++表达式的结果分别是多少？

| 序号 | 代码    | 结果 |
| ---- | ------- | ---- |
| a    | 8\*9+2  | 74   |
| b    | 6\*3/4  | 4    |
| c    | 3/4\*6  | 0    |
| d    | 6.0\*/4 | 1.5  |
| e    | 15%4    | 3    |



### 1.9. 假设x1和x2是两个double变量，您要将它们作为整数相加，再 将结果赋给一个整型变量。请编写一条完成这项任务的C++语句。如果 要将它们作为double值相加并转换为int呢？

```c++
#include <iostream>
#include <cmath>

int main(void){
    double x1, x2;
    int out;
    out = (int)x1 + (int)x2;
    std::cout << "(int)x1 + (int)x2 = " << out << std::endl;
    out = (int)(x1 + x2);
    std::cout << "x1 + x2 = " << out << std::endl;
}
```

### 1.10. 下面每条语句声明的变量都是什么类型？

| 序号 | 命令                       | 说明                   |
| ---- | -------------------------- | ---------------------- |
| a    | auto cars = 15;            | int                    |
| b    | auto iou = 150.37f;        | float                  |
| c    | auto level = 'B';          | char                   |
| d    | auto crat = U'/U00002155'; | ~~wchar~~ ==char32_t== |
| e    | auto fract = 8.25f/2.5;    | double                 |

## 2. 编程练习
输入运算符（>>）与输出运算符类似，它接受
一个istream作为其左侧运算对象，接受一个对象作为其右侧运算对象。
它从给定的istream读入数据，并存入给定对象中。

<<运算符接受两个运算对象：左侧的运算对象必须是一个ostream
对象，右侧的运算对象是要打印的值。此运算符将给定的值写到给定的
ostream对象中。输出运算符的计算结果就是其左侧运算对象。即，计算
结果就是我们写入给定值的那个ostream对象。

endl，这是一个被称为操纵符（manipulator）的
特殊值。写入endl的效果是结束当前行，并将与设备关联的缓冲区
（buffer）中的内容刷到设备中。缓冲刷新操作可以保证到目前为止程
序所产生的所有输出都真正写入输出流中，而不是仅停留在内存中等待
写入流。

c++中有命名空间namespace的概念，用来避免不经意的名字冲突。标准库定义的所有名字都在一个名为std的命名空间中

::是作用域运算符，用来说明说明我们想使用来自命名空间std中的名字

当使用一个istream对象作为条件时，其效果是检测流的状态。

在Windows系统中，输入文件结束符的方法是敲Ctrl+Z（按住Ctrl键的同时按Z
键），然后按Enter或Return键。

标准库头文件通常不带后缀。

引用本身不是对象

const对象一旦创建就不能改变，所以要初始化

vscode中快速注释：先按CTRL+K，然后CTRL+C注释选中代码，CTRL+U取消注释

使用cin来终止循环时，如while(std::cin>>x)，cin会忽略空格或者enter，因此，enter后不会结束循环，只能ctrl+Z，但这样之后会无法再使用cin。想要用enter并解决这个问题，循环中要加一句if (cin.get() == '\n') break;。

typedef char *pstring;  pstring是char*的同义词
const pstring cstr = 0;  cstr是指向char类型的常量指针
const char *cstr = 0;  cstr是指向const char类型的指针

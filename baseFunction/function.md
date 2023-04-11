每次读取一行字符串输入，以回车键输入的换行符来确定输入结尾：cin.getline(数组名称name，读取的字符数n)；最多读取的字符数为n - 1，因为最后补充'\0'.丢弃换行符
cin.get(数组名称name，读取的字符数n)；保留换行符；
string类属于std命名空间；可以自动的处理string字符串的大小；
char charr[20];
char charr2[20] = "jaguar";
string str1;
string str2 = "panther";
charr1 = charr2;                //无效输入
str1 = str2;
sizeof运用于数组名时，返回整个数组的长度
sizeof计算指针名时,返回值与计算机的位数相关，32位返回4，64位返回8
strlen计算字符串的长度不包含"\n"，但是sizeof计算整个字符串存储空间的长度，包含"\n";
cout.setf 是 C++ 中的一个函数，用于设置输出流 cout 的格式化标志。这些标志控制着输出流中的一些属性，如数字的基数、小数点后的位数、对齐方式等。

例如，cout.setf(ios::hex) 会将 cout 输出流的基数设置为十六进制，这意味着所有后续输出的整数都将以十六进制形式显示。
下面是一些常用的格式化标志：
ios::dec：十进制数（默认）
ios::hex：十六进制数
ios::oct：八进制数
ios::showbase：显示数字的进制（例如，0x 表示十六进制，0 表示八进制）
ios::showpoint：显示小数点
ios::fixed：显示小数点后的固定位数
ios::scientific：使用科学计数法表示浮点数
ios::left：左对齐
ios::right：右对齐
ios::setw(n)：设置输出宽度为 n 个字符（默认右对齐）
ios::setprecision(n)：设置小数点后显示的位数为 n 位（默认为 6 位）
使用 cout.setf 函数可以方便地修改这些标志，以控制输出流的格式。需要注意的是，这些标志是针对整个流而言的，因此一旦设置了某个标志，后续的所有输出都将受到影响。如果需要恢复默认设置，可以使用 cout.unsetf(ios::...) 函数。


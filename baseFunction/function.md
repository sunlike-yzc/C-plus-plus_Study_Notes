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

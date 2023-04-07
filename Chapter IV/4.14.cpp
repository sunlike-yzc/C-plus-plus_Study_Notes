#include <stdio.h>

// 定义一个结构体，用于表示一个网络数据包的头部
struct PacketHeader {
  unsigned int version : 4;   // 版本号（4位）
  unsigned int length : 12;   // 数据包长度（12位）
  unsigned int type : 8;      // 数据包类型（8位）
  unsigned int flags : 4;     // 数据包标志（4位）
};

int main() {
  // 创建一个数据包头部实例
  struct PacketHeader header = { 0 };

  // 设置版本号为1
  header.version = 1;

  // 设置数据包长度为1024
  header.length = 1024;

  // 设置数据包类型为2
  header.type = 2;

  // 设置数据包标志为0b1010
  header.flags = 0b1010;

  // 输出数据包头部的各个成员的值
  printf("Version: %d\n", header.version);
  printf("Length: %d\n", header.length);
  printf("Type: %d\n", header.type);
  printf("Flags: %d\n", header.flags);

  return 0;
}

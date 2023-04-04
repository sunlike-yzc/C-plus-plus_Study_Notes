git操作学习网址：https://mp.weixin.qq.com/s/Bf7uVhGiu47uOELjmC5uXQ

##### 查询Linux系统中文件颜色分别代表什么？

（1）绿色文件：可执行文件，可执行程序

（2）红色文件：压缩文件或者包文件

（3）蓝色文件：目录

（4）白色文件：一般性文件，如文本文件，配置文件，源码文件等

（5）浅蓝色文件：链接文件，主要是使用in命令建立的文件

（6）红色闪烁：表示链接文件有问题

（7）黄色：表示设备文件

（8）灰色：表示其他文件

##### Git配置

查看配置 git config -l

查看不同级别的配置文件：

```c
#查看系统config
git config --system --list
　　
#查看当前用户（global）配置
git config --global  --list
```

##### Linux下「-」和「--」的理解

```c
ls -a
ls -al
git -v
git --help
mysql -V
mysql --version
```

「-」是在传统的UNIX风格中使用的；
「- -」是后面GNU风格中使用的；

后面一般接缩写，-- 后面一般接全拼

##### 配置环境变量

是一种存储在操作系统中的值，它们用于指示应用程序或系统如何运行或寻找资源。给程序提供一个完整的路径；

方便在任何路径下使用，不必重复写路径

##### Git操作

第一种方式：

创建全新的仓库，需要用GIT管理的项目的根目录执行：

````c
# 在当前目录新建一个Git代码库
$ git init
````

执行后可以看到，仅仅在项目目录多出了一个.git目录，关于版本等的所有信息都在这个目录里面。

第二种方式：

```c
git clone url
```

##### git文件有4种状态，通过如下命令可以查看到文件的状态

```
#查看指定文件状态git status [filename]
#查看所有文件状态git status
# git add .                  添加所有文件到暂存区
# git commit -m "本次提交注释"    提交暂存区中的内容到本地仓库 -m 提交信息
```

IDEA中集成Git

1.新建项目，绑定Git

将远程的Git拷贝到项目中，或者直接git clone远程项目

2.修改文件Git操作

- 添加到暂存区 git add .
- commit提交
- push到远程仓库

##### GIT分支
分支在GIT中相对较难，分支就是科幻电影里面的平行宇宙，如果两个平行宇宙互不干扰，那对现在的你也没啥影响。不过，在某个时间点，两个平行宇宙合并了，我们就需要处理一些问题了！

![image-20230404113533896](C:\Users\SunLike\AppData\Roaming\Typora\typora-user-images\image-20230404113533896.png)

##### git分支中常用指令：

```
# 列出所有本地分支git branch
# 列出所有远程分支git branch -r
# 新建一个分支，但依然停留在当前分支git branch [branch-name]
# 新建一个分支，并切换到该分支git checkout -b [branch]
# 合并指定分支到当前分支$ git merge [branch]
# 删除分支$ git branch -d [branch-name]
# 删除远程分支$ git push origin --delete [branch-name]$ git branch -dr [remote/branch]
```


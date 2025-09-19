# 数据结构课程示例代码

本代码仓库存放湖北工业大学软件工程专业2025年《数据结构》课程的示例程序。

例子程序中使用的数据结构库存放在以下代码仓库：
https://github.com/xavierwoo/hbutds_utilities.git

使用CMake配合例子程序附带的CMakeLists.txt文件，可以自动从上述仓库下载相关代码进行编译链接。
如果使用非CMake环境，需要手动下载上述仓库代码并拷贝到每个例子程序的文件夹下。


**注意：** 

如果在Windows操作系统下使用cmake+GCC编译，请先将示例程序代码拷贝到全英文目录下进行工程构建和编译。

如果使用CLion，请删掉CMakeLists.txt文件中的如下行
```cmake
set(CMAKE_BUILD_TYPE Debug) #使用CLion，请删掉这一行
```
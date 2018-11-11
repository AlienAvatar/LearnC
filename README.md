# LearnC
LearnC

##### 第13章 文件输入/输出
学习要点
-函数：fopen(),getc(),putc(),exit(),fclose(),fprintf(),fscanf(),fgets(),fputs(),rewind(),fseek(),ftell(),fflush(),fgetpos(),fsetpos(),
feof(),ferror(),ungetc(),setvbuf(),fread(),fwrite()
-如何使用c的标准I/O函数系列处理文件
-文本模式和二进制模式，文本格式和二进制格式，以及缓冲和非缓冲I/O.
-使用既可以顺序存取文件又可以随机存取文件的函数

总结
和文件进行通信

文件是什么
一段命名的存储区

文件的两种视图：
文本视图和二进制视图

I/O级别
低级I/O使用操作系统提供的基本I/O服务
标准高级I/O 
使用标准的C库函数包和stdio.h头文件定义

标准I/O
相对于低级I/O的优势
1.标准I/O包含很多专用的函数
2.对输入和输出进行缓冲

-exit()函数
退出程序

- 标准I/O内幕

- fopen()函数
fopen不仅打开一个文件还建立缓冲区
fopen(要打开的文件名，指定文件打开模式);
返回一个文件指针

-getc()函数和putc()函数
getc(File *fp);
putc(char ch,stdout);
stdout是与标准输出相关联的文件指针，同时根据需要刷新缓存区

- fclose()函数
fclose(fp)关闭由指针fp指定的文件

-
- fprintf()函数和fscanf()函数

- fgets()函数和fputs()函数
fgets(存储输入的地址，输入字符串的最大长度，文件指针)
fgets(char *buf,int MAX,File *fp);
fgets()遇到EOF的时候返回NULL值，否则返回给它的地址值

fputs(字符串地址，文件指针)
fputs(buf,fp);

fgets()函数可以防止内存溢出，和fputs()一起使用

- fseek()和ftell()
fseek(文件指针，偏移量，模式）
fseek(fp,offset,mode)
模式 SEEK_SET SEEK_CUR SEEK_END

fgetpos()和fsetpos()函数
int fgetpos(FILE * restrictstream，fpost_t* restrict pos);
成功 返回0 否则返回 非0

fsetpos()
int fsetpos(File * stream const fpost_t *pos);
成功 返回0 否则返回 非0


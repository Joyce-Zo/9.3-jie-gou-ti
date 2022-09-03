#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

							结	构	体
 结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量。

 struct 结构体关键字 | Stu 结构体标签 | struct Stu 结构体类型

struct Stu
{	// 成员变量
	char name[20];
	short age;
	char tele[12];			//		定义一个结构体类型 - 尚未占用空间   - int
	char sex[5];
}s1,s2,s3;		//  结构体后面一定有分号 ; 
 s1s2s3是三个全局的结构体变量，尽量不写少用全局变量

typedef struct Stu
{	// 成员变量
	char name[20];
	short age;				// typedef 对struct Stu重新命名为Stu，则下面可以直接使用为Stu s2；
	char tele[12];	
	char sex[5];
}Stu;		//   Stu - 类型，上面s1s2s3是变量

int main()
{	
	struct Stu s;			//       创建结构体变量    - 创建则占用空间 - int a=10;
	   s 是局部的结构体变量
	Stu s2 = { "坤坤",22,"18859886899","楠" };	// 结构体初始化
	return 0;
}

struct A
{
	int a;
	char c;
	char arr[20];
	double d;
};
struct B
{
	char ch[10];
	struct A a;
	char* pc;
};
int main()
{
	char arr[] = "hello\n";
	struct B b = { "Fuck",{666,'you',"why?",7.88},arr };
	printf("%s\n", b.ch);	// 结构变量的成员通过点操作符（.）来访问
	printf("%d\n",b.a.a);
	printf("%p\n", b.pc);
	printf("%s\n", b.a.arr);
	printf("%lf\n", b.a.d);
	return 0;
}

typedef struct Stu
{	// 成员变量
	char name[20];
	short age;	
	char tele[12];	
	char sex[5];
}Stu;	

void print1(Stu s)
{
	printf("%s\n", s.name);
	printf("%d\n", s.age);
	printf("%s\n", s.tele);
	printf("%s\n", s.sex);
}
void print2(Stu* ps)
{
	printf("%s\n", ps->name);
	printf("%d\n", ps->age);	// ps -> age 结构体访问到成员
	printf("%s\n", ps->tele);
	printf("%s\n", ps->sex);
}
int main()
{
	Stu u = { "Caicai",66,"19959239239","boy" };
	print1(u);	//  只作为打印，首选P2，因为p1占用空间大，需要时间长
	print2(&u); //  而p2只传过去4/8字节的地址
		    函数传参过去：压栈操作
	        函数传出：出栈
			  栈：先进去的后出来，后进去的先出来
	return 0;
}
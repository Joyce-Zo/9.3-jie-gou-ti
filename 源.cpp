#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

							��	��	��
 �ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı�����

 struct �ṹ��ؼ��� | Stu �ṹ���ǩ | struct Stu �ṹ������

struct Stu
{	// ��Ա����
	char name[20];
	short age;
	char tele[12];			//		����һ���ṹ������ - ��δռ�ÿռ�   - int
	char sex[5];
}s1,s2,s3;		//  �ṹ�����һ���зֺ� ; 
 s1s2s3������ȫ�ֵĽṹ�������������д����ȫ�ֱ���

typedef struct Stu
{	// ��Ա����
	char name[20];
	short age;				// typedef ��struct Stu��������ΪStu�����������ֱ��ʹ��ΪStu s2��
	char tele[12];	
	char sex[5];
}Stu;		//   Stu - ���ͣ�����s1s2s3�Ǳ���

int main()
{	
	struct Stu s;			//       �����ṹ�����    - ������ռ�ÿռ� - int a=10;
	   s �Ǿֲ��Ľṹ�����
	Stu s2 = { "����",22,"18859886899","�" };	// �ṹ���ʼ��
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
	printf("%s\n", b.ch);	// �ṹ�����ĳ�Աͨ�����������.��������
	printf("%d\n",b.a.a);
	printf("%p\n", b.pc);
	printf("%s\n", b.a.arr);
	printf("%lf\n", b.a.d);
	return 0;
}

typedef struct Stu
{	// ��Ա����
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
	printf("%d\n", ps->age);	// ps -> age �ṹ����ʵ���Ա
	printf("%s\n", ps->tele);
	printf("%s\n", ps->sex);
}
int main()
{
	Stu u = { "Caicai",66,"19959239239","boy" };
	print1(u);	//  ֻ��Ϊ��ӡ����ѡP2����Ϊp1ռ�ÿռ����Ҫʱ�䳤
	print2(&u); //  ��p2ֻ����ȥ4/8�ֽڵĵ�ַ
		    �������ι�ȥ��ѹջ����
	        ������������ջ
			  ջ���Ƚ�ȥ�ĺ���������ȥ���ȳ���
	return 0;
}
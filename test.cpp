#include<iostream>
using namespace std;
//#include<string>
//#include<ctime>
////��c++��һ���ṹ��Ƕ��  ��һ����ʦ�������ѧ��
//struct stu
//{
//	string name;
//	int score;
//};
//
//struct teac
//{
//	string name;
//	stu s[5];
//};
//void assignment(teac* arr,int len);
//void print(teac* arr,int len);
//int main()
//{
//	srand((unsigned int)time(NULL));
//	teac arr[3];
//	int len = sizeof(arr) / sizeof(arr[0]);
//	assignment(arr,len);
//	print(arr,len);
//	return 0;
//}
//
//void assignment(teac* arr,int len)
//{
//	int i, j;
//	string name = "ABCDE";
//	for (i = 0; i < len; i++)
//	{
//		arr[i].name = "teacher_";
//		arr[i].name += name[i];
//		for (j = 0; j < 5; j++)
//		{
//			arr[i].s[j].name = "student_";
//			arr[i].s[j]. name += name[j];
//			int random = (rand()  % 61 )+ 40;
//			arr[i].s[j].score = random;
//		}
//	}
//}
//void print(teac* arr,int len)
//{
//	int i, j;
//	for (i = 0; i < len; i++)
//	{
//		cout << "��ʦ������"<<arr[i].name << endl;
//		for (j = 0; j < 5; j++)
//		{
//			cout << "\tѧ��������" << arr[i].s[j].name << "\t�ɼ���" << arr[i].s[j].score << endl;
//		}
//	}
//}
//new��delete�ؼ���
//int* Assign()
//{
//	int* p = new int(10);//�൱��malloc
//	return p;
//}
//int main()
//{
//	int*p = Assign();
//	cout << *p << endl;//10
//	cout << *p << endl;//10
//	delete p;//�൱��free
//	return 0;
//}
//int main()
//{
//	int* p = new int[10];//�������飨��[],��ֻ����һ���ռ������()��;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		cout << p[i] << endl;//0��9
//	}
//	delete[] p;//�ͷ�����һ��Ҫ��[]�����������
//	return 0;
//}
//int* Assign()
//{
//	int a = 10;
//	int* p = &a;
//	return p;//���ؾֲ�����ΪΥ�������������������ǻḴ��һ�����ݣ���ֻ�ܴ�ӡһ��
//}
//int main()
//{
//	int* p = Assign();
//	cout << *p << endl;//10  ��һ�ο��Դ�ӡ
//	cout << *p << endl;//���룬�ڶ��β��ɴ�ӡ  ���Ի��ǵ���new �� delete
//
//	return 0;
//}
//���á������������������  ��c������û��
//int main()
//{
//	int a = 10;
//	int &b = a;//  ���ã�  ��������+&+����=ԭ��
//	cout << a << endl;//10
//	cout << b << endl;//10
//	b = 20;
//	int c = 30;
//	b = c;//�˴����ǽ�b��Ϊc�ı���  ���Ǹ�ֵ
//	cout << a << endl;//20
//	cout << b << endl;//20
//	return 0;
//}
//ע������;1.���ñ����ʼ��  2.��ʼ����Ͳ����Ը���
//���ô�ֵ�����𵽴�ַ������
//void swap(int &a, int &b)
//{
//	int tmp;
//	tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(a, b);
//	cout << "a=" << a << endl;//a=20
//	cout << "b=" << b << endl;//b=10  Ҳ���Խ���
//	return 0;
//}
//�����������ķ���ֵ
//int& test()
//{
//	static int a = 10;
//	return a;
//}
//int main()
//{
//	int& b = test();
//	cout << b << endl;//10
//	cout << b<< endl;//10
//
//	test() = 100;//test������Ϊ��ֵ���޸�  ���൱��a����
//	cout << b << endl;//100
//	cout << b << endl;//100
//
//	return 0;
//}
//���õı��ʣ�int& b=a;�൱�� int const *b=&a;  ��b=20;�൱��*b=20,��a=20  cout<<b;Ҳ�൱��cout<<*a;
//������Щ������ָ�����������������������
//��������(��ֹ������Ϊ�������޸�ԭ����)
//void test(int& b)
//{
//	b = 100;
//	cout << "b="<<b << endl;//100
//}
//int main()
//{
//	int a = 10;
//	//int& b = a;
//	//int& b = 100;//������  
//	//const int& b = 100;//����  �����������ǽ���ת��  int tmp=100; int& b=tmp;
//	cout <<"a="<< a << endl;//10
//	test(a);
//	cout << "a=" << a << endl;//100 ����ͨ�����������ı�ԭ����
//	return 0;
//}
//void test(const int& b)
//{
//	b = 100;//������  ���Է�ֹ������޸�ԭ���ݣ��������ã�
//
//}
//int main()
//{
//	int a = 10;
//	test(a);
//	return 0;
//}

//����Ĭ�ϲ���
//��1
//int fun1(int a,int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = fun1(10,20);
//	cout << a << endl;//30
//	return 0;
//}
//��2
//int func1(int a = 10, int b = 20)//�������ڴ˴�����Ĭ��ֵ
//{
//	return a + b;
//}
//int main()
//{
//	int a = func1();
//	cout << a << endl;//30
//	return 0;
//}
//��3
//int func1(int a , int b = 20)//�������ڴ˴�����Ĭ��ֵ  �����int b=20;���Կ����뺯����ֵ�޹�  ֻ�������ﶨ�����b����
//{
//	return a + b;
//}
//int main()
//{
//	int a = func1(10);//����Ҳ��  ���൱�ڴ������������ռ��� 
//	cout << a << endl;//30
//	return 0;
//}
//��4
//int func1(int a , int b = 20,int c=10)//�ڵ�һ��������Ĭ��ֵ���������ֵ����������Ĭ��ֵ
//{
//	return a + b + c;
//}
//int main()
//{
//	int a = func1(10);
//	cout << a << endl;
//	return 0;
//}
//��5
//int func1(int a = 10, int b = 20);//����  ���������ض���  ��������֪����˭��ֵ ���Զ����ʵ��ֻ����һ���ط�����Ĭ��ֵ
//int func1(int a = 10, int b = 20)
//{
//	return a + b;
//}
//int main()
//{
//	int a = func1();
//	cout << a << endl;//30
//	return 0;
//}
//վΪ����
//void func(int a, int)//�˴���int������ռλ
//{
//	return;
//}
//int main()
//{
//	func(10, 10);
//	return 0;
//}
//Ҳ����ʹ��Ĭ��ֵ
//void func(int a,int b=10)//�����b��������Ĭ��ֵ
//{
//	return;
//}
//int main()
//{
//	func(10);
//	return 0;
//}
//��������(��������������ͬ�������еĲ��������ͣ�˳���βθ�����ͬ)
//void Add(int a, int b)
//{
//	cout << "����1" << endl;
//}
//void Add(int a, double b)
//{
//	cout << "����2" << endl;
//}
//void Add(double a, int b)
//{
//	cout << "����3" << endl;
//}
//void Add(int a, int b, double c)
//{
//	cout << "����4" << endl;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	double c = 30;
//	Add(a, b);//����1
//	Add(b, c) ;//����2
//	Add(c, b);//����3
//	Add(a, b, c);//����4  ������Ȼ��������ͬ  ���ββ�ͬ���Ե��õĺ���Ҳ��ͬ  �����������
//	return 0;
//}
//�������ص�ע������
//1.������Ϊ���ص�����
//void func(int& a)
//{
//	cout << "����1" << endl;
//}
//void func(const int& a)
//{
//	cout << "����2" << endl;
//}
//int main()
//{
//	func(10);//����2
//	return 0;
//}
//void func(int& a)
//{
//	cout << "����1" << endl;
//}
//void func(const int& a)
//{
//	cout << "����2" << endl;
//}
//void func(int a, int b = 10)
//{
//	cout << "����3" << endl;
//}
//int main()
//{
//	func(10);//���������غ����ĵ��ò���ȷ  ��Ϊ����2�ͺ���3����������
//	return 0;
//}
//2.���غ�������Ĭ�ϲ���
//void func(int a, int b = 10)
//{
//	cout << "����1" << endl;
//}
//void func(int a)
//{
//	cout << "����1" << endl;
//}
//int main()
//{
//	func(10);//���������غ����ĵ��ò���ȷ   ��Ϊ����1�ͺ���2����������
//	return 0;
//}
//c++��������������������װ���̳У���̬
//1.��װ
//�ؼ��� class  ����ʽ��struct���� �������в�ͬ  �������
//const double PI = 3.14;
//class circle
//{
//	//Ȩ��(public,protected,private)
//public:
//	//����
//	int r;
//	//��Ϊ��һ���Ǻ�����
//	double circlezc()
//	{
//		return 2 * PI * r;
//	}
//};
//int main()
//{
//	circle c1;
//	c1.r = 1;
//	cout << c1.circlezc() << endl;//6.28
//	return 0;
//}
//�Լ����һ��ѧ����  ���Ը�ѧ����������Id��ֵ ����ʾѧ����������Id
//#include<string>
//class student
//{
//	//Ȩ��
//public:
//	//����
//	string name;
//	int id;
//	//��Ϊ
//	void showstudent()
//	{ 
//		cout << "���� " << name << " id " << id << endl;
//	}
//	//Ҳ���Է�װһ����ֵ����  ��id��ֵ����
//	void set_name(string sname)
//	{
//		name = sname;
//	}
//};
//int main()
//{
//	student s;
//	s.name = "����";
//	s.set_name("����");
//	s.id = 1;
//	s.showstudent();//���Դ�ӡ
//	return 0;
//}
/*
һЩ��Ҫ֪����רҵ����
���е����Ժ���Ϊͳ��Ϊ��Ա
�����ֳ�Ϊ����Ա���Ժͳ�Ա����
��Ϊ�ֳ�Ϊ����Ա�����ͳ�Ա����
*/
/*
�������Ȩ��
public: ����Ȩ�� �������ⶼ���Է���
protected: ����Ȩ�� ���ڿ��Է���  ���ⲻ���Է���
private: ˽��Ȩ�� ���ڿ��Է���  ���ⲻ���Է���
*/
//class test
//{
//protected:
//	int a;
//	int b;
//};
//int main()
//{
//	test s;
//	s.a = 10;//���� ���ɷ���
//}
//class test
//{
//public:
//	int a;
//	int b;
//};
//int main()
//{
//	test s;
//	s.a = 10;//���Է���
//}
//#include<string>
//class test
//{
//public:
//	string name;
//protected:
//	string car;
//private:
//	int password;
//	//name = "zhou";//�������ڴ˴�����
//	//car = "����";//�������ڴ˴�����
//	//password = 123456;//�������ڴ˴�����
//
//	void func()
//	{
//		name = "zhou";
//		car = "����";
//		password = 123456;//���������еĺ����з���
//	}
//};
//int main()
//{
//	test s;
//	s.name = "����";//���Է���
//	//s.car = "����";//���ɷ���
//	//s.password = 1232456;//���ɷ���
//	//s.a = 10;//���� ���ɷ���
//}
//struct ��class������
//Ψһ���������Ĭ�Ϸ���Ȩ�޲�ͬ
//structĬ�Ϸ���Ȩ��Ϊpublic ��class��Ĭ�Ϸ���Ȩ����private
//class c1
//{
//	int a;
//};
//struct c2
//{
//	int a;
//};
//
//int main()
//{
//	c1 c;
//	c.a = 10;//����
//	c2 b;
//	b.a = 10;//����  ���ǵ�Ĭ�Ϸ���Ȩ�޲�ͬ
//	return 0;
//}
//������ʱ һ����˽��Ȩ��
//�ô���1.�����Լ����ö�дȨ��  2.���ڶ�дȨ�ޣ����Լ�����ݵ���Ч��
//#include<string>
//class person
//{
//public:
//	//����������Ϊ�ɶ���д
//	void setname(string sname)
//	{
//		name = sname;
//	}
//	string getname()
//	{
//		return name;
//	}
//	//����������Ϊֻ��
//	int getage()
//	{
//		age = 18;
//		return age;
//	}
//	//����������Ϊֻд
//	void setlover(string slover)
//	{
//		lover = slover;
//	}
//private:
//	string name;
//	int age;
//	string lover;
//};
//int main()
//{
//	person p;
//	p.setname("����");
//	p.setlover("����");
//	cout << "����Ϊ:" << p.getage() << endl;
//	cout << "����Ϊ��" << p.getname() << endl;
//	return 0;
//}
//����һ����������  ���а���������ĳ���ߺ�������������ʽ
//class cube
//{
//public:
//	int calculateS()
//	{
//		return 2 * (L*W + L*H + W*H);
//	}
//	int calculateV()
//	{
//		return L*W*H;
//	}
//	void setL(int l)
//	{
//		L = l;
//	}
//	void setW(int w)
//	{
//		W = w;
//	}
//	void setH(int h)
//	{
//		H = h;
//	}
//private:
//	int L;
//	int W;
//	int H;
//};
//int main()
//{
//	cube s1;
//	s1.setL(10);
//	s1.setW(10);
//	s1.setH(10);
//	cout << s1.calculateS() << endl;
//	cout << s1.calculateV() << endl;
//	cube s2;
//	s2.setL(10);
//	s2.setW(10);
//	s2.setH(10);
//	return 0;
//}










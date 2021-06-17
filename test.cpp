#include<iostream>
using namespace std;
//#include<string>
//#include<ctime>
////用c++做一个结构体嵌套  即一个老师带着五个学生
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
//		cout << "老师姓名："<<arr[i].name << endl;
//		for (j = 0; j < 5; j++)
//		{
//			cout << "\t学生姓名：" << arr[i].s[j].name << "\t成绩：" << arr[i].s[j].score << endl;
//		}
//	}
//}
//new和delete关键字
//int* Assign()
//{
//	int* p = new int(10);//相当于malloc
//	return p;
//}
//int main()
//{
//	int*p = Assign();
//	cout << *p << endl;//10
//	cout << *p << endl;//10
//	delete p;//相当于free
//	return 0;
//}
//int main()
//{
//	int* p = new int[10];//开辟数组（用[],而只开辟一个空间可以用()）;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		cout << p[i] << endl;//0到9
//	}
//	delete[] p;//释放数组一定要加[]否则会有问题
//	return 0;
//}
//int* Assign()
//{
//	int a = 10;
//	int* p = &a;
//	return p;//返回局部变量为违法操作，但编译器还是会复制一份数据，但只能打印一次
//}
//int main()
//{
//	int* p = Assign();
//	cout << *p << endl;//10  第一次可以打印
//	cout << *p << endl;//乱码，第二次不可打印  所以还是得用new 很 delete
//
//	return 0;
//}
//引用————给数据起别名  在c语言中没用
//int main()
//{
//	int a = 10;
//	int &b = a;//  引用：  数据类型+&+别名=原名
//	cout << a << endl;//10
//	cout << b << endl;//10
//	b = 20;
//	int c = 30;
//	b = c;//此处不是将b变为c的别名  而是赋值
//	cout << a << endl;//20
//	cout << b << endl;//20
//	return 0;
//}
//注意事项;1.引用必须初始化  2.初始化后就不可以更改
//引用传值可以起到传址的作用
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
//	cout << "b=" << b << endl;//b=10  也可以交换
//	return 0;
//}
//引用做函数的返回值
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
//	test() = 100;//test可以作为左值被修改  ，相当于a本身
//	cout << b << endl;//100
//	cout << b << endl;//100
//
//	return 0;
//}
//引用的本质：int& b=a;相当于 int const *b=&a;  而b=20;相当于*b=20,即a=20  cout<<b;也相当于cout<<*a;
//不过这些操作（指针操作）编译器帮我们做了
//常量引用(防止引用作为参数会修改原数据)
//void test(int& b)
//{
//	b = 100;
//	cout << "b="<<b << endl;//100
//}
//int main()
//{
//	int a = 10;
//	//int& b = a;
//	//int& b = 100;//不允许  
//	//const int& b = 100;//允许  编译器帮我们进行转换  int tmp=100; int& b=tmp;
//	cout <<"a="<< a << endl;//10
//	test(a);
//	cout << "a=" << a << endl;//100 可以通过上述函数改变原数据
//	return 0;
//}
//void test(const int& b)
//{
//	b = 100;//不允许  可以防止误操作修改原数据（常量引用）
//
//}
//int main()
//{
//	int a = 10;
//	test(a);
//	return 0;
//}

//函数默认参数
//况1
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
//况2
//int func1(int a = 10, int b = 20)//即可以在此处设置默认值
//{
//	return a + b;
//}
//int main()
//{
//	int a = func1();
//	cout << a << endl;//30
//	return 0;
//}
//况3
//int func1(int a , int b = 20)//即可以在此处设置默认值  这里的int b=20;可以看作与函数传值无关  只是在这里定义变量b而已
//{
//	return a + b;
//}
//int main()
//{
//	int a = func1(10);//这样也行  就相当于传几个函数接收几个 
//	cout << a << endl;//30
//	return 0;
//}
//况4
//int func1(int a , int b = 20,int c=10)//在第一个数设置默认值后其后所有值都必须设置默认值
//{
//	return a + b + c;
//}
//int main()
//{
//	int a = func1(10);
//	cout << a << endl;
//	return 0;
//}
//况5
//int func1(int a = 10, int b = 20);//不行  这样属于重定义  编译器不知道用谁的值 所以定义和实现只能有一个地方设置默认值
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
//站为参数
//void func(int a, int)//此处的int被用来占位
//{
//	return;
//}
//int main()
//{
//	func(10, 10);
//	return 0;
//}
//也可以使用默认值
//void func(int a,int b=10)//这里的b被设置了默认值
//{
//	return;
//}
//int main()
//{
//	func(10);
//	return 0;
//}
//函数重载(即函数名可以相同，函数中的参数的类型，顺序，形参个数不同)
//void Add(int a, int b)
//{
//	cout << "函数1" << endl;
//}
//void Add(int a, double b)
//{
//	cout << "函数2" << endl;
//}
//void Add(double a, int b)
//{
//	cout << "函数3" << endl;
//}
//void Add(int a, int b, double c)
//{
//	cout << "函数4" << endl;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	double c = 30;
//	Add(a, b);//函数1
//	Add(b, c) ;//函数2
//	Add(c, b);//函数3
//	Add(a, b, c);//函数4  他们虽然函数名相同  但形参不同所以调用的函数也不同  其余可以自推
//	return 0;
//}
//函数重载的注意事项
//1.引用作为重载的条件
//void func(int& a)
//{
//	cout << "函数1" << endl;
//}
//void func(const int& a)
//{
//	cout << "函数2" << endl;
//}
//int main()
//{
//	func(10);//函数2
//	return 0;
//}
//void func(int& a)
//{
//	cout << "函数1" << endl;
//}
//void func(const int& a)
//{
//	cout << "函数2" << endl;
//}
//void func(int a, int b = 10)
//{
//	cout << "函数3" << endl;
//}
//int main()
//{
//	func(10);//报错：对重载函数的调用不明确  因为函数2和函数3都符合条件
//	return 0;
//}
//2.重载函数碰到默认参数
//void func(int a, int b = 10)
//{
//	cout << "函数1" << endl;
//}
//void func(int a)
//{
//	cout << "函数1" << endl;
//}
//int main()
//{
//	func(10);//报错：对重载函数的调用不明确   因为函数1和函数2都符合条件
//	return 0;
//}
//c++面向对象的三大特征：封装，继承，多态
//1.封装
//关键字 class  其形式与struct类似 不过稍有不同  后面会有
//const double PI = 3.14;
//class circle
//{
//	//权限(public,protected,private)
//public:
//	//属性
//	int r;
//	//行为（一般是函数）
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
//自己设计一个学生类  可以给学生的姓名和Id赋值 并显示学生的姓名和Id
//#include<string>
//class student
//{
//	//权限
//public:
//	//属性
//	string name;
//	int id;
//	//行为
//	void showstudent()
//	{ 
//		cout << "姓名 " << name << " id " << id << endl;
//	}
//	//也可以封装一个赋值函数  给id赋值类似
//	void set_name(string sname)
//	{
//		name = sname;
//	}
//};
//int main()
//{
//	student s;
//	s.name = "张三";
//	s.set_name("张三");
//	s.id = 1;
//	s.showstudent();//可以打印
//	return 0;
//}
/*
一些需要知道的专业名词
类中的属性和行为统称为成员
属性又称为：成员属性和成员变量
行为又称为：成员函数和成员方法
*/
/*
类的三种权限
public: 公共权限 类内类外都可以访问
protected: 保护权限 类内可以访问  类外不可以访问
private: 私有权限 类内可以访问  类外不可以访问
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
//	s.a = 10;//报错 不可访问
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
//	s.a = 10;//可以访问
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
//	//name = "zhou";//不可以在此处访问
//	//car = "奔驰";//不可以在此处访问
//	//password = 123456;//不可以在此处访问
//
//	void func()
//	{
//		name = "zhou";
//		car = "奔驰";
//		password = 123456;//可以在类中的函数中访问
//	}
//};
//int main()
//{
//	test s;
//	s.name = "张三";//可以访问
//	//s.car = "奔驰";//不可访问
//	//s.password = 1232456;//不可访问
//	//s.a = 10;//报错 不可访问
//}
//struct 和class的区别
//唯一区别就在于默认访问权限不同
//struct默认访问权限为public 而class的默认访问权限是private
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
//	c.a = 10;//不行
//	c2 b;
//	b.a = 10;//可以  他们的默认访问权限不同
//	return 0;
//}
//再用类时 一般用私有权限
//好处：1.可以自己设置读写权限  2.对于读写权限，可以检测数据的有效性
//#include<string>
//class person
//{
//public:
//	//给名字设置为可读可写
//	void setname(string sname)
//	{
//		name = sname;
//	}
//	string getname()
//	{
//		return name;
//	}
//	//给年龄设置为只读
//	int getage()
//	{
//		age = 18;
//		return age;
//	}
//	//给情人设置为只写
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
//	p.setname("张三");
//	p.setlover("李四");
//	cout << "年龄为:" << p.getage() << endl;
//	cout << "名字为：" << p.getname() << endl;
//	return 0;
//}
//创建一个立方体类  其中包含立方体的长宽高和它的面积体积公式
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










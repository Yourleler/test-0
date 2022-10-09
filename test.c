#define _CRT_SECURE_NO_WARNINGS



//#include <stdio.h>
//int main()
//{
//   
//    return 0;
//}


//#include <stdio.h>
//int a = 2019;//全局变量
//int main()
//{
//    int local = 2018;//局部变量
//    //下面定义的global会不会有问题？
//    int global = 2020;//局部变量
//    printf("global = %d\n", global);
//    return 0;
//}

//////////////////////////////////////////////

#include<stdio.h>
int weight = 77;
int main()
{
	int weight = 88;
	int lenght = 18;
	printf("weight = %d\n",weight+1);
	printf("lenght = %d\n",lenght);
	return 0;
}
/////////////////////////////////////////////////
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("a+b=?");
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("a+b=%d\n", sum);
//	return 0;
//}
////////////////////////////////////
//
//enum num
//{
//	AS = 1,
//	AD,
//	JJ,
//
//};
//
//int main()
//{
//	enum num s = AD + JJ;
//	printf("%d\n", s);
//
//	return 0;
//}
/////////////////////////////////////
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[10] = "123456";
//	char arr2[] = { '1','2','3' };
//	char arr3[] = { '1','2','3','\0' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr3));
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	return 0;
//}

///////////////////////////////
//最大值
//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d\n", &arr[i]);// \n 在scanf特性
//	}
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d", max);
//	return 0;
//}
//
//
/////////////////////////////////////////////
// //平均值
//#include<stdio.h>
//int main()
//{
//	float arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%f", &arr[i]);
//	}
//	float sum = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		sum = sum + arr[i];
//	}
//	float avg = sum / 10;
//	printf("avg = %f", avg);
//	return 0;
//}
//
//
//#include <stdio.h>
//int f(x, y)
//    {
//    int z = 0;
//    z = x + y;
//    return z;
//    }
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int sum = f(a, b);
//    printf("%d", sum);
//    return 0;
//}
// 
// 
// #include <stdio.h>
//int main()
//{
//    int a = 1000;
//    printf("%d", !a);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    printf("%d", !a);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 10;
//    int b = ++a;
//    int c = a++;
//    printf("%d\n", a);
//    printf("%d\n", b);
//    printf("%d\n", c);
//    printf("%d\n", !a);
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 9;
//	int b = 7;
//	int min = 0;
//	min = a < b ? a : b;
//	printf("min=%d", min);
//}

//#include <stdio.h>
//int main()
//{
//    int a = 1000;
//    int b = 99;
//    int c = 33;
//    int d = (a = b + 4, c = a - c, b = c + a);
//    printf("%d\n", d);
//    printf("%d\n", a);
//    return 0;
//}
//#include <stdio.h>
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d  ", a);
//
//}
//
//int main()
//{
//	int i = 0;
//	while(i<10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	for (line = 0; line < 100000; line++)
//	{
//		printf("写代码：%d\n", line);
//	}
//	printf("hh");
//	return 0;
//}

//#include <stdio.h>
//extern int add(int x, int y);
//int main()
//{
//    int a = 10;
//    int b = 66;
//    int sum = add (a, b);
//    printf("%d\n", sum);
//    return 0;
//}
//
//#include <stdio.h>
//#define add(x,y) (x+y)
//int main()
//{
//    int arr[2] = { 0 };
//    scanf("%d", &arr[0]);
//    scanf("%d", &arr[1]);
//    printf("%d\n", 4 * add(/*(int)*/arr[0], /*(int)*/arr[1]) );
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 10;
//    int* pa = &a;
//    *pa = 555;
//    printf("%d\n", a);
//    printf("%d\n", sizeof(char*));
//    return 0;
//}


//#include <stdio.h>
//struct you
//{
//	char name[10];
//	float length;
//	int age;
//};
//
//int main()
//{
//	struct you a = {"辰辰",18,18 };
//	struct you* pa = &a;
//	printf("%s %lf %d\n",a.name,a.length,a.age);
//	printf("%s %lf %d\n",(*pa).name, (*pa).length, (*pa).age);
//	printf("%s %lf %d\n",pa->name, pa->length, pa->age);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//
//    for (int i = 1; i <= 100; i++)
//    {
//        if (1 ==i % 2)
//        printf("%d是奇数\n", i);
//    }
//    return 0;
//}
//


//#include <stdio.h>
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    if (age < 18 && age>0)
//        printf("young");
//    else if (age < 60)
//        printf("strong");
//    else if (age < 120)
//        printf("old man");
//    else if (age > 120)
//        printf("lbd");
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期1");
//		break;
//	case 2:
//		printf("星期2");
//		break;
//	case 3:
//		printf("星期3");
//		break;
//	case 4:
//		printf("星期4");
//		break;
//	case 5:
//		printf("星期5");
//		break;
//	case 6:
//		printf("星期6");
//		break;
//	case 7:
//		printf("星期天");
//		break;
//	default:
//		printf("你咋不上天呢");
//	}
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//	default:
//		printf("你咋不上天呢");
//		break;
//	}
//	return 0;	
//}


//#include <stdio.h>
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        printf("%c\n", ch);
//        putchar(ch);
//    }
//
//    
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    ++i;
//    printf("%d",i);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	do
//	{
//		if (5 == i)
//			/*break;*/
//			/*continue;*/
//		printf("%d  ", i);
//		i++;
//	} while (i<=10);
//	return 0;
//
//}
//

//#include <stdio.h>
//int main()
//{
//    char arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//    int k = 0;
//    scanf("%d", &k);
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int left = 0;
//    int right = sz - 1;
//
//    while (left <= right)
//    {    
//        int mid = (left + right);
//        if (arr[mid] < k)
//            left = mid + 1;
//        else if (arr[mid] > k)
//        {
//            right = mid - 1;
//        }
//        else if(arr[mid]==k)
//        {
//            printf("找到啦:%d", arr[mid]);
//            break;
//        }
//        if (k!=arr[mid])
//        {
//            printf("nope");
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//#include<string.h>
//#include<windows.h>
//int main()
//{
//   char arr1[] = "welcome to beautiful world!!!!!";
//   char arr2[] = "###############################";
//   int left = 0;
//   int right = strlen(arr1) - 1;
//
//   while (left <= right)
//   {
//       arr2[left] = arr1[left];
//       arr2[right] = arr1[right];
//       printf("%s\n", arr2);
//       Sleep(203);
//       system("cls");
//       left++;
//       right--;
//   }
//   printf("%s\n", arr2);
//    return 0;
//}

//strlen
//strcmp
//
//int main()
//{
//	int i = 0;
//
//	char password[20] = { 0 };
//	//abcdef
//	//abccqqqqqq
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("password:>");
//		scanf("%s", password);
//		//if (password == "123456")
//		if(strcmp(password, "123456") == 0)
//		{
//			printf("welcome\n");
//			break;
//		}
//		else
//		{
//			printf("nope\n");
//		}
//	}
//	if (i == 3)
//		printf("hhhh\n");
//
//	return 0;
//}

/////////////猜数字
//#include <stdio.h>
//#include<time.h>
//#include<stdlib.h>
//void menu()
//{
//  printf("*****************************\n");
//	printf("*******  1. play     ********\n");
//	printf("*******  0. exit     ********\n");
//	printf("*****************************\n");
//}
//void game()
//{
//	int ret = rand() % 100 + 1;
//
//	int guess = 0;
//	while (1)
//	{
//		printf("输入数字（1~100）:>");
//		scanf("%d", &guess);
//		if (guess == 2003624)
//		{
//			printf("%d\n", ret);
//		}
//		else
//		{
//			if (guess < ret)
//			{
//				printf("小啦\n");
//			}
//			else if (guess > ret)
//			{
//				printf("大啦\n");
//			}
//
//			else
//			{
//				printf("耶( •̀ ω •́ )y\n");
//				break;
//			}
//		}
//
//	}
//}
//	int main()
//	{
//		int input = 0;
//		srand((unsigned int)time(NULL));
//
//		do
//		{
//			menu();
//			printf(":>");
//			scanf("%d", &input);
//			switch (input)
//			{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("byebye\n");
//				break;
//			default:
//				printf("nope\n");
//				break;
//			}
//			
//		}
//		while (input);
//		return 0;
//	}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char arr[] = "make you";
//    memset(arr, 'x', 4);
//    printf("%s", arr);
//    return 0;
//}
//
//#include <stdio.h>
//void swap(int* pa, int* pb)
//{
//    int z = 0;
//    z = *pa;
//    *pa = *pb;
//    *pb = z;
//}
//int main()
//{
//    int a = 10;
//    int b = 20;
//    printf("a = %d b = %d\n", a ,b);
//    swap(&a, &b);
//    printf("a = %d b = %d\n", a, b);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    printf("%d\n", printf("%d\n", printf("%d\n", 1234567890)));
//    return 0;
//}


//#include <stdio.h>
//void print(long long n)
//{
//    if (n > 9)
//    {
//        print(n / 10);
//    }
//    printf("%lld ", n%10);
//}
//int main()
//{
//    long long a = 0;
//    scanf("%lld", & a);
//    print(a);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    printf("Hello World!\r");
//    printf("There \n");
//    return 0;
//}


///////仅C++有效
//#include<iostream>
//#include <stdio.h>
//using namespace std;
//int main()
//{
//    //cout <<"Welcome  to  School of Computer Science & Techology, \
//    //Shandong University" 
//    //    << endl;    //endl—endline
//    //printf("hhhh");
//    float x = 0;
//    cout << "输入x=？";
//    cin >> x;
//    cout << "x=" << x << endl;
//    return 0;
//}



 #include <stdio.h>
#include <math.h>
int main()
{
    double x = 0;
    double y = 0;
    scanf("%llf", y);
    x = acos(y);
    printf("%llf",x);
    return 0;
} 
//#include <stdio.h>
//int main(void)
//{
	//double value = 5;
	//char* m;
	//m = &value;
	//size_t i = 0;
	//i = sizeof(m);
	//printf("%zu", i );
	//return 0;
//}//结果为4

//习题5.1
//#include <stdio.h>
//int main(void)
//{
	//double m[5], n[5];
	//double x = 0;
	//for (int i = 0;i <= 4;i++)
	//{
	//	scanf_s("%lf", &m[i]);
	//	n[i] = 1.0 / m[i];
	//	printf("%lf\t", n[i]);
	//		x += n[i];
	//}
	//printf("%lf", x);
	//return 0;
//

//习题5.2
//#include <stdio.h>
//int main(void)
//{
	//double data[100];
	//int x = 2;
	//int y = 1;
	//double m = 0;
	//for (int i = 0;i <= 99;i++)
	//{
	//	data[i] = 1.0 / (x * (x + 1) * (x + 2));
	//	x += 2;
	//	m += y * data[i];
	//	y = -y;
	//}
	//m = m * 4.0 + 3.0;
	//printf("%lf", m);
	//return 0;
//}

//习题5.3
//#include <stdio.h>
//int main(void)
//{
//	float amounts[5];
	//long int  dollars[5];
	//long int cents[5];
	//for (int i = 0;i <= 4;i++)
	//{
	//	scanf_s("%f", &amounts[i]);
	//	dollars[i] = (long int)amounts[i];
	//	cents[i] = (long int)(100 * (amounts[i] - dollars[i]));
	//	printf("$%ld.%ld\t", dollars[i], cents[i]);
	//}
	//return 0;
//

//习题5.4
//#include <stdio.h>
//int main(void)
//{
	//	double data[11][5];
	//	double x = 2.0;
	//for (int i = 0;i <= 10;i++)
	//{
	//	data[i][0] = x;
	//	data[i][1] = 1.0 / x;
	//	data[i][2] = x * x;
	//	data[i][3] = data[i][2] * x;
	//	data[i][4] = data[i][3] * x;
	//	printf("x is:%lf\t%lf,%lf,%lf,%lf,%lf\n", x, data[i][0], data[i][1], data[i][2], data[i][3], data[i][4]);
	//	x += 0.1;
	//}
	//return 0;
//}

//#include <stdio.h>
//int main(void)
//{
	//char str[][100] = {
	//	"take my hand through the flames",
	//	"i torture you",
	//	"i am a salve to your games"
	//};
	//size_t x = 0;
	//x = sizeof(str)/sizeof(str[0]);
	//printf("%d", x);
	//return 0;
//}

//#include <stdio.h>
//int main(void)
//{
	//char m[] = "take my hand through the flames";
	//char n[100];
	//char b[100];
	//strcpy_s(n, sizeof(n), m);
	//printf("%s\n", n);
	//strncpy_s(b, sizeof(b), m, 12);
	//printf("%s", b);
	//return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
	//char m[] = "take my hand through the flames";
	//char n[100] = "i torture you";
	//strcat_s(n, sizeof(n), m);
	//printf("%s\n", n);
	//strncat_s(n, sizeof(n), m, 9);
	//printf("%s", n);
	//return 0;
//}
//n必须声明大小并且足够大  必须包含头文件<string.h>



//#include <stdio.h>
//int main(void)
//{
	//char m[] = "take my hand through the flames";
	//char n[]="take my hand and go out";
	//int x=strcmp(n,m);
	//printf("%d\n", x);
	//int y=strncmp(n, m, 13);
	//printf("%d", y);
	//return 0;
//}
//不带_s


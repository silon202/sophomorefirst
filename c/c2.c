//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
	//char str[] = "take my hand through the flames";
	//char m = 'g';
	//char n[] = "hand";
	//char* p = NULL;
	//p = strchr(str, m);
	//printf("%c\n", *p);
	//p = p + 4;
	//printf("%c\n", *p);
	//p = strstr(str, n);
	//printf("%c\n", *p);
	//printf("%s\n", p);
	//return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
	//char m[] = "take my hand through the flame";
	//size_t s = sizeof(m);
	//char delimit[] = "\".,:;!?";
	//char* ptr = NULL;
	//char* Word = strtok_s(m, &s, delimit, &ptr);
	//do
	//{
	//	printf("%-10s\n", Word);
	//	Word = strtok_s(NULL, &s, delimit, &ptr);
	//} while (Word);
	//return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
	//char m[100];
	//printf("输入1：");
	//scanf_s("%s", m);//运行错误
	//gets_s(m, 100);
	//fgets(m, 100,stdin);
	//printf("%s", m);
	//printf("%s", m);
	//return 0;
//}

//#include <stdio.h>
//#include <ctype.h>
//#include <stdlib.h>
//int main(void)
//{
	//printf("%d\n", islower('X'));
	//char m = 'x';
	//m = toupper(m);
	//printf("%c", m);
	//char n[] = "123456";
	//printf("%lf", atof(n));
	//return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
	//char m[100];
	//gets_s(m, 100);
	//size_t s = sizeof(m);
	//char delimit[] = ",";
	//char* ptr = NULL;
	//char* Word = strtok_s(m, &s, delimit, &ptr);
	//do
	//{
	//	printf("%-10s\n", Word);
	//	Word = strtok_s(NULL, &s, delimit, &ptr);
	//}while (Word);
	//return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
	//char m[][100] = {
	//	"take my hand through the flames",
	//	"i torture you",
	//	"i am a salve to your games"
	//};
	//int x;
	//scanf_s("%d", &x);
	//printf("%s", m[x]);
	//return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
	//char m[100];
	//gets_s(m, 100);
	//int l = strlen(m);
	//int i = 0;
	//while (i <= l)
	//{
	//	if (m[i] == m[l-1])
	//	{
	//		i++;
	//		l--;
	//	}
	//	else
	//		break;
	//}
	//if (i >= l)
	//	printf("%s 是回文字符串",m);
	//else
	//	printf("%s 不是回文字符串", m);
	//return 0;
//}
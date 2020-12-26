//#include <stdio.h>
//int main(void)
//{
	//char single = 0;
	//scanf_s("%c", &single,sizeof(single));
	//printf("%c\n", single);
	//printf("%p\n", &single);
	//printf("%p", &single + 1);
	//return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main(void)
//{
	//char m[100];
	//scanf_s("%s", m,100);
	//size_t n=strlen(m)+1;
	//printf("%d", n);
	//char* pm = malloc(n);
	//strcpy_s(pm, n, m);
	//printf("%s", pm);
	//free(pm);
	//pm = NULL;
	//return 0;
//}


//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//int main(void)
//{
	//int* p = NULL;
	//int x = 0;
	//bool found = false;
	//int total = 0;
	//int count = 0;
	//scanf_s("%d", &total);
	//p = (int*)malloc(total * sizeof(int));
	//*p = 2;
	//*(p + 1) = 3;
	//*(p + 2) = 5;
	//count = 3;
	//x = 5;
	///while (count < total)
	//{
//		x = x + 2;
		//for (int i = 1;i < count;i++)
		//{
			//found =( x % *(p + i));
			//if (!found)
				//break;
		//}
		//if (found)
		//{
			//*(p + count) = x;
			//count++;
		//}
	//}
	//for(int i=1;i<total;i++)
	//{
	//	printf("%-8d", *(p + i));
	//}
	//free(p);
	//p = NULL;
	//return 0;
//}

//œ∞Ã‚1
//#include <stdio.h>
//#include <stdlib.h>
//#define x 10
//int main(void)
//{
	//float* p = NULL;
	//float average = 0;
	//float total = 0;
	//int count = 0;
	//int y = 10;
	//p = calloc(y, sizeof(float));
	//for(int i=1;i>0;i++)
	//{
	//	if (count == y)
	//	{
	//		y = y + x;
	//		p = realloc(p, y * sizeof(float));
	//	}
	//	scanf_s("%f",(p+count) );
	//	total = total + *(p + count);
	//	count++;
	//	average = total / count;
	//	printf("%8f\t", average);
	//}
	//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//	char* p[10][10]= NULL;
//}

//œ∞Ã‚3
//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
	//char m[100] = "we are young.";
	//scanf("%c", m);
	//char delimit[] = "\",.;:\'!? ";
	//size_t s = sizeof(m);
	//char* ptr = NULL;
	//char* Word = strtok_s(m, &s, delimit, &ptr);
	//do
	//{
	//printf("%s\n", Word);
	//Word = strtok_s(NULL, &s, delimit, &ptr);
	//} while (Word);
	//return 0;
//}

//œ∞Ã‚2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(void)
{
	char* m = NULL;
	int count = 0;
	int capacity = 10;
	char** n = calloc(capacity, sizeof(char*));
	char* temp = NULL;
	size_t len = 0;
	bool x=false;
	char* ptr;
	while (1 > 0)
	{
		int len = 10;
		int count2 = 0;
		int c;
		m = (char*)malloc(len);
		while ((c = getchar()) != '\n')
		{
			m[count++] = c;
			if (count >= len - 1)
			{
				len += 100;
				m = (char*)realloc(m, len);
			}
		}
		m[count] = 0;
		if ((m[0] == 'e')&&(m[1]=='n')&&(m[2]=='d'))
		{
			free(m);
			m = NULL;
			break;
		}
		if (count == capacity)
		{
			capacity += 10;
			n = realloc(n, capacity);
			if (!n)
				return 3;
		}
		len = strnlen_s(m, 100) + 1;
		n[count] = malloc(len);
		if (!n[count])
		{
			printf("error");
			return 2;
		}
			strcpy_s(n[count++], len, m);
		
	}
		while (!x)
		{
			x = true;
			for (int i = 0;i < count - 1;i++)
			{
				if (strlen(n[i] )> strlen(n[i + 1]))
				{
					x = false;
					temp = n[i];
					n[i] = n[i + 1];
					n[i + 1] = temp;
				}
			}
		}
		for (int i = 0;i < count;i++)
		{
			printf("%s\n", n[i]);
			free(n[i]);
			n[i] = NULL;
		}
		free(n);
		n = NULL;
		return 0;
}


//#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//#include <stdlib.h>
//int main(void)
//{
	//char x[10];
	//char *y;	
	//y = calloc(10, sizeof(char));
	//int capacity = 10;
	//while(1>0)
	//{
	//	fgets(x, 10, stdin);
	//	if (sizeof(y) == 0)
	//	{
	//		strcpy_s(y,10, x);
	//	}
	//	else
	//	strcat_s(y, 10, x);
	//	if(strlen(x)<9) //(x[8]=='\0')
	//		break;
	//	else
	//	{
	//		capacity += 10;
	//		y = realloc(y, capacity*sizeof(char));
	//	}
	//}
	//printf("%s",y);
	//free(y);
	//y = NULL;
	//return 0;
//}	
#include<iostream>
#include<string.h>
#include<map>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int n;

	scanf("%d", &n);
	char str1[300];
	map<int, int> phone;

	char str2[10];
	int key;
	while (n--)
	{
		scanf("%s", str1);
		str2[7] = 0;
		int j = 0;
		int len = strlen(str1);
		for (int i = 0; i < len ; i++)
		{
			if (str1[i] != '-')
			{
				switch (str1[i])
				{
				case 'A':case 'B':case 'C':str2[j++] = '2'; break;
				case 'D':case 'E':case 'F':str2[j++] = '3'; break;
				case 'G':case 'H':case 'I':str2[j++] = '4'; break;
				case 'J':case 'K':case 'L':str2[j++] = '5'; break;
				case 'M':case 'N':case 'O':str2[j++] = '6'; break;
				case 'P':case 'R':case 'S':str2[j++] = '7'; break;
				case 'T':case 'U':case 'V':str2[j++] = '8'; break;
				case 'W':case 'X':case 'Y':str2[j++] = '9'; break;
				default :str2[j++] = str1[i]; break;
				}
			}
				
		}
		key = atoi(str2);
		phone[key] = phone[key] + 1;
	}
	map<int, int>::iterator it;
	int flag = 1;
	for (it = phone.begin(); it != phone.end(); it++)
	{
		if (it->second > 1)
		{
			flag = 0;
			printf("%03d-%04d %d\n", it->first / 10000, it->first % 10000, it->second);
			//cout << it->first /10000 << "-"<< it->first %10000 << " " << it->second << endl;
		}
	}
	if (flag)
	{
		printf("No duplicates.\n");
		//cout << "No duplicates." << endl;
	}

	

	return 1;
}
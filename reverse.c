#include <stdio.h>
#include <string.h>
#include <assert.h>
void reverse(char* str)
{
	int len = strlen(str);
	char* left = str;
	char* right = str+len - 1;
	while (left<=right)
	{
		assert(str);
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[255] = { 0 };
	/*scanf("%s", arr);*/
	gets(arr);  //输入一行
	//逆序函数
	reverse(arr);
	printf("%s\n", arr);

	return 0;
}

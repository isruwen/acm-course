#include <stdio.h>
void main()
{
	int characters[26];
	int n, m, p; //输入的第一行，输入包括一个n*m 的矩阵，和p 个单词。
	int i, j; //循环变量
	for(i = 0; i < 26; i++) // 赋初值
		characters[i] = 0;
	scanf("%d%d%d", &n, &m, &p);
	for(i = 0; i < n; i++){//这一段读入n*m 的矩阵，并记录矩阵中每个字母出现的次数
		char str[11];
		scanf("%s", str);
		for(j = 0; str[j] != '\0'; j++)
		characters[str[j] - 'A'] ++;
	}
	for(i = 0; i < p; i++){ //这一段读入p 个单词，并且将单词中出现的字母在
		//上一段的累计数组中去掉
		char str[200];
		scanf("%s", str);
		for(j = 0; str[j] != '\0'; j++)
			characters[str[j] - 'A'] --;
	}
	for(i = 0; i < 26; i++){ // 这一段输出所有出现次数大于0 的字母。
		if(characters[i] != 0)
		 for(j = 0; j < characters[i]; j++)
		   printf("%c", i + 'A');
	}
	printf("\n");
}
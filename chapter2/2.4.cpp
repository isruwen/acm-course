#include <stdio.h>
void main()
{
	int characters[26];
	int n, m, p; //����ĵ�һ�У��������һ��n*m �ľ��󣬺�p �����ʡ�
	int i, j; //ѭ������
	for(i = 0; i < 26; i++) // ����ֵ
		characters[i] = 0;
	scanf("%d%d%d", &n, &m, &p);
	for(i = 0; i < n; i++){//��һ�ζ���n*m �ľ��󣬲���¼������ÿ����ĸ���ֵĴ���
		char str[11];
		scanf("%s", str);
		for(j = 0; str[j] != '\0'; j++)
		characters[str[j] - 'A'] ++;
	}
	for(i = 0; i < p; i++){ //��һ�ζ���p �����ʣ����ҽ������г��ֵ���ĸ��
		//��һ�ε��ۼ�������ȥ��
		char str[200];
		scanf("%s", str);
		for(j = 0; str[j] != '\0'; j++)
			characters[str[j] - 'A'] --;
	}
	for(i = 0; i < 26; i++){ // ��һ��������г��ִ�������0 ����ĸ��
		if(characters[i] != 0)
		 for(j = 0; j < characters[i]; j++)
		   printf("%c", i + 'A');
	}
	printf("\n");
}
#include <stdio.h>

int main( )
{
	int nCases, i, nFeet; //nCases ��ʾ����������ݵ�������nFeet ��ʾ����Ľ�����
	scanf("%d", &nCases);
	for(i = 0; i < nCases; i++){
		scanf("%d", &nFeet);
		if(nFeet %2 != 0) // ���������ֻ�ţ������벻��ȷ��
			// ��Ϊ����2 ֻ����4 ֻ������ż��
			printf("0 0\n");
		else if (nFeet%4 != 0) //��Ҫ������Ŀ���٣�ʹ���ﾡ����4 ֻ��
			//��Ҫ������Ŀ��࣬ʹ���ﾡ����2 ֻ��
			printf("%d %d\n", nFeet / 4 + 1, nFeet / 2);
		else printf("%d %d\n", nFeet / 4, nFeet / 2);
	}
	system("pause");
	return 0;
}

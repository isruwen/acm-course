#include <stdio.h>

int main()
{
	int L, i, j, n; //L Ϊ����ĳ��ȣ�n Ϊ����ĸ�����i ��j ��ѭ��������
	bool trees[10001]; // ��һ����������ģ�����Ĵ��������
	for(i = 0; i < 10001; i++) // ����ֵ
		trees[i] = true;
	
	scanf("%d%d",&L,&n);
	for(i = 0; i < n; i++){
		int begin, end; // ��begin,end �洢�������ֹλ�á�
		scanf("%d%d", &begin, &end);
		for(j = begin; j <= end; j++) // �������ڵ������ߣ�����ֵΪfalse��
			trees[j] = false;
	}
	int count = 0; //��count ����������ʣ���������Ŀ��
	for(i = 0; i <= L; i++)
		if(trees[i]) count ++;
	printf("%d\n", count);
    system("pause");
    return 0;
}

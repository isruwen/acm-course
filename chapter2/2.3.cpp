#include <stdio.h>

int main()
{
	int L, i, j, n; //L 为区间的长度，n 为区间的个数，i 和j 是循环变量。
	bool trees[10001]; // 用一个布尔数组模拟树的存在情况。
	for(i = 0; i < 10001; i++) // 赋初值
		trees[i] = true;
	
	scanf("%d%d",&L,&n);
	for(i = 0; i < n; i++){
		int begin, end; // 用begin,end 存储区间的起止位置。
		scanf("%d%d", &begin, &end);
		for(j = begin; j <= end; j++) // 将区间内的树移走，即赋值为false。
			trees[j] = false;
	}
	int count = 0; //用count 计数，数数剩余的树的数目。
	for(i = 0; i <= L; i++)
		if(trees[i]) count ++;
	printf("%d\n", count);
    system("pause");
    return 0;
}

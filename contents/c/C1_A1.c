#include <stdio.h>
// �Ժ�ѧ��ѭ������ʱ���Լ򻯴���
// ���ھ�����Ϊ����5���ַ�
int main()
{
	char a;

	a=getchar();
	a=(a+1-'a')%26+'A';
	putchar(a);
	
	a=getchar();
	a=(a+1-'a')%26+'A';
	putchar(a);

	a=getchar();
	a=(a+1-'a')%26+'A';
	putchar(a);

	a=getchar();
	a=(a+1-'a')%26+'A';
	putchar(a);
	
	a=getchar();
	a=(a+1-'a')%26+'A';
	putchar(a);

	system("pause");
	return 0;
}
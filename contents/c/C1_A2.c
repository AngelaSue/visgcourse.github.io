#include <stdio.h>
// �Ժ�ѧ��ѭ������ʱ���Լ򻯴���
// ���ھ�����Ϊ����5���ַ�
int main()
{
	char a;

	a=getchar();
	a=(a+25-'A')%26+'a';
	putchar(a);
	
	a=getchar();
	a=(a+25-'A')%26+'a';
	putchar(a);

	a=getchar();
	a=(a+25-'A')%26+'a';
	putchar(a);

	a=getchar();
	a=(a+25-'A')%26+'a';
	putchar(a);
	
	a=getchar();
	a=(a+25-'A')%26+'a';
	putchar(a);

	system("pause");
	return 0;
}
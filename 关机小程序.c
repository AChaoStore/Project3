#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int main(void)
{
	char intput[10] = { 0 };
	system("shutdown -s -t 60");

	while (1)
	{
		puts("��ĵ��Խ���1�����ڹػ���������������ֹ�ػ�����");
		printf("�����룺");
		scanf("%s", intput);
		if (strcmp(intput, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
	}

	return 0;
}
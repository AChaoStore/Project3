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
		puts("你的电脑将在1分钟内关机！输入我是猪终止关机进程");
		printf("请输入：");
		scanf("%s", intput);
		if (strcmp(intput, "我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
	}

	return 0;
}
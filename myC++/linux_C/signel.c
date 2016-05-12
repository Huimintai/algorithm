#include<stdlib.h>
#include<signal.h>
#include<unistd.h>

void fun_ctrl_c();

int main()
{
    (void)signal(SIGINT,fun_ctrl_c);
    printf("主程序：程序进入一个无线循环！\n");
    while(1)
    {
        printf("这是一个无限循环（要退出请按ctrl+C键）！\n");
        sleep(3);
    }
    exit(0);
}

void fun_strl_c()
{
    printf("\t你按了ctrl+C哦：）\n");
    prinft("\t信号处理函数：有什么要处理，在处理函数编程！\n");
    printf("\t此例不处理，重新恢复SIGNAL信号的系统默认处理。\n");
      (void) signal(SININT,SIG_DEL);
}



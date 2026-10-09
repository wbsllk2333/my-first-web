#include"game.h"

void map(char wall[11][11],int r,int c,char d)
{
    for (int a = 0; a < 11; a++)
    {
        for(int b = 0; b < 11; b++)
        {
            wall[a][b]=d;
        }

    }
    
}

void printmap(char wall[11][11],int r,int c)
{
    for (int b = 0; b < 10; b++)
    {
        printf("%3d ",b);
    }
    printf("\n");

    for (int a = 1; a < 10; a++)
    {
        printf("%3d ",a);
        for(int b = 1; b < 10; b++)
        {
            printf("%3c ", wall[a][b]);
        }
        printf("\n");
    }
}

void setmines(char wall[11][11],int r,int c)
{
    int bamb = 10;
    while (bamb)
    {
        int a = rand()%9 + 1;
        int b = rand()%9 + 1;
        if (wall[a][b] == '0')
        {
            wall[a][b] = '1';
            bamb--;
        }
    }
}

size_t math_calutation(char wall[11][11],int a,int b)
{
    return wall[a-1][b-1] + wall[a-1][b] + wall[a-1][b+1] + wall[a][b-1] + wall[a][b+1] + wall[a+1][b+1] + wall[a+1][b] + wall[a+1][b-1] - 8*'0';
}


void openmines(char wall1[11][11], char wall[11][11], int r, int c)
{
    int a = 0;
    int b = 0;
    int u = 71;
    while (u)
    {
        printf("请输入雷的位置：");
        scanf("%d %d",&b,&a);
        if(a>=1&&a<=9&&b>=1&&b<=9)
        {
            if (wall[a][b] == '0')
            {
                size_t bomb1 = math_calutation(wall, a, b);
                wall1[a][b] = bomb1 + '0';
                printmap(wall1,a,b);
                u--;
            }
            else if (wall[a][b] == '1')
            {
                printf("游戏失败\n");
                printmap(wall,9,9);
                break;
            }
            else
            {
                printf("输入错误，请重新输入\n");
            }
        }
    }
    printf("恭喜你，游戏胜利\n");
}
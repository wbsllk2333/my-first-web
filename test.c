#include "game.h"
void menu()
{
    printf("------------------------\n");
    printf("---------1.strat--------\n");
    printf("------------------------\n");
    printf("---------0.exit---------\n");
    printf("------------------------\n");
}

void game()
{
    char surface[11][11];
    char inside[11][11];
    //设置地图的地基
    map(surface,11,11,'*');
    map(inside,11,11,'0');
    //打印地图
    printmap(surface,9,9);
    //布置地雷
    setmines(inside,9,9);
    //开始排雷
    openmines(surface,inside,9,9);

}

int main(void)
{
    menu();
    int choice;
    srand((unsigned int)time(NULL));
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("现在开始游戏\n");
            game();
            break;
        case 0:
            printf("您已经离开游戏\n");
            break;
        default:
            printf("输入错误，你别玩了\n");
            break;
    }
    return 0;
}
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
// typedef size_t size;
// void printsz(int a[], int sz)
// {
//     for(int i = 0; i<sz;i++)
//     {
//         printf("%d ",a[i]);
//     }
// }
// void BOOL_AS(int* a,int sz)
// {
//     for(int j = 0;j<sz;j++)
//     {
//         int c = 0;
//         for(int i = 0;i<sz-1;i++)
//         {
//             if(*(a+i)<*(a+i+1))
//             {
//                 int b = *(a+i+1);
//                 *(a+i+1) = *(a+i);
//                 *(a+i) = b;
//                 c = 1;
//             }
//             if(c == 0)
//             {
//                 break;
//             }
//         }
//     }

// }
// int main()
// {
//     int a[10]={1,2,3,4,5,6,7,8,9,10};
//     int sz =sizeof(a)/sizeof(a[0]);
//     BOOL_AS(a,sz);
//     printsz(a,sz);
// }

// void jishu(const void*p1,const void*p2)
// {
//     return ((*(int*)p1)-(*(int*)p2));
// }

// void SWAP(char*p1,char*p2,size wirth)
// {
//     for(size i = 0;i<wirth;i++)
//     {
//         char ch = *p1;
//         *p1 = *p2;
//         *p2 = ch;
//         p1++;
//         p2++;
//     }
// }

// void bool_s(void*paishu,size sz,size wirth,void (*jishu)(const void*p1,const void*p2))
// {
//     for(int i = 0;i<sz-1;i++)
//     {
//         for(int j = 0;j<sz-i-1;j++)
//         {
//             if((jishu((char*)paishu + j*wirth),(char*)paishu + (j+1)*wirth)<0)
//             {
//                 SWAP((char*)paishu + j*wirth),(char*)paishu + (j+1)*wirth,wirth);
//             }
//         }
//     }
// }

// int main()
// {
//     int paishu[9]={0,8,2,3,4,5,6,7,1};
//     size_t sz = sizeof(paishu)/sizeof(paishu[0]);
//     bool_s(paishu,sz,paishu[0],jishu);
//     printsz(paishu,sz);
//     return 0;
// }

int main()
{
    int *p = (int *)malloc(20*sizeof(int));
    if (p != NULL)
    {
        size_t num = 20 * sizeof(int);
        memset(p, 0, num);
        // int*p = (int*)calloc(20,sizeof(int))
        for (int i = 0; i < 20; i++)
        {
            *(p + i) = i + 1;
        }
        int* ptr = realloc(p,40*sizeof(int));
        for(int i = 20;i<40;i++)
        {
            *(i+ptr)=i+1;
        }
        for(int a = 0;a<40;a++)
        {
            printf("%d ",ptr[a]);
        }
        free (ptr);
        ptr = NULL;
    }
    else
    {
        perror("MISTAKE:");
    }
    return 0;
}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//#include<stdarg.h>
//float aver(int n,...)
//{
//    va_list va;
//    int count;
//    float sum=0;
//    va_start(va,n);
//    for(count=0;count<n;count++)
//    {
//        sum+=va_arg(va,int);
//    }
//    va_end(va);
//    return sum/n;
//}
//int main()
//{
//    int a=1,b=2,c=3;
//    printf("%.2f",aver(3,a,b,c));
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int arr[10]={0};
//    int *a=(int*)malloc(40);
//    int b[10][10]={0};
//    int*c=arr;
//    printf("%d\n",sizeof(arr[0]));
//    printf("%d\n",sizeof(*a));
//    printf("%d\n",sizeof(arr));
//    printf("%d\n",sizeof(b[0]));
//    printf("%d\n",sizeof(b));
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int pan(int n)
//{
//    int i;
//    if(n==1)
//        return 0;
//    for(i=2;i<=sqrt(n);i++)
//    {
//        if(!(n%i))
//            return 0;
//    }
//    return 1;
//}
//int main()
//{
//    int n,count=0,m,i,t=0;
//    scanf("%d%d",&n,&m);
//    for(i=2;count<n;i++)
//    {
//        if(pan(i))
//        {
//            count++;
//        }
//    }
//    i--;
//    for(;count<=m;i++)
//    {
//        if(pan(i))
//        {
//            count++;
//            t++;
//            if((t-1)%10==0&&count!=n+1)
//                printf("\n");
//            printf("%d",i);
//            if((t%10!=0)&&count-1!=m)
//                printf(" ");
//        }
//    }
//    return 0;
//}

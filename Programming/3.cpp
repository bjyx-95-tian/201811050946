#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
using std::sort;
struct S                                                            //声明结构体类型
{
    int num;
    int sum;                                                        //类型名
    int yu;
    int shu;
    int ying;
}a[305];
bool cmp(S a,S b)                                                   //bool 逻辑变量       S a,S b为结构体变量名   cmp 说明排序方式
{
    if (a.sum > b.sum)  return 1;
    else  if  (a.sum == b.sum)                                     //if 和else if 表示  不必用三种情况全都说明
    {
        if (a.yu > b.yu)  return 1;
        else if (a.yu == b.yu)
            return a.num < b.num;
            else  return 0;
    }
    return 0;
}
int main()
{
    int n,i;
    scanf("%d", &n);                                                                   
    for(i = 0; i < n;i++)                                           //输入n 次
        {
            scanf("%d %d %d",&a[i].yu, &a[i].shu, &a[i].ying);         
        a[i].sum = a[i].yu + a[i].shu + a[i].ying;                  //sum=yu+shu+ying
        a[i].num = i + 1;
        }
        sort (a,a + n,cmp);                                          //根据上面的方式进行排序
        n=5;
        for(i=0; i<n; i++)                                                   
            printf("%d %d\n",a[i].num, a[i].sum);                    //输出前五个
      return 0;
}

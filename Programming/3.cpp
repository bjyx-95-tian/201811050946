#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
using std::sort;
struct S                                                            //�����ṹ������
{
    int num;
    int sum;                                                        //������
    int yu;
    int shu;
    int ying;
}a[305];
bool cmp(S a,S b)                                                   //bool �߼�����       S a,S bΪ�ṹ�������   cmp ˵������ʽ
{
    if (a.sum > b.sum)  return 1;
    else  if  (a.sum == b.sum)                                     //if ��else if ��ʾ  �������������ȫ��˵��
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
    for(i = 0; i < n;i++)                                           //����n ��
        {
            scanf("%d %d %d",&a[i].yu, &a[i].shu, &a[i].ying);         
        a[i].sum = a[i].yu + a[i].shu + a[i].ying;                  //sum=yu+shu+ying
        a[i].num = i + 1;
        }
        sort (a,a + n,cmp);                                          //��������ķ�ʽ��������
        n=5;
        for(i=0; i<n; i++)                                                   
            printf("%d %d\n",a[i].num, a[i].sum);                    //���ǰ���
      return 0;
}

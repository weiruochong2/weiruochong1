#include"temperature.h"
int get_america_temperature(void *ptr,int len)
{
    int*arr=(int*)ptr;
    int sum = 0;
    for(int i = 0;i<len;i++)
    {
         sum += arr[i];

    }
    return sum;

}
int
//bgfdb
int get_china_temperature(void *ptr,int len,int temp)
{
    int*arr=(int*)ptr;
    int sum = 0;
    for(int i = 0;i<len;i++)
    {
         sum += arr[i];

    }
    sum+=temp;
    return sum;

}
wdnmd
我叼你的
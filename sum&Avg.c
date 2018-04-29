//Find sum and average

#include <stdio.h>
#include <inttypes.h>
#include <string.h>
#include <stdlib.h>
#define FAIL 0
#define ASCII_SIZE 256

int add(int arr[],uint8_t n);

int main() {
    char s1[]="abc";
    char s2[]="loh";
    int arr[]={1,2,3,4,5,6,7,7,9};
    //scanf("%d",&arr[0]);
    uint8_t size=sizeof(arr)/sizeof(arr[0]);
    printf("Sum of the array:%d Average:%f",add(arr,size),((float)add(arr,size)/(float)size));
    return 0;
}

int add(int arr[],uint8_t n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum+=arr[i];
    return sum;
}

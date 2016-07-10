#include<stdio.h>
void tofh(int n disk,char source,char temp,char dest)
int main()
{
char source='a',temp='b',dest='c';
int disk;
printf("enter the no of disk:");
scanf("%d",&disk);
printf("sequence is:\n");
tofh(n disk,source,temp,dest);
return 0:
}
void tofh(int ndisk,char source,char temp,char dest)
{
if(n disk==1)
{
printf("move disk %d from %c--->%c\n",ndisk,source,dest);
return;
}
tofh(n disk-1,source,dest,temp)
printf("move disk%d from%c--->%c\n",ndisk,source,dest);
tofh(ndisk-1,temp,source dest);
}

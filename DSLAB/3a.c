//3a.Tower of Hanoi
#include<stdio.h>

void TOH(int n,char source,char spare,char destination)
{
    if(n==1)
    {
        printf("%c to %c\n",source,destination);
    }
    else{
    TOH(n-1,source,destination,spare);
    printf("%c to %c\n",source,destination);
    TOH(n-1,spare,source,destination);
    }
}
void main()
{
    int n;
    printf("Enter the no of discs:\n");
    scanf("%d",&n);
    TOH(n,'A','B','C');
}


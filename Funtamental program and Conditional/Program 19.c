//4.)Accept marks from user and check pass or fail

#include<stdio.h>
main()
{
    int s1,s2,s3;
    printf("Enter marks of sub1,sub2,sub3");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1>40 && s2>40 && s3>40)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
}


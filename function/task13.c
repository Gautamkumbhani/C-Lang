
//  no argivment no return
//  student marks,grade,fail

#include<stdio.h>

void gautam()
{

    int marks, total = 100;
    float percentage;
    char grade;

    printf("enter the marks obtained(out of 100): ");
    scanf("%d",&marks);

    percentage = (float) marks / total * 100;

    if (marks > 75)
    {
        grade = 'A' ;
    }
    else if (marks > 60)
    {
        grade = 'B' ;
    }
    else if (marks > 45)
    {
        grade = 'C' ;
    }
    else if (marks > 35)
    {
        grade = 'd' ;
    }
    else
    {
        grade = 'f' ;
    }

    printf("total marks : %d\n",total);
    printf("marks obtained : %d\n",marks);
    printf("percentage : %.2f%%\n",percentage);
    printf("grade : %c\n",grade);

}

int main()
{
    printf(".......\n");
    gautam();
    printf("\n....\n");

}
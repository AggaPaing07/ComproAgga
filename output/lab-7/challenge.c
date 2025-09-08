#include <stdio.h>
#include<string.h>

typedef struct
{
    char name[20];
    int id;
    int grade[4];
    float avg;
}stu;
int main()
{
    int n=3;
    int m=4;
    stu s[3];
    char*sub[4]={"Math","English","Science","History"};
    float sumsub[4]={0},
    avgsub[4];
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("Enter name, ID, and $ grades for student %d\n",i+1);
        scanf("%s%d%d%d%d%d", s[i].name,&s[i].id,&s[i].grade[0],&s[i].grade[1],&s[i].grade[2],&s[i].grade[3]);
        int sum =0;
        for(j=0;j<m;j++)
        {
            sum+=s[i].grade[j];
            sumsub[j]+=s[i].grade[j];
        }
        s[i].avg = (float) sum/m;
    }
    printf("\nstudent Average:\n");
    for(i=0;i<n;i++)
    {
        printf("%s (ID: %d):%.2f\n", s[i].name,s[i].id,s[i].avg);
    }
        int best =0;
        for(i=1;i<n;i++)
        {
            if (s[i].avg>s[best].avg)
            best =i;
        }
        printf("Top Student:%s with %.2f\n", s[best].name, s[best].avg);
        printf("\nSubject Average:\n");
        int bestsub = 0;
        for(j=0;j<m;j++)
        {
            avgsub[j]=sumsub[j]/n;
            printf("%s: %.2f\n", sub[j], avgsub[j]);
            if (avgsub[j]> avgsub[bestsub]) 
                bestsub = j;
        }
        printf("Top Student:%s with average %.2f\n", sub[bestsub], avgsub[bestsub]);
        return 0;
}
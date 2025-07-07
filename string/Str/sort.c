//WAP to sort the names of students.

#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("enter number of students: ");
    scanf("%d",&n);

    char name[n][30], temp[30];
     getchar();
    for(int i = 0; i<n; i++)
    {
        printf("enter %d student's name: ",i+1);
        gets(name[i]);
    }

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n-i-1; j++)
        {
            if(strcmp(name[j],name[j+1])>0)
            {
                strcpy(temp,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],temp);
            }
        }
    }

     for(int i = 0; i<n; i++)
    {
        printf("%d name:  %s\n",i+1,name[i]);
    }
   
    

    return 0;
    
}
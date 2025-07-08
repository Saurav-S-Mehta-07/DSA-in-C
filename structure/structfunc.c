//WAP to read, display, add and subtract two distances. Distances must be defined using kms and meters.

#include<stdio.h>

typedef struct 
   {
    int kms;
    int mtrs;
   }Distance;

Distance add(Distance, Distance);
Distance subtract(Distance, Distance);

int main()
{
   Distance d1 = {0,0};
   Distance d2,d3,d4;
   d2 = d3 = d4 = d1;

   printf("\n************MENU***************\n");
   printf("\t1 -> for create\n");
   printf("\t2 -> for display\n");
   printf("\t3 -> for add\n");
   printf("\t4 -> for subtract\n");
   printf("\t0 -> for exit\n");
   int choice;
   printf("\nenter choice: ");
   scanf("%d",&choice);
   while(choice!=0)
   {
    switch (choice)
    {
    case 1: printf("enter 1st distance in kms and meters: ");
             scanf("%d %d",&d1.kms, &d1.mtrs);
             printf("enter 2nd distance in kms and meters: ");
             scanf("%d %d",&d2.kms, &d2.mtrs);
             printf("Created\n");
             break;

    case 2:  if(d1.mtrs>=1000){
               d1.kms = d1.kms + (d1.mtrs/1000);
               d1.mtrs = d1.mtrs%1000;
             }
            if(d2.mtrs>=1000){
                d2.kms = d2.kms + (d2.mtrs/1000);
               d2.mtrs = d2.mtrs%1000;
            }
             printf("1st distance is : %dkm %dm.\n",d1.kms, d1.mtrs);
             printf("2nd distance is : %dkm %dm.\n",d2.kms, d2.mtrs);
             break;

    case 3: d3 = add(d1,d2);
            printf("sum of distances : %dkm %dm.\n",d3.kms,d3.mtrs);
            break;

    case 4: d4 = subtract(d1,d2);
            printf("subtraction of distances : %dkm %dm.\n",d4.kms,d4.mtrs);
            break;

    default: printf("\ninvalid choice!\n");
    }

    printf("\nenter choice: ");
   scanf("%d",&choice);

   }
    return 0;
}


Distance add(Distance d1, Distance d2)
{
    Distance sum;
    sum.kms = d1.kms + d2.kms;
    sum.mtrs = d1.mtrs + d2.mtrs;

    while(sum.mtrs>=1000)
    {
        sum.mtrs = sum.mtrs % 1000;
        sum.kms++;
    }
    return sum;
}

Distance subtract(Distance d1, Distance d2){
    Distance sub;

    if(d1.kms>d2.kms)
    {
      sub.kms = d1.kms - d2.kms;
       sub.mtrs = d1.mtrs - d2.mtrs;
    }
    else{
        sub.kms = d2.kms - d1.kms;
       sub.mtrs = d2.mtrs - d1.mtrs;
    }

    if(sub.mtrs<0)
    {
        sub.kms = sub.kms - 1;
        sub.mtrs = sub.mtrs + 1000;
    }

    return sub;
}
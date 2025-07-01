/*In a small company there are finve salesmen. Each salesman is supposed to sell three products.
Write a program using a 2D array to print (i) the total sales by each salesman and (ii) total
sales of each item*/

#include<stdio.h>
int main(){
    int s,p;
    printf("enter number of salesmen: ");
    scanf("%d",&s);
    printf("enter number of product: ");
    scanf("%d",&p);

    int arr[s][p], i,j;

    printf("enter details of products sales by salesmen:  \n");
    for(i = 0; i<s; i++)
    {
        for(j = 0; j<p; j++)
        {
            printf("enter sale of product %d by saleman %d:",j+1,i+1);
            scanf("%d",&arr[i][j]);
        }
    }

    int salesman_sale = 0;
    for(i = 0; i<s; i++)
    {
        for(j = 0; j<p; j++)
        {
            salesman_sale = salesman_sale + arr[i][j];
        }
        printf("sales by %d salesman is : %d\n",i+1, salesman_sale);
        salesman_sale =0;
    }
    
    int product_sale = 0;
    for(i = 0; i<p; i++)
    {
        for(j = 0; j<s; j++)
        {
            product_sale = product_sale + arr[j][i];
        }
        printf("sales of %d product is : %d\n",i+1, product_sale);
        product_sale = 0;
    }

    return 0;
}
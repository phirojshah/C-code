#include<stdio.h>
#define N 50
int main(){

    int a[N][N],b[N][N],c[N][N],i,j,k,sum,m,n,p,q;
    

    printf("Enter the Row and column for first matrix: \n");
    scanf("%d%d",&m,&n);   

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the numbers: ");
            scanf("%d",&a[i][j]);

        }
    }
    printf("Enter the Row and column for second matrix: \n");
    scanf("%d%d",&p,&q);

    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("Enter the numbers: ");
            scanf("%d",&b[i][j]);

        }
    }
    //for printing the provided matrix
    printf("First matrix is : \n");
   
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }

    printf("Second matrix is : \n");

    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }
 //Applying the multiplication : column of 1st matrix must be equal to row of 2nd matrix
if(n!=p){
    printf("You cannot multiply those matrices");
}
else{
//multipying the matrix, its size will be the row of first matrix * column of second matrix
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            sum=0;
            for(k=0;k<m;k++)
            {
                sum+=(a[i][k]*b[k][j]);
            }
            c[i][j]=sum;
        } 
    
    }
    printf("Multiplication is : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

}

}

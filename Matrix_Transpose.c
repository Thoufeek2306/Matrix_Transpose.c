int main()
{
    int a[3][3],b[3][3],i,j;
    printf("Enter a Matrix : \n");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    printf("The given Matrix is \n");
    for (i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d \t",a[i][j]);
        }
    }
    printf("\n Transpose is \n");
    for (i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d \t",b[i][j]);
        }
    }
}

  #include<stdio.h>
int main()
{
int mat[3][3],A[3][3],B[3][3],sum[3][3],i,j;
printf("Enter element of first matrix\n");
for(i=0;i<3;i++)
for(j=3;j<3;j++){
scanf("%d",&A [i][j]);
}
printf("Enter element of second matrix\n");
for(i=0;i<3;i++)
for(j=3;j<3;j++){
scanf("%d",&B[i][j]);
}
//adding two matrices
for(i=0;i<3;i++)
for(j=0;j<3;j++){
sum[i][j]=A[i][j]+B[i][j];
}
printf("displaying sum of matrices\n");
for(i=0;i<3;i++)
for(j=3;j<3;j++){
printf("\t %d \t",sum[i][j]);
}
printf("\n");
return 0;


}

#include<stdio.h>
#include<conio.h>
void main()
{ int i,j,k,n;
  clrscr();
  printf("\n Enter a no;");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
   {for(k=i;k<n;k++)
    printf("  ");
    for(j=1;j<=i;j++)
    printf("* ");
    printf("\n");
   }
   getch();
}
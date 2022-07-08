#include<stdio.h>
int main(){
int a[10],b[10],m,n;
    printf("how many programs do u want in  set A\n");
    scanf("%d",&m);
    printf("Enter %d element of set A\n",m);
    for(int i=0; i<m; i++){
	
      scanf("%d",&a[i]);
  }
    printf("how many elements do u want in  set B\n");
    scanf("%d",&n);
    printf("Enter %d element of set B\n",n);
    for(int j=0;j<n;j++){
	
      scanf("%d",&b[j]);
}
    // logic for cartesian product
    print("cartesian product:\n");
    printf("{");
    for(int i=0;i<m;i++)

    {
        for(int j=0;j<n;j++)
        {
            printf(" (%d %d) ",a[i],b[j]);
        }
    }
    printf("}");
    return 0;
}

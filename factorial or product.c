# include <stdio.h>
int main (){
    int n,i;
    int product = 1;
    printf("Enter number:");
    scanf("%d",&n);
    
    for (i = 1; i<=n;i++){
        
        product = product*i;}
        
        printf("the product is %d\n",product);
        
     
    return 0;
}

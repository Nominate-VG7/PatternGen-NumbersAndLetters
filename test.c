#include <stdio.h>

int main()
{
    int n;
    printf("enter a natural number: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
       
        if(i%2!=0){
            for(int x=1;x<=i;x++){
            printf("%d", x);
            }
            printf("\n");
        }
        else{
        int a = 65;
        for(int j=1;j<=i;j++){
            printf("%c", a);
            a++;
        }
        printf("\n");
        }

    }
    return 0;
}
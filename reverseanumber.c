#include <stdio.h>
int main() {
    int n,temp,ans = 0;
    printf("ENTER A 3 DIGIT NUMBER: ");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        int remainder=n%10;
        ans=ans*10+remainder;
        n/=10;
    }
    printf("YOUR ORIGINAL NUMBER WAS: %d\n", temp);
    printf("YOUR REVERSED NUMBER IS: %d\n", ans);
    return 0;
}

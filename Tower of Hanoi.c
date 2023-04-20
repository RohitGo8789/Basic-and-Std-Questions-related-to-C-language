#include <stdio.h>
#include <math.h>
void TOH(char source,char helping,char destination,int n){
    if(n == 1){
        printf("Move disc from %c to %c\n", source,destination);

    }else{
        TOH(source,destination,helping,n-1);
        TOH(source,helping,destination,1);
        TOH(helping,source,destination,n-1);
    }
}
int main(){
    int n;
    printf("Enter number of disks:");
    scanf("%d", &n);
    int p = pow(2,n) - 1;
    TOH('a','b','c',n);
    printf("Total number of steps are:%d", p);
    return 0;
}

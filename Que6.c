#include <stdio.h>
void towerOfHanoi(int,char,char,char);
int main() {
    int n; 
    printf("Enter number of disks:\n");
    scanf("%d",&n);
    printf("\nThe sequence of moves:\n");
    towerOfHanoi(n, 'A', 'B', 'C'); 
    return 0;
}
void towerOfHanoi(int n,char s,char a,char d) {
    if (n==1){
        printf("Move disk 1 from %c to %c\n",s,d);
        return;
    }
    towerOfHanoi(n-1,s,d,a);
    printf("Move disk %d from %c to %c\n",n,s,d);
    towerOfHanoi(n-1,a,s,d);
}
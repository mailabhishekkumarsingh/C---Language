#include <stdio.h>

int main()
{
int i,j;
for( i=0;i<3;i++){
    for(j=0;j<19;j++){
        if(((2-i<=j) && (j<=6+i)) || ((12-i<=j) && (16+i>=j)))
        printf("*");
        else printf(" ");
    }
    printf("\n");
}

for(i=0;i<10;i++){
    for(j=0;j<19;j++){
        if((i==0) && (j==5))
        printf("Abhishek");
        if((i==0) && (j>=5)&&(j<=12))
        continue;
        if((i<=j) && (j<=18-i))
        printf("*");
        else printf(" ");
    }
    printf("\n");
}
    return 0;
}
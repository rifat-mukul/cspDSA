#include<bits/stdc++.h>


int main() {
     int a,b;
     scanf("%d%d",&a,&b);
     int c = a+b;
     if (c>9)
     {
        /* code */
        printf("5\n");
     } else if (c<=9 && c>=2)
     {
        /* code */
        printf("%d\n",c-1);
     } else {
        printf("%d\n",3);
     }
     
     
    return 0;
}

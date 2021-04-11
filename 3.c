#include <stdio.h>

int main()
{
    char c[10];
    int a = 10;

    printf("aの値は%d です¥n", a); /*  普通に値を表示  */
    printf("aのアドレスは，%p です¥n", &a); /*  %p はアドレスを16進数8桁で表示する */

    printf("cの値は%s です¥n",  c); /*  普通に値を表示  */
    printf("cのアドレスは，%p です¥n", &c); /*  %p はアドレスを16進数8桁で表示する */
}

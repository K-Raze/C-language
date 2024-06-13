#include <stdio.h>

int sum(int n);

int main()
{
    int a, b;
    printf("write the nth number ,to get sum of first n natural number \n");
    scanf("%d", &a);
    b = sum(a);
    printf("the sum is %d \n", b);
    return 0;
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        int ans = n + sum(n - 1);
        return ans;
    }
}

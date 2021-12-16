#include<stdio.h>
#include<conio.h>
#include<time.h>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void printRandoms(int lower, int upper,int count)
{
	int i;
	for (i = 0; i < count; i++) {
		int num = (rand() % (upper - lower + 1)) + lower;
		return num;
	}
} 

int phi(unsigned int n)
{
    unsigned int result = 1;
    for (int i = 2; i < n; i++)
        if (gcd(i, n) == 1)
            result++;
    return result;
}
 
int main()
{
    int p,q,n,pi;
    int lower = 1, upper, count = 1;
    printf("enter the value of p and q:\n");
    scanf("%d%d",&p,&q);
    n=pq; 
    pi=phi((p-1)*(q-1));
    upper = pi;
    srand(time(0));
    e=printRandoms(lower, upper, count);
}
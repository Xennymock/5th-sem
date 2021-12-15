#include <stdio.h>

int dp[7][9];

int min(int a,int b , int c)
{
	if(a<b &&a<c)
		return a;
	else if(b<a &&b<c)
		return b;
	else 
		return c;
}

int editdistance(char str1[], char str2[], int m, int n)
{
    int i,j;
    for ( i = 0; i <=m; i++)
    {
        for ( j = 0; j <=n; j++)
        {
            if (i==0)
            {
                dp[i][j]=j;
            }
            else if (j==0)
            {
                dp[i][j]=i;
            }
            else if (str1[i-1]==str2[j-1])
            {
                dp[i][j] = dp [i-1][j-1];
            }
            
            else
            {
                dp[i][j] = 1 + min(dp[i][j-1],dp[i-1][j],dp[i-1][j-1]);
            }
        }
    }
    return dp[m][n];
}

int main()
{
    char str1[]="sunday";
    char str2[]="saturday";
    printf("%d",editdistance(str1,str2,7,9));
    return 0;
}

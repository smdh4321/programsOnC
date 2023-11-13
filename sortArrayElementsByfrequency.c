Need to write a program to sort the given array based on frequency of elements.

Input Format

12
3 2 3 2 4 2 3 5 3 7 5 1

Constraints

6<=n<=20

Output Format

3 3 3 3 2 2 2 5 5 4 7 1

Sample Input 0

7
3 4 7 6 3 4 4
Sample Output 0

4 4 4 3 3 7 6
Explanation 0

Highest frequency element will come first and next frequency element will come next and so on. Other elements will come in the same order which presents in the given array.

Sample Input 1

7
2 5 3 2 5 5 1
Sample Output 1

5 5 5 2 2 3 1



//code

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int max(int a[],int n)
{
    int m=a[0];
    for(int i=0;i<n;i++)
    {
        if(m< a[i])
            m=a[i];
    }
    return m;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int size=max(a,n);
    int b[size+1];
    for(int i=0;i<size+1;i++)
        b[i]=0;
    for(int i=0;i<n;i++)
    {
        int k=a[i];
        b[k]++;
    }
    int m=max(b,size+1);
    while(m > 0)
    {
        for(int i=0;i<n;i++)
        {
            int k=a[i];
            if(m==b[k])
            {
                printf("%d ",k);
            }
        }
        m--;
    }
    
    return 0;
}

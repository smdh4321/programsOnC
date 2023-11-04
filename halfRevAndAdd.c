Need to write a program to reverse the half of the elements from an array and add the even index's elements and print it.

Input Format

7
1 2 3 4 5 6 7

Constraints

1<=n<=10
n is the number of elements
1<=H<=20
H is the elements size.

Output Format

1 2 3 4 7 6 5
12
Here the second half is reveresed

Sample Input 0

6
7 6 5 4 3 2
Sample Output 0

7 6 5 2 3 4
12



  //code


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void halfRevAndAdd(int a[],int n)
{
    int i=0;
    if(n % 2!=0)
        i=n/2+1;
    else
        i=n/2;
    int j=n-1;
    while(i < j)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    halfRevAndAdd(a,n);
    int sum=0;
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        if(i % 2 != 0)
        {
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
    return 0;
}

  

Given a string, find the second most frequent character in it.

Input Format

aabababa

Constraints

Input should be the string

Output Format

b

Sample Input 0

geegeks
Sample Output 0

g

//code

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    return a[n - 2];
}

int main() {
    char str[100];
    fgets(str, 100, stdin);
    int n = 26;
    int dup1[n];
    int dup[n];
    for (int i = 0; i < n; i++)
        dup[i] = 0;
    for (int i = 0; str[i]; i++) {
        int k = (int)str[i] - 97;
        dup[k]++;
    }
    for(int i=0;i<n;i++)
    {
        dup1[i]=dup[i];
    }
    int secondLargest =  max(dup1, n);
   for(int i=0;i<n;i++)
   {
       if(dup[i]==secondLargest)
       {
           printf("%c",i+97);
           break;
       }
   }
    
    return 0;
}

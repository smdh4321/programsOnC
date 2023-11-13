Write a program to print the pattern

Input Format

Look at the sample input

Constraints

Input should be a string

Output Format

look at the sample output

Sample Input 0

RAJAN
Sample Output 0

        J
      JA
    JAN
  JANR
JANRA

//code

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char str[100];
    scanf("%s",str);
    int l=strlen(str);
    int l2=l-1;
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<l2-i;j++){
                printf("  ");
        }
        for(int j=0;j<=i;j++)
        {
            printf("%c",str[(j+(l/2)) % l]);
        }
        printf("\n");
    }
    return 0;
}

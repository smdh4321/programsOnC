You have to reverse the given string as expected.
You have to modify the source string itself with creating an another string.
When you do reverse, You have to reverse the string by keeping the punctuation and spaces.

Input Format

A man, in the boat says : I see 1-2-3 in the sky

Constraints

String has to be the input.

Output Format

y kse, ht ni3 21ee slsy : a sta o-b-e ht nin amA

Sample Input 0

house no : 123, cbe
Sample Output 0

ebc32 1o : nes, uoh


  //code

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char str[100];
    fgets(str,100,stdin);
    int i=0;
    int j=strlen(str)-1;
    while(i < j)
    {
         if (!((str[i] >='a' && str[i] <='z') || (str[i] >='A' && str[i] <='Z') || (str[i] >='0' && str[i] <='9'))){
            i++;
        }
        else if (!((str[j] >='a' && str[j] <='z') || (str[j] >='A' && str[j] <='Z') || (str[j] >='0' && str[j] <='9'))){
            j--;
        }
        else{
            char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
                i++;
                j--;  
        }
    }
    printf("%s",str);
    return 0;
}

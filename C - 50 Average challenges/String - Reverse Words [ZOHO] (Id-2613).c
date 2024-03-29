/*
A string S is passed as the input. The program must reverse the order of the words in the string and print them as the output. 

Input Format:  The first line will contain S. 
Output Format: The first line will contain the words in the string S in the reverse order. 

Boundary Conditions: Length of S is from 5 to 100. 

Example Input/Output 1: 

Input:  Today is Friday 
Output: Friday is Today 

Example Input/Output 2: 

Input:  five six ten eleven 
Output: eleven ten six five


Solution:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch[1001][1001];
    int len=0;
    while(scanf("%s", ch[len++])>0);
    for(int i=len-1; i>=0; printf("%s ", ch[i--]));
}

/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[100], r[100][100];
    int i, a=0, b=0;
    scanf("%[^\n]", s);
    for(i=0; s[i]; i++)
    {
        if(s[i]!=32)
            r[a][b++]=s[i];
        else{
            r[a][b]=0;
            b=0;
            a++;
        }
    }
    r[a][b]=0;
    for(i=a; i>=0; i--)
        printf("%s ", r[i]);
    return 0;
}
*/

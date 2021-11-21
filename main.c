#include <stdio.h>
#include "my_mat.h"

int matrix[10][10];

int main(int argc, char const *argv[])
{
    char input;
    scanf("%c" , &input);
    while (input!='D')
    {
        if (input =='A')
        {
            func1(matrix);
        }
        else if (input == 'B')
        {
            func2(matrix)==1?printf("True"):printf("False");
        
        }
    else if (input == 'C') 
    {
        int ans = func3(matrix);
        printf("%d" , ans);
    }
    else if(input == 'D')
    {
    return 0;    
    }       
    else
    {
        scanf("%c" , &input);
    }
    
    }
    
    
}

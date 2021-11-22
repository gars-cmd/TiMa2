#include <stdio.h>
#include "my_mat.h"

int matrix[10][10];

void toString(int mat[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d     ", matrix[i][j]);
        }
        printf("\n");
    }
    
}


int main(int argc, char const *argv[])
{
    int ans;
    char input;
    scanf("%c" , &input);
    while (input!='D')
    {
        if (input =='A')
        {
            func1(matrix);
            //toString(matrix);
            
        }
        else if (input == 'B')
        {
            ans = func2(matrix);
            ans==1?printf("True"):printf("False");
        
        }
    else if (input == 'C') 
    {
        ans = func3(matrix);
        printf("%d" , ans);
    }
    if(input == 'D')
    {
    return 0;    
    }       
    else
    {

        scanf("%c" , &input);
    }
    
    }
    return 0;
}

#include <stdio.h>
#include "my_mat.h"

#define True 1
#define False 0
#define MAX_VALUE 2147483647

void func1(int mat[10][10])
{
initialization(mat);
int input = MAX_VALUE;

for (int i = 0; i < 10; i++)
{
    for (int j = 0; j < 10; j++)
        {
    // //     while (input<0)
    // //     {
    // //         scanf("%d" , &input);
    // //         if (input<0)
    // //         {
    // //             printf("you need to enter a zero or positive value , retry");
    // //         } 

    //     }
        mat[i][j] = input;
    } 
}
fillTheGraph(mat);
}


void fillTheGraph(int mat[10][10])
{
    for (int k = 0; k < 10; k++)
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                mat[i][j] = min(mat[i][j] , (mat[i][k] + mat[k][j]) );
            }
            
        }
        
    }
    
}


int min(int a , int b)
{
    return (a<b?a:b);
}



void initialization(int mat[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            mat[i][j] = MAX_VALUE;;
        }
        
    }
    
}


int func2(int mat[10][10] )
{
    int i;
    int j;
    scanf("%d" , &i);
    scanf("%d" , &j);
    return (mat[i][j]==MAX_VALUE?False:True);
}


int func3( int mat[10][10])
{
    int i;
    int j;
    scanf("%d" , &i);
    scanf("%d" , &j);
    return (mat[i][j]==MAX_VALUE?-1:mat[i][j]);
}


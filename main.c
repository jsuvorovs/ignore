//
//  main.c
//  17_02_20_PrintCross
//
//  Created by Jevgenijs Suvorovs on 17.02.20.
//  Copyright © 2020 jsuvorovs. All rights reserved.
//

#include <stdio.h>
void printCross(int row);
int main()
{
    int row = 7;
    printCross(row);
    return 0;
}

void printCross(int row){
 int i, j;
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=row; j++)
        {
            if(j==4 || i == 4)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

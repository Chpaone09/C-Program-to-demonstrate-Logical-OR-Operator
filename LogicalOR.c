/*
***********************************************************

Topic   : Program to demonstrate Logical OR ( || ) Operator in c.
Author  : Chpaone09®
Date    : Oct 19, 2020

************************************************************
*/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

void main(){
        bool a = true;
        bool b = true;
        bool c = false;
        bool d = false;

        if(a || b){
             printf("\n\n\t True if either A or B is True. ");
        }

        if(a || c){
             printf("\n\n\t True if either A or C is True. ");
        }

        if(b || c){
             printf("\n\n\t True if either B or C is True. ");
        }

        if(c || d){
             printf("\n\n\t True if either C or D is True. ");
        }



    
}

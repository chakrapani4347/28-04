 #if, #define, #else

#include <stdio.h>
#define SUCCESS 1 //success will be defined with value 1, at pre-processing stage the SUCCESS will be substituted with 1

int main()
{
    #if SUCCESS  //if part will be compiled if defined value is true
    printf("Condition is true\n");
    #else
    printf("Condition is false\n");
    #endif

    return 0;
}


#ifdef:
#include <stdio.h>
#define SUCCESS 1 //success will be defined with value 1, at pre-processing stage the SUCCESS will be substituted with 1

int main()
{
    #ifdef SUCCESS  //if SUCCESS is defined, then its true and this part will be compiled
    printf("Condition is true\n");
    #else
    printf("Condition is false\n");
    #endif

    return 0;
}

#ifndef:
#include <stdio.h>

int main()
{
    #ifndef SUCCESS  //if SUCCESS is not defined, then its true and this part will be compiled
    printf("Condition is true\n");
    #else
    printf("Condition is false\n");
    #endif

    return 0;
}

#undef:
#include<stdio.h>
#define NUM 5
#undef NUM 5 //it will cancel the macro definition which was defined NUM as 5

int main()
{
    printf("NUM=%d\n",NUM); //we get a compile error as "NUM undeclared"
    
    return 0;
}

#elif:
#include<stdio.h>
#define NUM 1 

int main()
{
    #if NUM==2 
    printf("YES\n");
    #elif NUM==1 
    printf("NUM=%d\n",NUM);
    #endif
    return 0;
}

#include "print.h"
#include <string.h>

void test1(void)
{
    z__print("Hello, World!");
}

void test2(void)
{
    z__Vector3 cord = {{10, 10, 32}};
    z__u32Arr array_num = z__Arr_init(z__u32Arr , 1, 2, 3);
    void *F = array_num.data;

    z__print("Array =>", array_num, "\n",
         "Vector =>", cord, "\n",
         "Pointer =>", F);
}

void test3(void)
{
    int a = 4, b = a+a; 
    char str[] = "Numbers";

    z__print(str, a, b, 3.0f/2);
}

int main (void)
{
    printf("\n\n\n\n");
    test3();    
    printf("\n\n\n\n");
}

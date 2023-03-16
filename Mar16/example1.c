
#include <stdio.h>

int main()
{
    printf("Hello World\n");
    // printf("===========>\n");
    // 1. Const - 
    // const int a1 = 3;
    // int *a2;
    // a2 = &a1;
    // printf("a1 : %d\n", a1);
    // printf("*a2 : %d\n", (*a2));
    // *a2 += 10;
    // a1 = 4;
    // printf("*a2 : %d\n", (*a2));
    // printf("a1 : %d\n", a1);
    
    // int a3[10][10];
    // int *a4;
    // a4 = a3;
    // for (int i =0; i < 100; i+= 1){
    //     *(a4+i) = i*i;
    //     // printf("%d \n", *(a4+i));
    // }
    
    char myExample[6] = {'s', 'e', 'r', '3','3','4'};
    // char myExample[] = "ser334";
    // printf("%c \n", myExample[6]);
    // printf("%c \n", myExample[7]);
    
    int num = 14;
    float gpa = 4.34; 
    float* gpa_ptr = &gpa; 
    float* gpa_ptr2 = &gpa; 
    // ==> *gpa_ptr : is value 
    // ==> float* refers to memory location that stores float type values
    //point a
    printf(" #1 %f \n",(*gpa_ptr2));
    *gpa_ptr = 4.0;
    printf(" #2 %f \n",(*gpa_ptr2));
    printf(" #3 %f \n",gpa);
    gpa_ptr2 = (float*)(&num);
    printf(" #4 %f \n",(*gpa_ptr2));
    printf(" #5 %f \n", num);
    //point b
    *gpa_ptr2 = 12.23;
    printf(" #6 %f -- %p \n",gpa, &gpa);
    printf(" #7 %f -- %p \n",(*gpa_ptr2), gpa_ptr2);
    printf(" #8 %f -- %p \n", num, &num);

   
    return 0;
}

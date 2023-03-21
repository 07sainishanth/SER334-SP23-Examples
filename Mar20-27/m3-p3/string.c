#include "string .h"


struct string { 
    char* contents ;
    int length ;
};

//helper function
int length(char* str) {

    int count = 0;
    while (*(str++) != 0)
        count++; 
    return count ;

}


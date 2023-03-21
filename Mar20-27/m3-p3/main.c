#include "string.h"


int main() {

    string str , sub_str ;

    str = string_create("this␣is␣a␣string");

    printf ( " String␣contents : ␣" ); 
    string_display(str );

    printf("Length:␣%d\n", string_length(str));
    
    string_append(str, ",␣I␣think...");
    printf ( " String␣contents : ␣" ); 
    
    string_display(str );
    printf("Length:␣%d\n", string_length(str));

    sub_str = string_substring(str , 18, 25);
    printf ( " String␣contents : ␣" );

    string_display ( sub_str ) ;
    printf("Length:␣%d\n", string_length(sub_str));

    string_destroy(str ); 
    string_destroy ( sub_str ) ;
    
    return 0 ; 
}
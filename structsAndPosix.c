 
#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main (void)
{
    printf("\nHello! This is a pretty weird and nonsense example of use of structs.");
    printf("\nAlso is a example of use of the unistd.h library, which provide access to the posix API.\n");
    
    // Defining a type consisting on a struct of two members
    typedef struct mStructType {
        int member1;
        int member2;
    } mStructType;
    
    // Create a variable of type "mStructType" and initialize it.
    // Members not contained in initialization receives zero by default.
    mStructType mStructVariable = {
        //.member1 = 0,
        .member2 = 2,
    };
    
    // from time.h:
    time_t rawtime; // Int64 value to hold now datetime in unix timestamp format (seconds since 1970).
    struct timespec timeFromNow ={ // Struct to specify the delay time
        .tv_sec = 1, // seconds we want to wait
        //.tv_nsec = 0, // nanoseconds we want to wait. 
    };
    
    for(int i = 0; i < 10; i++)
    {     
        time(&rawtime); // updates the current datetime
        printf("Now datetime is: %lu. Struct member1 = %u, member2 = %u\n",rawtime,mStructVariable.member1,mStructVariable.member2);
        nanosleep((const struct timespec *)(&timeFromNow),NULL); // Make a system call so this process will only continue after the specified time.
    }
    
    printf("Goodbye!\n");
    return 0;
}

#include <stdio.h>

/**       
 * Main entry point of this program
 * Returns (0)
 *
 */

int main(void)
{
        char mychar;
        int myint;
        long mylong;
        long long mylongx2;
        float myfloat;



        printf("Size of my int is: %lu \n", sizeof(myint));
        printf("size of my char is: %lu\n", sizeof(mychar));
        printf("Size of my long long is: %lu\n", sizeof(mylongx2));
        printf("Size of my long is: %lu\n", sizeof(mylong));
        printf("Size of my float is: %lu\n", sizeof (myfloat));

        return (0);
}


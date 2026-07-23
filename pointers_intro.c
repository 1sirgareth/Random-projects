// A variable is stored in a mailbox. A pointer is something that stores the location of this mail box rather than
// the variable itself.

#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n; // The * means it is a pointer type int.

    printf("%p\n", p); // %p refers to a pointer placeholder. What is printed is a seemingly gibberish string
                       // of text beginning with 0x. This is the hexadecimal address of the variable *p is
                       // pointing towards (n).

    printf("%i\n", *p); // %i refers to an integer placeholder. *p here tells us to go to the address stored
                        // insider the pointer and print whatever is stored inside.

    // We can reassign the value of the mailbox without ever using the name of the mailbox.

    *p = 100;
    printf("%i\n", n);

}

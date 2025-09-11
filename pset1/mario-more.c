#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks);

int main(void)
{
    // Prompt the user for the pyramid's height
    int n;
    do
    {
        n = get_int("height: ");
    }
    while (n < 1 || n > 8);

    // Print a pyramid of that height
    for (int i = 0; i < n; i++)
    {

        // print the pyramid
        print_row(n - i - 1, i + 1);
    }
}

void print_row(int spaces, int bricks)
{
    // print spaces
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }

    // print left pyramid
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }

    // print middle spaces
    printf("  ");

    // print right pyramids
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}

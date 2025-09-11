#include <cs50.h>
#include <stdio.h>

void print_row(int d, int n);

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
        // for (int i = 0; i < n; i++)
        // print a row of bricks
        print_row(n - i - 1, i + 1);
    }
}

void print_row(int d, int n)
{
    // print spaces
    for (int i = 0; i < d; i++)
    {
        printf(" ");
    }

    // print bricks
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");

}

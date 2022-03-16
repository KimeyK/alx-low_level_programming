#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
[3~[3~[3~[D[D[D[D[D[D[D[D[D[D[C[C[C[C[A[A[B[D[D[D[D[D[3~[3~[3~[3~[3~[3~[C[C[C[C[C[C[C[C[C[C[C[A[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[D[D[A[C[C[C[C[C[C[C[C[C[C[C[A[C[C[C[C[C[C[C[C[C[C[C[C[A[C[C[C[C[C[C[C[C[C[C[C[C[A[C[C[C[C[C[C[C[C[C[C[C[C[[A[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[A[C[C[C[C[C[C[C[C[C[C[C[C[A[C[C[C[C[C[C[C[C[C[C[C[C[[A[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[A[A[C[C[C[C[A[[A[C[C[C[C[C[C[C[C[A[C[C[A[C[C[C[C[C[C[C[C[C[C[A[C[A[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[A[[A[A[C[C[C[C[C[C[C[C[C[C[C#include "main.h"

/**
 * _isalpha - Return 1 if c is a letter. lowercase or uppercase
 *
 *@c: The int to print
 * Return: Always 0.
 */

int _isalpha(int c)

{

if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}

else
{
return (0);
}

}

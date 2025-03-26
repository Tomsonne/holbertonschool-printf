#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include "holberton.h"


int print_int(int n);
void recursion_print_int(int val);
int _write(char c);
int print_char(char c);
int print_string(char* string);


int main()
{
int carac;
int inte;
int strin;
int len;
    int len2;
    unsigned int ui;
    void *addr;

len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
/*   char c = '%';
    carac = print_char(c);
    _write('\n');
    printf("return de print_char : %d\n", carac);
    _write('\n');

    char* string = "123456789A";
    strin = print_string(string);
    _write('\n');
    printf("return de print_string : %d\n", strin);
    _write('\n');

    int v = INT_MIN ;
    inte = print_int(v);
    _write('\n');
    printf("return de print_int : %d\nEt valeur de v : %d", inte, v);

    */
    return 0;
}

int print_char(char c)
{
    _write(c);
    return (1);
}
int print_string(char* string)
{
    int count = 0;
    char *arg = string;
    
    if (arg != NULL)
    {
        while(string[count])
        {
           _write(string[count]);
           count++;
        }
        return (count);
    }
    _write('(');
    _write('n');
    _write('u');
    _write('l');
    _write('l');
    _write(')');
    return (6);
}

int print_int(int val)
{
    int count = 1;
    int m = 0, i =0;
    unsigned int num = 0;
    char* Int_min;

    Int_min = "-2147483648";

    num = val;
    m = num;
    if (val == INT_MIN)
    {
        while(Int_min[i] != '\0')
            _write(Int_min[i++]);
        return (11);
    }

    if (m < 0)
    {
        _write('-');
        m = m * -1;
        num = m;
        count +=1;
    }

    while(num > 9)
    {
        num = num / 10;
        count++;
    }

    recursion_print_int(m);
    _write('\n');
    return (count);
}

void recursion_print_int(int num)
{
    unsigned int x = num;

    if (x / 10)
        recursion_print_int(num/10);
    _write(x % 10 + '0');

}

int _write(char c)
{
return (write(1, &c, 1));
}
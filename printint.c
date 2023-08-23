#include "main.h"
int printint(va_list *args)
{
    long int num;
    int c, x, base;

    c = 0;
    num = va_arg(args, int);
    if (num == 0){
        put('0');
        return (1);
    }
    if (num < 0){
        num *= -1;
        put('-');
        put(num + 48);
        c++;

    }
    if (num >= 0 && num <=9){
        put(num + 48);
    c++;
    }
    if (num > 9){
        base =10;
        while(num / base > 9)
            base *=10;
        while(base > 0)
        {
            x = num / base;
            num = num % base;
            put(x + 48);
            c++;
        }
    }
    return (c);
}

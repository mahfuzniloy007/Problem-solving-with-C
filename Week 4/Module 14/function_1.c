// Return + Parameter

#include <stdio.h>
// return_type(parameter)
//  {
//      code
//      return what?
//  }
int sum(int x, int y)
{
    int sum = x + y;
    return sum;
}
int main()
{
    printf("%d\n", sum(10, 20));
    printf("%d\n", sum(100, 200));
    return 0;
}
#include " iter.hpp"

int main()
{
    char arry[] = {'z', 'a', 'k', 'a', 'r', 'y', 'a'};
    
    int len = sizeof(arry) / sizeof(arry[0]);
    iter<char>(arry, len, print_element);
    return 0;
}

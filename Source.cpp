#include <iostream>

void print(void *value, char type)
{
    switch (type)
    {
    case 'i':
        std::cout << *((int *)value) << std::endl;
        break;
    case 'c':
        std::cout << *((char *)value) << std::endl;
        break;
    default:
        std::cout << "This type is not exist!\n";
        break;
    }
}

int main()
{
    int number = 10;
    char character = 'A';
    print(&number, 'i');
    print(&character, 'c');
    return 0;
}
#include<stdio.h>

int main()
{
    int option;
    printf("Welcome to syntax machine\nThese are few options to choose from:\n(enter integer assinged)\n");
    printf("1.Boilerplate code for c \n2.Printf\n3.Scanf\n4.for loop\n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        printf("#include<stdio.h>\n\nint main()\n{\n/* code */\nreturn 0;\n}");
        break;
    case 2:
        printf("printf("");");
        break;
    case 3:
        printf("scanf("");");
        break;
    case 4:
        printf("for (size_t i = 0; i < count; i++)\n{\n    /* code */\n}");
        break;

    default:
        break;
    }
    return 0;
}
#include <stdio.h>

//uncorrect ()

int main()
{
    constexpr int size_array = 10;
    char array[size_array];
    gets(array);

    if(array[0] == ')'){
        printf("incorrect ()\n");
    }
    else
    {
        int index = 0;
        int x = 0;
        int y = 0;
        while(array[index] != 0)
        {
            if(array[index] == '(')
                x = x+1;
              if(array[index]== ')'){
                y = y+1;
                printf("%d", y);}
         ++index;
         }
              if (x = y) {
               printf("correct parentheses\n");
            }
               if (x != y){
              printf("incorrect brackets");
            }
}
    return 0;
}

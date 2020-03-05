#include <stdio.h>
#include <string.h>

int check(const char str[], int n) {
    if (!((str[0] >= 'a' && str[0] <= 'z')
          || (str[0] >= 'A' && str[1] <= 'Z')
          || str[0] == '_'))
        return 0;
    for (int i = 1; i < n; i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z')
              || (str[i] >= 'A' && str[i] <= 'Z')
              || (str[i] >= '0' && str[i] <= '9')
              || str[i] == '_'))
            return 0;
    }
    return 1;

}

int main() {
    char str[100];
    printf("Input string: ");
    gets(str);
    int z = check(str, strlen(str));
    if(z==0)
        printf("Invalid Identifier");
    else
        printf("Valid Identifier");
    return 0;
}

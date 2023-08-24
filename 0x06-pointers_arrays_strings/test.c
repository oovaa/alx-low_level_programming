#include <stdio.h>

long long convertToLongLong(const char *str) {
    long long result = 0;
    int i = 0;

    while (str[i] != '\0') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result;
}

int main() {
    const char *n = "123456789243457436782357457567847768578564568587687677458673473456"
                    "3456453743756756784458";

    long long a = convertToLongLong(n);

    printf("%lld\n", a);

    return 0;
}
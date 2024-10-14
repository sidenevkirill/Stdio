#include <stdio.h>
#include <stddef.h>

int main() {
    printf("array length: %zu\n");
    printf("long long: %zu\n", sizeof(long long));
    printf("size_t: %zu\n", sizeof(size_t));
    printf("\n");
    
    return 0;
}

#include <stdlib.h>

void* ft_calloc(size_t num_elements, size_t element_size)
{
    int ptr;
    size_t size;
    size = num_elements * element_size;
    ptr = malloc(size);
    if (ptr == NULL)
        return(NULL);
    size_t i = 0;
    while (i < total_size) {
        ((char*)ptr)[i] = 0;
            i++;
    }

    return ptr;
}

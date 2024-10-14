char *ft_strjoin(char const *s1, char const *s2)
{
    size_t l1;
    size_t l2;
    char* result;
    char* temp;

    l1 = ft_strlen(*s1);
    l2 = ft_strlen(*s2);
    result = (char*) malloc((l1 + l2 + 1) * sizeof(char));
    if (result == NULL) {
        return NULL;
    }
    *result = *temp;
    ft_strcpy(result, s1);
    while(*result)
        result++;
    ft_strlcat(result, s2, l2);
    return(result);
}
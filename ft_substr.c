char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int max_len;

    if (start < 0 || start >= strlen(s)) {
        return (NULL);
    }
    max_len = strlen(s) - start;
    if (len > max_len) {
        len = max_len;
    }
    char* result = (char*) malloc((len + 1) * sizeof(char));
    if (result == NULL) {
        return NULL;
    }
    strncpy(result, s + start, len);
    result[len] = '\0';

    return result;
}
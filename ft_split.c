char **ft_split(char const *s, char c)
{
    char count = 0;
    int in_substring = 0;

    while (*s != '\0') {
        if (*s != c && !in_substring) {
            in_substring = 1;
            count++;
        } else if (*s == c) {
            in_substring = 0;
        }
        s++;
    }
    
    return (count);
}

// Hilfsfunktion zum Kopieren eines Teilstrings
static char* copy_substring(const char* start, size_t len) {
    char* substring = (char*)malloc((len + 1) * sizeof(char));
    if (!substring) {
        return NULL;  // Speicherallokation fehlgeschlagen
    }
    strncpy(substring, start, len);
    substring[len] = '\0';  // Nullterminator setzen
    return substring;
}

// Hauptfunktion zum Splitten des Strings
char** strsplit(const char* s, char c) {
    if (!s) {
        return NULL;  // Falls der Eingabestring NULL ist
    }

    // Anzahl der Teilstrings zählen
    int substr_count = count_substrings(s, c);

    // Speicher für das Array der Strings allokieren (+1 für den NULL-Pointer am Ende)
    char** result = (char**)malloc((substr_count + 1) * sizeof(char*));
    if (!result) {
        return NULL;  // Speicherallokation fehlgeschlagen
    }

    int index = 0;
    const char* start = s;
    while (*s != '\0') {
        if (*s == c) {
            if (start != s) {
                // Teilstring kopieren
                result[index++] = copy_substring(start, s - start);
            }
            start = s + 1;  // Neues Startzeichen nach dem Trennzeichen
        }
        s++;
    }

    // Den letzten Teilstring kopieren (falls vorhanden)
    if (start != s) {
        result[index++] = copy_substring(start, s - start);
    }

    result[index] = NULL;  // Das Array endet mit einem NULL-Pointer

    return result;
}
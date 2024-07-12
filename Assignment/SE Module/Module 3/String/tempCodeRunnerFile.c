[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        max_chars++;
    }

    printf("Maximum number of characters in the string: %d\n", max_chars);

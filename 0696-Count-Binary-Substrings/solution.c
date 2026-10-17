

int countBinarySubstrings(char* s)
{
    int prev = 0;
    int curr = 1;
    int count = 0;
    int i = 1;

    while (s[i] != '\0')
    {
        if (s[i] == s[i - 1])
        {
            curr++;
        }
        else
        {
            if (prev < curr)
                count += prev;
            else
                count += curr;

            prev = curr;
            curr = 1;
        }

        i++;
    }

    if (prev < curr)
        count += prev;
    else
        count += curr;

    return count;
}

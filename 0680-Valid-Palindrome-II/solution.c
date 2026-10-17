
#include <string.h>

int check(char* s, int left, int right)
{
    while (left < right)
    {
        if (s[left] != s[right])
            return 0;

        left++;
        right--;
    }

    return 1;
}

bool validPalindrome(char* s)
{
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right)
    {
        if (s[left] != s[right])
        {
            return check(s, left + 1, right) ||
                   check(s, left, right - 1);
        }

        left++;
        right--;
    }

    return 1;
}

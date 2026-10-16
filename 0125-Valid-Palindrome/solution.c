
#include <string.h>

int isPalindrome(char* s)
{
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right)
    {
        while (left < right &&
              !((s[left] >= 'a' && s[left] <= 'z') ||
                (s[left] >= 'A' && s[left] <= 'Z') ||
                (s[left] >= '0' && s[left] <= '9')))
        {
            left++;
        }

        while (left < right &&
              !((s[right] >= 'a' && s[right] <= 'z') ||
                (s[right] >= 'A' && s[right] <= 'Z') ||
                (s[right] >= '0' && s[right] <= '9')))
        {
            right--;
        }

        char a = s[left];
        char b = s[right];

        if (a >= 'A' && a <= 'Z')
            a += 32;

        if (b >= 'A' && b <= 'Z')
            b += 32;

        if (a != b)
            return 0;

        left++;
        right--;
    }

    return 1;
}

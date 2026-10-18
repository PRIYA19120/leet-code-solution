
#include <string.h>

int lengthOfLongestSubstring(char* s)
{
    int last[256];
    int i, left = 0, maxLen = 0;

    for (i = 0; i < 256; i++)
        last[i] = -1;

    for (i = 0; s[i] != '\0'; i++)
    {
        unsigned char ch = s[i];

        if (last[ch] >= left)
            left = last[ch] + 1;

        last[ch] = i;

        if (i - left + 1 > maxLen)
            maxLen = i - left + 1;
    }

    return maxLen;
}

//返回字符串数组中字符最长的长度
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXN 10
#define MAXS 20
int max_len(char* s[], int n)
{
    int maxsz;
    maxsz = strlen(s[0]);
    int i = 1;
    for (i = 1; i < n; i++)
    {
        if (strlen(s[i]) > maxsz)maxsz = strlen(s[i]);
    }
    return maxsz;
}
int main()
{
    int i, n;
    char* string[MAXN] = { NULL };

    scanf_s("%d", &n);
    for (i = 0; i < n; i++) {
        string[i] = (char*)malloc(sizeof(char) * MAXS);//给每一个字符串动态分配内存
        scanf("%s", string[i]);
    }
    printf("%d\n", max_len(string, n));

    return 0;
}
//输入 2 zhouchi zhangbing 输出 9

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 函数：寻找最长回文子串
char* longestPalindrome(char* s) {
    int n = strlen(s);
    if (n == 0) return "";

    int start = 0;  // 回文子串的起始位置
    int maxLen = 1; // 回文子串的最大长度

    // 中心扩展法
    for (int i = 0; i < n; i++) {
        // 奇数长度回文：以 s[i] 为中心
        int left = i, right = i;
        while (left >= 0 && right < n && s[left] == s[right]) {
            if (right - left + 1 > maxLen) {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }

        // 偶数长度回文：以 s[i] 和 s[i+1] 为中心
        left = i;
        right = i + 1;
        while (left >= 0 && right < n && s[left] == s[right]) {
            if (right - left + 1 > maxLen) {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }
    }

    // 通过起始位置和最大长度，返回回文子串
    char* result = (char*)malloc(maxLen + 1);  // 动态分配内存
    // 使用 strncpy_s 安全地复制子串
    errno_t err = strncpy_s(result, maxLen + 1, s + start, maxLen); // 目标缓冲区大小为 maxLen+1
    if (err != 0) {
        // 如果复制失败，处理错误
        free(result);
        return NULL;
    }
    result[maxLen] = '\0'; // 确保字符串以 null 结尾
    return result;
}

int main() {
    char s[] = "babad";
    char* result = longestPalindrome(s);
    if (result != NULL) {
        printf("The longest palindrome substring is: %s\n", result);
        free(result); // 释放动态分配的内存
    }
    else {
        printf("An error occurred while copying the substring.\n");
    }
    return 0;
}



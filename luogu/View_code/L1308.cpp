//统计单词数
/*
输入：
To
to be or not to be is a question
输出：2 0

输入：
to
Did the Ottoman Empire lose its power at that time
输出：
-1
 */

/* #include <cctype>
#include <cstdio>
#include <cstring>

const int SPACE = 0;   //三种状态，这是空格状态
const int LETTER = -1; //字母状态，但这表示不是要查找的单词的字母的状态
const int WORD = 1;    //而这种状态是要查找的单词的状态
//当然了，如果状态时大于1的数，说明是要查找的单词的中间部分的状态，上文讲过了

inline void strlower(char *a) { //不解释，上面的代码有了
    for (int i = 0; a[i]; i++) {
        if (isupper(a[i]))
            a[i] = tolower(a[i]);
    }
}

int main() {

    char a[1000001], word[20];
    int ans = 0;
    int ans2 = -1;
    int state = 0; //表状态，假设是空格，因为空格上来就判断是不是三种状态
    int i;

    gets(word);
    gets(a);
    strlower(a);
    strlower(word);
    int len = strlen(word);

    for (i = 0; a[i]; i++) { //遍历数组
        switch (state) {
        case SPACE: //如果当前状态（上一个）是空格
            if (a[i] == word[0])
                state = WORD; //变成单词第一个字母状态
            else if (a[i] == ' ')
                state = SPACE; //其实这句话可以省略，因为反正都是空格状态，改它是一样的
            else
                state = LETTER; //剩下的肯定是其他字母状态了
            break;
        case LETTER: //是其他字母状态
            if (a[i] == ' ')
                state = SPACE; //空格状态
            break;
        default:               //是要查找的单词状态
            if (state < len) { //还不是最后一个字母
                if (a[i] == ' ')
                    state = SPACE;
                else if (a[i] == word[state])
                    state++; //变成下一个字母状态
                else
                    state = LETTER;  //其他字母状态
            } else if (state == len) //是最后一个字母
            {
                if (a[i] == ' ') {      //如果下一个是空格，找到了！
                    state = SPACE;      //状态不要忘记改变
                    if (ans2 == -1)     //第一次找到，记录下来位置
                        ans2 = i - len; //因为i是单词的尾，所以要减长度
                    ans++;              //个数加一
                } else
                    state = LETTER; //可惜，最后跟着其他字母，不是单词
            }
        }
    }

    if (state == len) {
        ans++;
        if (ans2 == -1)
            ans2 = i - 1 - len;
    }
    if (ans2 == -1)
        printf("-1");
    else
        printf("%d %d", ans, ans2);

    return 0;
} */

#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
string sent, word;
int lens, lenw, t, pos;
int main() {
    getline(cin, word);
    getline(cin, sent); //字符串含有空格输入，不可以用cin，否则to me只能读到to
    lenw = word.size();
    lens = sent.size();
    for (int i = 0; i < lenw; i++)
        word[i] = toupper(word[i]); //转成大写
    for (int i = 0; i < lens; i++)
        sent[i] = toupper(sent[i]);
    t = 0;
    for (int i = 0; i <= lens - lenw; i++) {
        int j;
        for (j = 0; j < lenw; ++j) {
            if (sent[j + i] != word[j])
                break;
            if (i > 0 && sent[i - 1] != ' ')
                break; //不是单词开头就结束
        }
        if (j == lenw && (sent[j + i] == ' ' || j + i == lens)) //单词长度匹配，后面是空格或者句末
        {
            t++;
            if (t == 1)
                pos = i;
        }
    }
    if (t == 0)
        cout << -1;
    else
        cout << t << " " << pos;
    return 0;
}
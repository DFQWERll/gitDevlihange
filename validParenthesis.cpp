/*判断输入的字符串括号是否匹配 
括号包含 () [] {}
方法：
利用栈
1.遇到左括号直接入栈
2.遇到右括号与栈顶元素匹配 匹配将栈顶元素弹出 不匹配返回false
3.最后判断栈是否为空 空则说明整个括号字符串匹配
*/

#include<iostream>
#include<stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        if(s == "")
            return true;
        
        stack<char> Mystack;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] =='[')
            {
                Mystack.push(s[i]);
            }
            else
            {
                if(Mystack.empty())
                    return false;
                char topChar = Mystack.top();
               
                if(s[i] == ')' && topChar == '(' 
                   || s[i]=='}' && topChar =='{' 
                   || s[i] == ']'&& topChar == '[')
                {
                    Mystack.pop();
                }
                else
                {
                    return false;
                } 
            }
        }
        
        if(Mystack.empty())
            return true;
        else
            return false;
        
    }
};

int main()
{
	return 0;
}

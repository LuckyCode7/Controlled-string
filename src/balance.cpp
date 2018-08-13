#include "balance.hpp"
#include <vector>

bool balance(const std::string& str)
{
    if (str.size() != 0 && str.size() % 2 == 0)
    {
        std::vector<char> char_;
        for (auto letter : str)
        {
            switch (letter)
            {
            case '(':
                char_.emplace_back('(');
                break;
            case '[':
                char_.emplace_back('[');
                break;
            case '{':
                char_.emplace_back('{');
                break;
            case ')':
                if (char_.empty() || char_.back() != '(')
                    return false;
                char_.pop_back();
                break;
            case ']':
                if (char_.empty() || char_.back() != '[')
                    return false;
                char_.pop_back();
                break;
            case '}':
                if (char_.empty() || char_.back() != '{')
                    return false;
                char_.pop_back();
                break;
            }
        }
        return char_.empty();
    }
    return false;
}
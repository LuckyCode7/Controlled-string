#include "balance.hpp"

bool balance(const std::string str)
{
    if (str.size() != 0 && str.size() % 2 == 0)
    {
        for (int first = 0; first < str.size() / 2; first++)
        {
            int last = str.size() - first - 1;
            switch (str[first])
            {
            case '(':
                if (str[last] != ')') return false;
                break;
            case '[':
                if (str[last] != ']') return false;
                break;
            case '{':
                if (str[last] != '}') return false;
                break;
            default:
                return false;
            }
        }
        return true;
    }
    return false;
}
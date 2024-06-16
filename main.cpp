// Code

class Solution 
{
public:
    int lengthOfLastWord(string s) 
    {
        if (s.empty()) return 0;

        int length = 0;
        stringstream ss(s);
        string word;

        while (ss >> word)
            length = word.length();

        return length;
    }
};

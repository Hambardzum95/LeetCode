class Solution {
public:

    int romanToInt(string s)
    {
        int size = s.length();
        int tmp = 0;
        
        s += '#'; 
        int i = 0;
        while (i < size) {
            switch (s[i++]) {
                case 'I':
                    tmp += (s[i] == 'V' || s[i] == 'X') ? -1 : 1;
                    break;
                    
                case 'V':
                    tmp += 5;
                    break;
                
                case 'X':
                    tmp += (s[i] == 'L' || s[i] == 'C') ? -10 : 10;
                    break;
                    
                case 'L':
                    tmp += 50;
                    break;
                    
                case 'C':
                    tmp += (s[i] == 'D' || s[i] == 'M') ? -100 : 100;
                    break;
                    
                case 'D':
                    tmp += 500;
                    break;
                    
                case 'M':
                    tmp += 1000;
                    break;
            }
        }
        return tmp;
    }
};
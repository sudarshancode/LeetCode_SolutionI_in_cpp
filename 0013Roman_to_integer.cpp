class Solution {
public:
    int romanToInt(string s) {
        int number=0;
        int length=s.length();
        for(int i=0;i<length;i++){
            char ch=s[i];

            char nextCh=(i < length-1)? s[i+1] : '\0';

            if(Value(nextCh) > Value(ch)){
                number=number+ (Value(nextCh) - Value(ch));
                i++;
            }else{
                number=number+Value(ch);
            }
        }
        return number;
    }

private:
    int Value(char ch){
        switch(ch){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: 
                return 0;
        }
    }
};

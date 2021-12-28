class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.length()-1;
        int j = num2.length()-1;
        int carry = 0;
        string res;
        while(i>=0 || j>=0)
        {
            int sum = carry;
            if(i>=0) sum += num1[i]-'0';
            if(j>=0) sum += num2[j]-'0';
            res.append(to_string(sum%10));
            carry = sum/10;
            i--;
            j--;
        }
        if(carry!=0)
            res.append(to_string(carry));
        reverse(res.begin(),res.end());
        return res;
    }
};
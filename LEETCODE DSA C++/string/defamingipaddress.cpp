//https://leetcode.com/problems/defanging-an-ip-address/
string defangIPaddr(string s) {
    string str;
        for(char c : s)
        {
            (c=='.')? str+="[.]" : str+=c;
        }
        
        
    return str;}
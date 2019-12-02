class Solution {
public:
    string defangIPaddr(string address) {
        string new_ip;
        for (char &c : address) {
            if (c != '.') {
                new_ip += c;
            } else {
                new_ip += "[.]";
            }
        }
        return new_ip;
    }
};
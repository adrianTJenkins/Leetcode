//Time - 8:27 min

class Solution {
public:
    string defangIPaddr(string address) {
        string defang = "[.]";
        for(int i = 0; i < address.length(); i++) {
            if (address.at(i) == '.' && address.at(i+1) != ']') {
                address.replace(i, 1, defang);
            }
        }
        return address;
    }
};
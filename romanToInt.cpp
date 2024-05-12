# include<string>
# include<iostream>
# include<unordered_map>


int romanToInt(std::string s);

int main(){
    std::cout << romanToInt("III") << std::endl;
    return 0;
}


int romanToInt(std::string s) {
    int value = 0;
    std::unordered_map<std::string , int> romans = {
        {"I", 1},
        {"V", 5},
        {"X", 10},
        {"L", 50},
        {"C", 100},
        {"D", 500},
        {"M", 1000}
    };
    return 0;

    
}



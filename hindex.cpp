#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
// The h-index is defined as the maximum value of h such that the given researcher has published at least h papers that have each been cited at least h times. 
int hIndex(std::vector<int>& citations){
    
   
    std::sort(citations.begin(), citations.end(), std::greater<int>());

    if (citations.size() == 1){
        if (citations[0] == 0){
            return 0;
        }
        else {
            return 1;
        }
    }

    for (int i = 0; i < citations.size(); i++) {
        std::cout << citations[i] << std::endl;
        
        if (i + 1 < citations.size() && i >= citations[i + 1]){
            return i + 1;
        }
        else if (i + 1 >= citations[i]){
            return citations[i];
        }

    }
    return citations.size();     
}



int main(){
    std::vector<int> citations = {4,4,0,0};

    std::cout << hIndex(citations) << std::endl; 
    return 0;
}

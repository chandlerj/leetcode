#include <iostream>
#include <vector>
#include <unordered_set>
int removeDuplicates(std::vector<int>& nums) {
	std::unordered_set<int> elms;
	int unique = 0;
	for(auto i = nums.begin(); i != nums.end();){
		if(elms.count(*i) > 0){
			nums.erase(i);
		}
		else{
			elms.insert(*i);
			i++; unique++;	
		}	
	}
	return unique;
}

int maxTwoDupes(std::vector<int> &nums){
	std::unordered_set<int> elms;



}

int main(){
	
	std::vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
	removeDuplicates(nums);
	
	for(int element : nums){
		std::cout << element << " " ;
		
	}
	std::cout << std::endl;
	

	std::unordered_set<int> elms;
	elms.insert(3);
	elms.insert(3);
	std::cout << elms.count(3) << std::endl;
	return 0;
}

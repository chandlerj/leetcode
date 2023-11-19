#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
int majorityElement(std::vector<int> &nums){
	std::map<int, int> counts;

	for(int n : nums){
		counts[n] += 1;
	}
	auto max = std::max_element(
			counts.begin(), 
			counts.end(), 
			[](const std::pair<int, int> &a, const std::pair<int,int> &b) -> bool
			{return a.second < b.second;});
	return max->first; 
}

int main(){
	std::vector<int> nums = {2,2,1,1,1,2,2};

	int k = majorityElement(nums);

	 
	std::cout << k << std::endl;


}

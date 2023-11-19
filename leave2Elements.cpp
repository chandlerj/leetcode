# include<iostream>
# include<vector>
# include<map>




int removeDuplicates(std::vector<int> &nums){
	std::map<int, int> elements_seen;
	/* Iterate through elements and store each element
	 * as a key, increment key if element has previously
	 * been seen. If element's key >2, remove element. */
	for(int i = 0; i < nums.size(); ){
		int curr_elm = nums[i];

		
		elements_seen[curr_elm] += 1;
	
		if(elements_seen[curr_elm] >= 3){
			std::cout << elements_seen[curr_elm] << std::endl;
			nums.erase(nums.begin() + i);
		}
		else {
			std::cout << elements_seen[curr_elm] << std::endl;
			i++;
		}
	}
	return nums.size();
}

int main(){
	std::vector<int> nums = {0,0,1,1,1,1,2,2,2,3,3};

	int k = removeDuplicates(nums);

	for (int element : nums){
		std::cout << element << " ";
	} 
	std::cout << std::endl;


}

# include <iostream>
# include <vector>



int removeElement(std::vector<int>& nums, int val) {
	int curr_array_val = 0;
	for(auto i = nums.begin(); i != nums.end();){
		if(*i == val){
			nums.erase(i);	
		}
					
		else{
			curr_array_val++;
			i++;

		}
	}
		

	return curr_array_val;
}

int main(){
	std::vector<int> nums = {0,1,2,2,3,0,4,2};
	int elements = removeElement(nums, 2);
	std::cout << "num of elements: " << elements << std::endl;
	for(int element : nums){
		std::cout << element << " ";
	}
	std::cout << std::endl;
}

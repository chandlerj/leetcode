# include<vector>
# include<iostream>
# include<algorithm>
void rotate(std::vector<int> &nums, int k){
	k %= nums.size();
	std::reverse(nums.end() - k, nums.end());
	std::reverse(nums.begin(), nums.begin()+ (nums.size() - k));
	std::reverse(nums.begin(), nums.end());
}

void rotate_faster(std::vector<int> &nums, int k){
	if(nums.size() == 1){
		//do nothing
	}
	else{
		k %= nums.size();
		std::reverse(nums.end() - k, nums.end());
		std::reverse(nums.begin(), nums.begin()+ (nums.size() - k));
		std::reverse(nums.begin(), nums.end());
	}


}

int main(){
	std::vector<int> nums = {-1,-100,3,99};

	rotate(nums, 2);

	for(int n : nums){
		std::cout << n << " ";
	}
	std::cout << std::endl;
}


//[1,2,3,4,5,6,7]
//[1,2,3,4,7,6,5]
//[4,3,2,1,7,6,5]
//[5,6,7,1,2,3,4]
//
//
//
//[1,2,3]
//[1,3,2]
//[1,3,2]
//[2,3,1]
//
//[-1,-100,3,99]
//[-1,-100,99,3]
//[-100,-1,99,3]
//[3,99,-1,-100]
//
//

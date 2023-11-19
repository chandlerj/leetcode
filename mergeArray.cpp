#include <iostream>
#include <vector>
void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n);
int main(){
	std::vector<int> nums1 = {1,0};
	std::vector<int> nums2 = {2};

	merge(nums1, 1, nums2, 1);
	//expected output is [1,2,2,3,5,6]
	
	return 0;
}
void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {

	//check if m is zero and n is one. This means we just need to replace the zero with the number in nums2
	if (m == 0 && n == 1){
		nums1[0] = nums2[0];
	}
	if (n == 0){
		//do nothing	
	}
	else{
		// for every element in the first array
		int elements_in_array = m;
		for(int i = 0; i < m + n; i++){
		
				
			if (nums2.size() > 0 && nums1[i] > nums2[0] || nums1[i] == 0 && i >= elements_in_array){
			
				int value = nums2.at(0);
				nums1.pop_back();
				nums1.insert(nums1.begin() + i, value);
				nums2.erase(nums2.begin());
				elements_in_array++;
			}

		}

		
    }
}

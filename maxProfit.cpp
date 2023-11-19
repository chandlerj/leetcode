# include<vector>
# include<iostream>

int maxProfit(std::vector<int> &prices){
	int lowItem = prices[0];
	int mostProfit = 0;
	for(int i = 1; i < prices.size(); i++){
		int price = prices[i];		
		if(lowItem > price){
			lowItem = price;
		}
		if(price - lowItem > mostProfit){
			mostProfit = price - lowItem;
		}
		
	}
	return mostProfit;
}

int main(){
	std::vector<int> prices = {7,6,4,3,1};
	std::cout << maxProfit(prices) << std::endl;
}

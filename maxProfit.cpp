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

int maxProfit2(std::vector<int> &prices){
	int totalProfit = 0;
	for(int i = 1; i < prices.size(); i++){ //for every day
		if(prices[i] - prices[i-1] > 0){
			totalProfit += prices[i] - prices[i-1];
		}
	}
	return totalProfit;
}

int main(){
	std::vector<int> prices = {7,1,5,3,6,4};
	int maxProfitMultipleDays = maxProfit2(prices);
	std::cout << "Maxprofit with one share: " << maxProfit(prices) << std::endl;
	std::cout << "maxprofit with multiple shares: " <<  maxProfitMultipleDays << std::endl;
}

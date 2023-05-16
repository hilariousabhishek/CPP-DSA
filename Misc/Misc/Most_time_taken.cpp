#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>nums, int n, int K) {
	
	vector<vector<int> > ans;
	sort(nums.begin() , nums.end());
	int size=nums.size();

	


	for(int i=0; i<nums.size(); i++){
	if(nums[i]>K){
		continue;
	}
		for(int j = i+1; j<nums.size();j++){	
					if(nums[i]+nums[j]>K){
		continue;
	}								
			for(int k = j+1 ; k<nums.size();k++){

				if(nums[i]+nums[j]+nums[k] == K){
					
					vector<int> temp;
					temp.push_back(nums[i]);
					temp.push_back(nums[j]);
					temp.push_back(nums[k]);
					sort(temp.begin(),temp.end());
				
					ans.push_back(temp);
					sort(ans.begin() , ans.end());

				}
				
			}
		}
	}

	int size2=ans.size();	
for(int j=0;j<4;j++){

	for(int i=0;i<size2-1;i++){
		if (ans[i] == ans[i + 1]) {
			ans.erase(ans.begin() + i);
			size2 -= 1;
		}
		
	}
}

int size3=ans.size();
for(int k=0;k<size3-1;k++){
	if (ans[k] == ans[k + 1]) {
			ans.erase(ans.begin()+1,ans.end());
			size3 -= 1;
		}
}


return ans;

}
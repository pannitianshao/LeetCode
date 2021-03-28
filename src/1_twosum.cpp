#include<bits/stdc++.h>
using namespace std;
/*******************************
 *
 * 给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 的那 两个 整数，并返回它们的数组下标。
 * 你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。
 * 你可以按任意顺序返回答案。
 * 
 * 示例 1：

输入：nums = [2,7,11,15], target = 9
输出：[0,1]
解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1] 。
示例 2：

输入：nums = [3,2,4], target = 6
输出：[1,2]
示例 3：

输入：nums = [3,3], target = 6
输出：[0,1]

*******************************/
class Solution {
public:
	//****************force***************************
   /*  vector<int> twoSum(vector<int>& nums, int target) {
		for(int i = 0; i < (int)nums.size(); i++)
		{
			for(int j = i+1; j < (int)nums.size(); j++)
			{
				
				if(nums[i]+ nums[j] == target) 
				{
					vector<int> a;
					a.push_back(i);
					a.push_back(j);
					return a;
				}
				
			}
		}
		
		return {};
    } */
	//****************hashmap***************************
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int,int>hashtable;
		for(int i = 0; i < (int)nums.size(); i++)
		{
			auto it = hashtable.find(target - nums[i]);
			if(it != hashtable.end())
			{
				return{it->second,i};
			}
			hashtable[nums[i]] = i;
		}
		return {};
    }
};
int main(){
	
	vector<int> nums = {2,7,11,15};  int target = 9;
	// vector<int> nums = {3,2,4}; int target = 6;
	// vector<int> nums = {3,3}; int target = 6;
	
	Solution s;
	vector<int> outnums(s.twoSum(nums,target));
	for(vector<int>::iterator it=outnums.begin();it < outnums.end();it++)
	{
		cout << *it <<" ";
	}
	cout << endl;
	return 0;

}

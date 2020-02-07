/*
给你一个以行程长度编码压缩的整数列表 nums 。
考虑每对相邻的两个元素 [a, b] = [nums[2*i], nums[2*i+1]] （其中 i >= 0 ）
每一对都表示解压后有 a 个值为 b 的元素。
请你返回解压后的列表。


示例：
输入：nums = [1,2,3,4]
输出：[2,4,4,4]
解释：第一对 [1,2] 代表着 2 的出现频次为 1，所以生成数组 [2]。
第二对 [3,4] 代表着 4 的出现频次为 3，所以生成数组 [4,4,4]。
最后将它们串联到一起 [2] + [4,4,4,4] = [2,4,4,4]。
 
提示：
2 <= nums.length <= 100
nums.length % 2 == 0
1 <= nums[i] <= 100
*/


//解法：
class Solution {
public:
	vector<int> decompressRLElist(vector<int>& nums) {
		int a, b;
		vector<int> result;
		for (int i = 0; i < nums.size() - 1; i += 2) {
			a = nums[i]; b = nums[i + 1];
			while (a--) {
				result.push_back(b);
			}
		}
		return result;
	}
};


//解法2：
/*
我们以步长（step）为 2 遍历数组 nums，对于当前遍历到的元素 a 和 b，我们将 a 个 b 添加进答案中即可。
*/
class Solution {
public:
	vector<int> decompressRLElist(vector<int>& nums) {
		vector<int> ans;
		for (int i = 0; i < nums.size(); i += 2) {
			for (int j = 0; j < nums[i]; ++j) {
				ans.push_back(nums[i + 1]);
			}
		}
		return ans;
	}
};
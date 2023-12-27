#include<stdio.h>
#include <vector>
#include <iostream>
using namespace std;
class  Sort {
public:
	/// <summary>
	/// 冒泡排序一次比较两个元素，如果它们的顺序错误就把它们交换过来
	/// </summary>
	/// <param name="nums"></param>
	static void BubbleSort(vector<int>& nums) 
	{
		bool order;
		for (int i = 0; i < nums.size(); i++)
		{
			order = true;
			for (int j = 1; j < nums.size()-i; j++)
			{
				if (nums[j - 1] > nums[j])
				{
					order = false;
					swap(nums[j - 1], nums[j]);
				}	
			}
			if (order) break;
		}
	}
	static void Print(vector<int>& nums)
	{
		for (int i = 0; i < nums.size(); i++)
		{
			printf(" %d ",nums[i]);
		}
		printf("\n");
	}
	
};

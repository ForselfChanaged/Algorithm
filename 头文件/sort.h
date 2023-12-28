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
	/// <summary>
	/// 选择排序，在未排序的序列找到最小元素，存放在排序序列起始位置
	/// 在剩余元素中继续寻找最小元素，然后存放在已经排序序列末尾，重复此步骤
	/// </summary>
	/// <param name="nums"></param>
	static void SelectSort(vector<int> &nums)
	{
		for (int i = 0; i < nums.size(); i++)
		{
			int minIndex = i;
			for (int j = i+1; j < nums.size(); j++)
			{
				if (nums[j] < nums[minIndex])
				{
					minIndex = j;//找到最小值索引
				}
			}
			swap(nums[i], nums[minIndex]);
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

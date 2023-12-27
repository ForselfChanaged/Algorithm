#include<stdio.h>
#include <vector>
#include <iostream>
using namespace std;
class  Sort {
public:
	/// <summary>
	/// ð������һ�αȽ�����Ԫ�أ�������ǵ�˳�����Ͱ����ǽ�������
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

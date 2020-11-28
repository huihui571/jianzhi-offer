/*<FH+>***************************************************************
*   Editor      : Visual Studio 2019
*   File name   : 04-��ά�����еĲ���.cpp
*   Author      : huihui571
*   Created date: 2020-11-21
*   Description : ��һ����ά�����У�ÿһ�ж����մ������ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳������
* �����һ������������������һ����ά�����һ���������ж��������Ƿ��и�������
*  
*<FH->***************************************************************/
#include <stdio.h>
#include <iostream>
#include <string>
#include <queue>
#include <stack>
#include <vector>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

/**
* ѡ�����Ͻǵ����ݽ��бȽϣ���Ϊ���Ͻ���һ������С�ģ�ͬʱ����һ�������ġ�(Ҳ����ѡ�����½ǵ�����)
*/
class Solution {
public:
    bool findInTable(vector<vector<int>>& nums, int target) {
        int rows = nums.size(), cols = nums[0].size();
        int i = 0, j = cols - 1;

        while (i < rows && col >= 0) {
            if (nums[i][j] == target) {
                return true;
            }
            else if (nums[i][j] > target) {
                j--;
            }
            else {
                i++;
            }
        }

        return false;
    }
};

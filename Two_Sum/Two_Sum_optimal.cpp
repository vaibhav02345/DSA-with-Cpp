#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> arr, int target)
{
    vector<int> result;
    int n = arr.size();
    int i = 0, j = n - 1;
    while (i < j)
    {
        int sum = arr[i] + arr[j];
        if (sum == target)
        {
            result.push_back(arr[i]);
            result.push_back(arr[j]);
            i++;
            j--;
        }
        else if (sum < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return result;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int target = 7;
    vector<int> result = pairSum(arr, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
}
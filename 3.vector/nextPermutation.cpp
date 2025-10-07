#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
void reverse(vector<int>&nums, int i, int j){
    while(i<j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
}
void nextPermutation(vector<int> &nums){
    int n = nums.size();
    // finding pivot index
    int idx = -1;
    for(int i=n-2; i>=0; i--){
        if(nums[i]<nums[i+1]){
            idx = i;
            break;
        }
    }
    if(idx== -1){  // if array is already greatest
        reverse(nums,0,n-1);
        return;
    }
    // 2) sorting/reversing after pivot
    reverse(nums.begin()+idx+1, nums.end());
    // 3) swapping idx and idx+1
    for (int i = idx + 1; i < n; i++) {
        if (nums[i] > nums[idx]) {
            swap(nums[idx], nums[i]);
            break;
        }
    }
}
int main(){
    cout<<"Enter size: ";
    int n; cin>>n;
    vector<int> nums;
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        int x; cin>>x;
        nums.push_back(x);
    }
    nextPermutation(nums);

    cout << "Next permutation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
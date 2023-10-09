#include <queue>
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue <int, vector<int>, greater<int> > pq;//creating min heap
        //firstly put all the array's elements to the min. heap
        // for(int i=0;i<nums.size();i++){
        //     pq.push(nums[i]); //pushing every element
        //     //now setting up a condition
        //     //only takes the elements upto k, and if the size of the minheap becomes gfreater than the k, just opo out that particular element
        //     if(pq.size()>k){
        //         pq.pop();
        //     }
        // }

        //if i just use the while loop, instead of this for loop
        // int i = 0;
        // while(i<nums.size()){
        //     pq.push(nums[i]);
        //     i++;

        //     //setting up the same condition
        //     if(pq.size()>k){
        //         pq.pop();
        //     }
        // }

        //if we will use the for each loop instead
        for(int i : nums){
            pq.push(i);
            if(pq.size()>k){
                pq.pop();
            }
        }
        return pq.top();
        }
};
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        //2 pointer technique
        int left =0;
        int right = 0;
        int sum=0;
        int smallest = INT_MAX;


       while(right < nums.size()) {
       sum += nums[right];

         if(sum>=target) {
            while(sum>=target && left<=right) {
            sum -= nums[left];
              left++;
           }
            smallest = min(smallest,(right-left+1)+1);  //new smallest
       }
      
           right++;
       }

       return smallest==INT_MAX?0:smallest;
       

    }
    
        
       
};
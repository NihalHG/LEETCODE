int maxArea(int* height, int heightSize) {
   int left,right;
   int max=0,area;
   left=0;
   right=heightSize-1;
   while(left<right){
     if(height[left]<height[right]){
        area=height[left]*(right-left);
        left++;
     }
     else{
        area=height[right]*(right-left);
        right--;
     }
     if(max<area)
       max=area;
   }
   return max;
    
}
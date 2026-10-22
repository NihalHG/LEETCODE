bool isPalindrome(int x) {
    long reverse=0;
    if(x<0)
      return 0;
    int temp=x;
    while(x!=0){
        reverse=reverse*10+x%10;
        x=x/10;
    }
    return reverse==temp; 
    
}
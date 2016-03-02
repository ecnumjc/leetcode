class Solution {
public:
    int addDigits(int num) {
       if (num<10)
       {
           return num;
       }
       int temp = 0;
       while(num>=10)
       {  
           temp += num%10;
           num = num/10;
       }
       
       addDigits(temp+num);
        
        
    }
};
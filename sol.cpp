class Solution {
    public:
        int findComplement(int num) {
    
    
         // here we try to solve this problem using the brute forces.     
          
    
          string s = "";
          
           // converting in the binary number.
    
           while(num>0){
    
             if(num % 2 == 1){
              s += '1';
             }
             else{
                s += '0';
             }
              num = num/2;
           }
         
            reverse(s.begin(),s.end());
    
            for(int i = 0; i<s.size(); i++){
    
               if(s[i] == '1'){
                s[i] = '0';
               }
               else{
                s[i] = '1';
               }
    
    
            }
    
          int num1 = 0;
           int n = s.size();
          for(int i =  n -1; i>=0; i--){
    
            num1 += (s[i]-'0')*pow(2,n-1-i); 
    
          }
          return num1;
        }
    };
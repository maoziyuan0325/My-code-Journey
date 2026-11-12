void reverseString(char* s, int sSize) {
    int left=sSize-1;
    int i=0;
    
while(i<left){
char temp=s[left];
s[left]=s[i];
s[i]=temp;
left--;
i++;}

}





    

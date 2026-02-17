#include<stdio.h>
int main(){
    char str[100];
    int i, j, len=0, counted[100]={0};
    
    printf("Enter any string: ");
    scanf("%s", str);
    
    // Length શોધો
    while(str[len] != '\0'){
        len++;
    }
    
    printf("Frequency of each letter:\n");
    
    for(i=0; i<len; i++){
        
        // આ character પહેલા count થઈ ગયો છે?
        if(counted[i] == 1){
            continue;  // skip કરો
        }
        
        int count = 1;
        
        for(j=i+1; j<len; j++){
            if(str[i] == str[j]){
                count++;
                counted[j] = 1;  // mark કરો
            }
        }
        
        printf("%c => %d\n", str[i], count);
    }
    
    return 0;
}

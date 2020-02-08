#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

string getString(string s, int n ){

}

int main(){
    char word[30];
    int length;
    bool inPalindrome = true;

    printf("단어나 넣어라 스발로마: ");
    scanf("%s", word);
    length = strlen(word);

    for (int i =0; i<length/2; i++){
        if(word[i] != word[length -1-i]){
            inPalindrome = false;
            printf("NO");
            break;
        }
        else{
            if((word[i]=="?") && word[length -1-i]!="?"){
                word[i] = word[length-1-i];
                for(int j =0; j<length(word); j++)
                printf("%s",word[j]);
            }
        }
        

    }
    

    return 0;
}

char * solution(char *S) {
    int DP[1002][1002];
    int length;
    //int inPalindrome = 0;
    length = strlen(S);
    //for (int i =0; i<length; i++){
    //    DP[i][i] =1;
//
  //  }
    for (int i =0; i<length/2; i++){
        if((S[i] != S[length -1-i])&& S[i]!="?" && S[length -1-i]!="?" ){
            //inPalindrome = 1;
            printf("NO");
            break;
        }
        else if{
            if((S[i]=="?") && (S[length -1-i]!="?")){
                S[i] = S[length-1-i];
                return S; 
            }
            else((S[i]!="?") && (S[length -1-i]=="?")){
                S[i] = S[length-1-i];
                return S; 
            }
        }
        else{

        }
    }
}

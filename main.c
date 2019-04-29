
//rotaion cipher encrypting code
#include<stdio.h>
#include<stdlib.h>
// a=0, b=1 ,c=2 ,d=3 e=4 
// use ascii code to convert them
 

void rotationcode(char*randomtext,int spacing);

int main(void){
    
    int spacing =1; //intializing key spacing for encryption
    char randomtext[101]; //intializing input text
    
    
    printf("enter text for encrypt:") //telling user to input text for encryption
    
    
    printf("ciphered text:"); //the encrypted cipher appears here
    
    
    
    
} 
void rotationcip(char*randomtext,int spacing){
    
    int i=0; //intializing values 
    int cypvalue;
    char cip;
    
    while(randomtext[i]!='\0'&&(randomtext)-1>i){ //tried to add a loop to encrypt every letter of the code 
    cypvalue=((int)randomtext[i]-97 + key)%26+97; // could not get this part working
    
    cip=(char)(cypvalue);
    cip++;
    
    printf("%d",cip);
}

    }
}
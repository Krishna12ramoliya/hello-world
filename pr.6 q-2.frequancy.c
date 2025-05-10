#include<stdio.h> 

int main()
{
    
    char str[100] ="development";
    int i;
    int freq[256] = {0};
    
   
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }
    
    
    for(i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
        {
            printf(" %c => %d\n", i, freq[i]);
        }
    
	}
}
/*
d => 1
 e => 3
 l => 1
 m => 1
 n => 1
 o => 1
 p => 1
 t => 1
 v => 1

*/

	


#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[30],c='*';  
    int  i,j,k=0,n;
 
    printf("Enter  the string : ");
    scanf("%[^\n]s",&s); 
    for(i=0;s[i];i++)
    {
    	if(!(s[i]==c))
    	{
    		for(j=i+1;s[j];j++)
            {
            	if(s[i]==s[j])
            	   s[j]=c;
        	
		    }
    		
		}
     	
     	
    }
 
    for(i=0;s[i];i++)
    {
     	s[i]=s[i+k];
 
     	
     	if(s[i]==c)
     	{
		  k++;
		  i--;
	    }
     	
    }
    printf("New String:");
 
 	 printf("%s",s);
 	 
     
    return 0;
}




/*read few elements in to an array and search for the element what you have entered present in the array or not 

5

input    :   a[5]={10,20,30,40,40}

searchkey :   40
 logic:


a[0]==40  false,
a[1]==40  false
a[2]==40  false
a[3]==40   true

if(a[i]==key
position =i
*/
#include<stdio.h>
  
int main()
{
    int a[10],i,key,n;
    printf("How many elements?");
    scanf("%d",&n);

    
    printf("Enter array elements:n\n");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
     
    printf("Enter element to search:\n");
    scanf("%d",&key);
     
    for(i=0;i<n;i++)

        if(a[i]==key)
//count++;

            break;
     
    if(i<n)
        printf("Element found at index %d",i);
    else
        printf("Element not found");
  
    return 0;
}


//10 20 30 30







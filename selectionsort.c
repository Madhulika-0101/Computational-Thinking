/*Algorithm for Selection Sort:

Step 1 − Set min to the first location

Step 2 − Search the minimum element in the array

Step 3 – swap the first location with the minimum value in the array

Step 4 – assign the second element as min.

Step 5 − Repeat the process until we get a sorted array.


*/
//exampe1
//input array   2 3 4 1 0 
/*assume a[0]=small
small=i=0
compare a[0]>a[1] not true so increment a[1+1]

comapare a[0]>a[2] not true so incremnet a[2+1]

compare a[0]>a[3] , it is true so set small as j that is 3 so 
small =3 , means a[3], then increment a[3+1]
compare a[small]>a[4]( small is chnaged from 0 to 3rd position), condition true so again change small j value that is 4
small=4 , by thenno more elements menas jth loop gets terminated so come out and go for swap logic , that is swap 2 and 0
so 0 3 4 1 2 
repeat the procedure..



0 3 4 1 2 
0 1 4 3 2
0 1 2 3 4
0 1 2 3 4 



example2 

input array: 2 3 4 1 5 

1 3 4 2 5 

1 3 4 2 5 
small 3
1 2 4 3 5 

small 4 
 1 2 3 4 5 
small 
//final outputt 1 2 3 4 5
*/

//8 4 6 9 2 3 1

#include <stdio.h>
int main()
{
int a[100], n, i, j, small, swap;
printf("Enter number of elementsn");
scanf("%d", &n);
printf("Enter %d Numbersn", n);

//2 3 4 1 0 
//8 4 6 9 2 3 1
for (i = 0; i < n; i++)
scanf("%d", &a[i]);
for(i = 0; i < n - 1; i++)
{
//finding smallest
small=i; ///small=0
     //next iteration small=1
for(j = i + 1; j < n; j++)
{
if(a[small] > a[j]) 
//a[0]>a[1],  //i=0,j=1, //2>3, no j=2 2>4 no , j=3 , 2>1 small =3, j=4,   a[3]>a[4], small =4, 5
//a[1]>a[2], if condition false small=1,
// a[1]>a[3], if condition false small 1,
//a[1]>a[4]. if condition true then small=j, small=4
//a[4]>a[5] if condition is false small=4
//a[4]>a[6] if condition is true so set small=j, small=6
//a[6]
small=j;    // small=6
}
//swap

if(small != i)
{
swap=a[i];
a[i]=a[small];      
a[small]=swap;
}


///logic of swap    a[i]=8=box1,a[small]= 1=box2   , 

//box1=1 red color ball
//box2=1 green color ball

//box3=1 red color ball=box1
//box1=1 green color ball=box2
//box2=1 red color ball=box3








}
printf("Sorted Array\t");
for(i = 0; i < n; i++)
printf("%d\t", a[i]);
return 0;
}

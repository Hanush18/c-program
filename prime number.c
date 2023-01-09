#include<stdio.h>
main()
{
    int num,PrimeCount=0,i,j,flag,prime=1,a,b;
    printf("\n enter the number:");
    scanf("%d",&num);
    while(num!=PrimeCount)
    {
        flag=0;
        prime++;
        for(i=2;i<=(prime/2);i++)
        {
            if(prime%i==0)
                flag=1;
        }
        if(flag==0)
        {
            PrimeCount++;
        }
    }
    
    printf("%d prime number is: %d\n",num,prime);
    int brk=0;
    printf("%d prime numbers after %d is :",num,prime);
    for(i=prime+1;i<=prime+100;i++){
    	int ch=0;
    	if(brk==num){
    		break;
		}
    	for(j=2;j<i;j++){
    		if(i%j==0){
    			ch++;
			}
		}
		if(ch==0){
			printf("%d ",i);
			brk++;
		}
	}
} 


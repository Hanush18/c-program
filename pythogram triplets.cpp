#include<stdio.h>
main()
{
    int initial,final,a,b,c;
    printf("Enter the range : ");
    scanf("%d",&final);
    printf("The Pythogorean Triplets in the given range are :\n");
    for(a=1;a<=final;a++){
        for(b=a;b<=final;b++){
            for(c=b;c<=final;c++){
                if(c*c==a*a+b*b){
                    printf("%d , %d , %d\n",a,b,c);
                }
            }
        }
    }
}


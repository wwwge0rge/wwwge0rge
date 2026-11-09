#include <stdio.h>
#include <stdlib.h>



int isPrime(int N){
    int i,isPrime=0;
        for (i=2;i<=N/2;++i){
            if(N%i==0){
                isPrime=1;
                break;
            }
        }
    if (isPrime==0){
        return 1;
    }else
        return 0;
}

int isSumOfNum(int N){
    int output=0;
    if (N<10){
        output=1;
    }
    else
    {
        for (int i=10;i<=N;i++){
            int sum,currentDigit,currentNum;
            currentNum=i;
            sum=currentNum;
            while(currentNum>0){
                currentDigit=currentNum%10;
                currentNum=currentNum/10;
                sum=sum+currentDigit;
            }
            if (sum==N){
                output=1;
                break;
            }
        }
    }
    return output;
}

int main()
{
    int N;
    scanf("%d",&N);
    if (isPrime(N)==1&&isSumOfNum(N)==0){
        printf("the num is atomic");

    }else
        printf("non atomic");
        printf("%d %d",isPrime(N),isSumOfNum(N));


    return 0;
}

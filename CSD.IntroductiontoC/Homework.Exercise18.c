#include <stdio.h>

int main()
{
    int N,w;
    scanf("%d %d",&N,&w);
    if (N>=2&&N<=13&&w>=1&&w*2<=N){
        for(int i=0;i<w;i++){
            for(int i=0;i<N;i++){
                printf("*");
            }
            printf("\n");
        }
        for(int i=0;i<(N-w*2);i++){
            for (int j=0;j<w;j++){
                printf("*");
            }
            for (int j=0;j<(N-w*2);j++){
                printf(" ");
            }
            for (int j=0;j<w;j++){
                printf("*");
            }
            printf("\n");
        }
        for(int i=0;i<w;i++){
            for(int i=0;i<N;i++){
                printf("*");
            }
            printf("\n");
        }
    }else{
        printf("Wrong Input");
    }

    return 0;
}

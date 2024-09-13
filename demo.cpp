#include<stdio.h>
#include<math.h>

int prime[100001];
void sang(){
    for(int i=0; i<=100000;i++ ) prime[i]= 1;
    prime[0] = prime[1] =0;
    for(int i = 2; i<= 100000; i++){
        if(prime[i]){
            for(int j = i*i ; j<=100000; j++)
            prime[j] =0 ;
        }
    }
}

int main(){
    int n; 
    sang();
    scanf("%d", &n);
    printf("%d",prime[n]);
    return 0;
}
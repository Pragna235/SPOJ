#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long n,k=1;
        int i=1,j=1;
        scanf("%ld",&n);
        while(k<n)
        {
            //printf("In THE WHILE Loop\n");
            //printf("k=%d and n=%d\n",k,n);
            j++,k++;
            //printf("j=%d and k=%d\n",j,k);
            if(k==n) break;

            while(j>1&&k<n){
                  //  printf("In Fist sub while loop\n");
                i++,j--,k++;
                //printf("i=%d and j=%d and k=%d\n",i,j,k);
            }
            if(k==n) break;

            {i++,k++;
            //printf("In second if block\n");
             //printf("i=%d and k=%d\n",i,k);
            }
            if(k==n) break;

            while(i>1&&k<n){
                i--,j++,k++;
               // printf("In second sub while loop\n");
                //printf("i=%d and j=%d and k=%d\n",i,j,k);}

        }

    }
    printf("TERM %d IS %d/%d\n",n,i,j);

}
 return 0;
 }


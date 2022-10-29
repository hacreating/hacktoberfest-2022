#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
   
   int T;
   scanf("%d",&T);
   
   long seq[T];
   
   int i=0,subseqlen=0,maxsubseqlen=0,start=0;
  
   for(i=0;i<T;i++)
       scanf("%ld",&seq[i]);
  
   for(i = 0; i < T-1; i++)
   {
       
       if(seq[i]<=seq[i+1])
       {
           subseqlen++;
           
           if(subseqlen>maxsubseqlen)
           {
               maxsubseqlen=subseqlen;
               start=i+1-subseqlen;
           }
       }
       else
       {
           subseqlen=0;
       }
   }
   int subseq[maxsubseqlen+1];
   for(i=0;i<=maxsubseqlen;i++)
   {
       subseq[i]=seq[start+i];
       printf("%d ",subseq[i]);
   }
  
   return 0;

}

#include<stdio.h>
#include<stdlib.h>
main()
{ int n,p,d,i,j,l,y,k,v,w;
  printf("\n\nEnter ACTUAL no. of data bits : ");
  scanf("%d",&v);
  for(i=1;i>0;i++)
   {  if(v>pow(2,i)-i-1)
        continue;
      else
       { p=i;
        d=pow(2,p)-p-1;
        n=p+d;
        break;
          }
           }

 int B[n];
 printf("\n\tEnter the Encoded Message as given by PROGRAM_1 after passing through Noisy Medium:\n\n ");
 printf("\n");
 for(i=1;i<=n;i++)
   {  printf("Enter the bit M[%d]:  ",i);
      scanf("%d",&B[i-1]);
          }
printf("\n\n");


int P[p];
int b=0;

 for(i=1;i<=n;i++)
      {
                   int s=0;
                   for(j=0;j<=i;j++)
                      {
                         if(i==pow(2,j))
                           {         k=i+1;
                                     l=i;
                                     xy:
                                     while((k<=2*l-1)&&(k<=d+p))
                                      {
                                         s=s+B[k-1];
                                         k++;
                                          }
                                        k=k+i;
                                        l=l+i;
                                        if(k<=d+p)
                                        goto xy;


                                        if(s==1)
                                        P[b]=1;
                                        else

                                        s=s%2;
                                        if(s==1)
                                        P[b]=1;
                                        else
                                        P[b]=0;
                                        b++;
                                        break;

                                   }
                         }

         }

printf("\n\n");
b=0;
int g=0;
printf("\n");
for(i=1;i<=n;i++)
 {
        for(j=0;j<=i;j++)
         if(i==pow(2,j))
         {
                if(B[i-1]!=P[b])
                 {
                   g+=pow(2,b);   }
                   b++;
             }
}
if(g==0)
printf(" \t\t\t\tNO ERROR ");
else
printf("Error is at %dth position\n" , g);
if(g!=0)
 {  if(B[g-1]==0)
    B[g-1]=1;
    else 
    B[g-1]=0;
   }
y=0;
w=1;
printf("\n\n\t\t NOW , DECODED and ERROR REMOVED Message is following: \n\n\n\n\t");
for(i=1;i<n+1;i++)
{
        for(j=0;j<=i;j++)
           {
             if(i==pow(2,j))
                 {y++;
                  break; 
                     }
              }        
      if(y==1)
    {  y--;
       continue;
        }
      else
        if(w<=v)
        {  printf("%d",B[i-1]);
           w++;
       }
         }
    
printf("\n\n"); 
} 
#include<stdio.h>
#include<stdlib.h>
main()
{
  int n,d,i,j,p,l,k,q,v;
  printf("\n\nEnter no. of Data Bits : ");
  scanf("%d",&v);
  for(i=1;i<=n;i++)
   {  if(v>pow(2,i)-i-1)
      continue;
      else
      p=i;
      d=pow(2,p)-p-1;
      n=p+d;
      break;
          }
printf("\n\n");
  int B[n];   
  int x=1;
  for(i=1;i<=n;i++)
  
  {               

                   for(j=0;j<=i;j++)
                      { 
                         if(i==pow(2,j))
                            {l=1;
                              break;
                                } 
                         } 
       if(l==1)
         {l--;
          continue; }
       if(x<=v)
         {printf("enter data bit[%d] : ",x);
             scanf("%d",&B[i-1]);
                   } 
          else
         B[i-1]=0;
        x++;
    
    }  
  
 int s;
 for(i=1;i<=p+d;i++)
      {      
                    s=0;
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
                                        B[i-1]=1;
                                        else
                                         
                                        s=s%2; 
                                        if(s==1)
                                        B[i-1]=1;
                                        else
                                        B[i-1]=0;
                                         break; 
                                   }
                         }
        
         }

printf("\n\n\nENCODED MESSAGE IS : ");
for(i=0;i<d+p;i++)
     printf("%d ",B[i]);
     printf("\n\n");
 }
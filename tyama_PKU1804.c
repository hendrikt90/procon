a[999];main(b,c,n,i,j,r,t){for(scanf("%d",&c);b<=c;printf("%d\n\n",r),b++){for(printf("Scenario #%d:\n",b),scanf("%d",&n),i=0;i<n;scanf("%d",a+i++));for(r=i=0;i<n;i++)for(j=0;j++<n-1;)if(a[j-1]>a[j])r++,t=a[j-1],a[j-1]=a[j],a[j]=t;}}
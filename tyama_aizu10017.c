main(n,x,i,j,k,r){for(;scanf("%d%d",&n,&x),n;printf("%d\n",r))for(r=0,i=1;i<n-1;i++)for(j=i+1;j<n;j++)for(k=j+1;k<=n;k++)if(i+j+k==x)r++;exit(0);}
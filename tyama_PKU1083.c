a[200];main(t,n,x,y,r,s){for(scanf("%d",&t);t--;printf("%d\n",r))for(memset(a,0,800),r=0,scanf("%d",&n);n--;)for(scanf("%d%d",&x,&y),x--,y--,s=(x/=2)<(y/=2)?1:-1;x!=y+s;x+=s)a[x]+=10,r=r<a[x]?a[x]:r;}
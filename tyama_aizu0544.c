N[1000];main(n,m,i,c,r,x){
	for(;scanf("%d%d",&n,&m),n;printf("%d\n",r)){
		for(i=0;i<n;i++)scanf("%d",N+i);
		for(r=c=i=0;i<m;i++){
			scanf("%d",&x);
			if(!r){c+=x,c+=N[c];if(c>=n-1)r=i+1;}
		}
	}
	exit(0);
}
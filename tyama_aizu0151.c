m[300][300];main(n,i,j,k,M){for(;scanf("%d",&n),n;printf("%d\n",M)){
for(getchar(),i=1;i<=n;m[j][i]=0,getchar(),i++)for(j=1;j<=n;j++)m[j][i]=getchar()-'0';
for(j=1;j<=n+1;j++)m[j][i]=0;
for(M=0,i=1;i<=n;i++)for(j=1;j<=n;j++)if(m[i][j]){
	for(k=1;;k++)if(!m[i+k][j])break;if(M<k)M=k;
	for(k=1;;k++)if(!m[i][j+k])break;if(M<k)M=k;
	for(k=1;;k++)if(!m[i+k][j+k])break;if(M<k)M=k;
	for(k=1;;k++)if(!m[i-k][j+k])break;if(M<k)M=k;
}
}exit(0);}
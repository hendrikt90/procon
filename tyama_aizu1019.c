a[100];main(n,k,x,i){for(;scanf("%d%d",&n,&k),n;){for(i=0;i<k;i++)scanf("%d",a+i);for(;n--;)for(i=0;i<k;a[i++]-=x)scanf("%d",&x);for(i=0;i<k&&a[i]>=0;i++);puts(k-i?"No":"Yes");}exit(0);}
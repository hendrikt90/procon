main(a,b,c,d,e){scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);b=b<a?b:a;printf("%d\n",(b<c?b:c)+(d<e?d:e)-50);exit(0);}
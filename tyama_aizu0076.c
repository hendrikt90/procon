main(n){double x,y,u;for(;scanf("%d",&n),--n>0;printf("%f\n%f\n",x,y))for(x=1,y=0;n--;x+=cos(u),y+=sin(u))u=atan2(y,x)+1.570796;exit(0);}
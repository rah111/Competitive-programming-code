    #include <stdio.h>
    #include <stdlib.h>
     
     
    main(){
     
    int i,j,k,l,m,n,o,p;
     
    scanf("%d%d",&i,&j);
     
    int a[i];
    n=0;
     
    for(l=0;l<i;l++){
     
        scanf("%d",&p);
     
        if(j%p==0){
     
            o=(j/p);
            a[n]=o;
            n=n+1;
        }} m=a[0];
     
        for(k=0;k<n;k++){
     
            if(a[k]<m){ m=a[k];}
        }
     
     
    printf("%d",m);
    return 0;
    }
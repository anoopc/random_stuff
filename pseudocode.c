i = 1;
label1:
    i++;
    k=0;
    n=0;
    label2:
        k++;
        l=i/k;
        m=i%k;
        if (l-k<0) goto label3;
        if (m==0) goto label5;
        goto label2;
        label5:
        m=k;
        label4:
            p=l;
            l=m;
            m=p%m;
            if (m==0) goto label6;
            goto label4;
        label6:
        if (l-1==0) goto label7;
        goto label2;
        label7: n++;
    label3:
    if (2-i<0) goto label9;
    goto label10;
    label9: print ",";
    label10:
    printf("%d:%d,",i,n);
    if (i-1000<0) goto label1;
exit;
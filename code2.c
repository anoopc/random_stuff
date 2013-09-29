/*
//i=1 [empty]
ss01l	//push 1 on the stack

lss1011l	//mark label1: id=11

//i++	[i]
ss01l	//push 1 on the stack
tsss	// add 1 to i

//k=0 [i]
ss011l	//push address of k(3)
ss00l	//push 0
tts		//store k

//n=0 [i]
ss0100l	//push address of n(4)
ss00l	//push 0
tts		//store n

lss1100l	//mark label2: id=12

//k++ [i]
ss011l	//push address of k
sls		//duplicate address of k
ttt		//retrieve k
ss01l	//push 1 on the stack
tsss	// add 1 to k
tts		//store k

//temp=i%k [i]
sls		//duplicate i [i,i]
sls		//duplicate i [i,i,i]
ss011l	//push address of k
ttt		//retrieve k
tstt	//i%k [i,i,i%k]

//l=i/k stack[i,i,i%k]
slt		//swap top 2 items [i,i%k,i]
ss011l	//push address of k [i,i%k,i,&k]
ttt		//retrieve k [i,i%k,i,k]
tsts	//push i/k [i,i%k,i/k]
sls		//duplicate i [i,i%k,i/k,i/k]
ss0101l	//push address of l(5) [i,i%k,i/k,i/k,&l]
slt		//swap top 2 items [i,i%k,i/k,&l,i/k]
tts		//store l [i,i%k,i/k]


//if (l-k<0) goto label3;stack[i,i%k,i/k]
ss011l	//push address of k [i,i%k,i/k,&k]
ttt		//retrieve k [i,i%k,i/k,k]
tsst	//push l-k [i,i%k,i/k-k]
ltt1101l	// if top < 0, go to label3:id=13 [i,i%k]

//if (temp==0) goto label5; (should be on top of the stack) [i,i%k]
lts1111l	//if top 0 goto label5:id=15 [i]

//goto label2;
lsl1100l

//label5:
lss1111l

//m=k;
ss0110l	//push address of m(6)
ss011l	//push address of k
ttt		//retrieve k
tts		//store m

//label4:
lss1110l

//debug
//ss01000001l //push ASCII-65('A') on stack
//tlss	//print top of the stack

//temp=l;
//l=m;
//m=temp%m;[&m]
ss0110l	//push address of m(6)
sls		//duplicate address of m
ss0101l	//push address of l(5)
sls		//duplicate address of l
ttt		//retrieve l
slt		//swap top 2 items
ss0110l	//push address of m(6)
ttt		//retrieve m
tts		//store l = m
ss0110l	//push address of m(6)
ttt		//retrieve m
tstt	//temp%m
tts		//store m = temp%m

//if (m==0) goto label6;[stack has address of m at the top]
ttt		//retrieve m
lts10000l	//if top 0 goto label6:id=16

//goto label4;
lsl1110l

//label6:
lss10000l

//n+=1/l
ss0100l	//push address of n
sls		//duplicate address of n
ttt		//retrieve n
ss01l	//push 1 on the stack
ss0101l	//push address of l(5)
ttt		//retrieve l
tsts	//push 1/l
tsss	// add 1/l to n
tts		//store n

//goto label2;
lsl1100l

//label3:
lss1101l

//pop_stack();    //remove temp
sll

//if (2-i<0) goto label9
sls		//duplicate i
ss010l	//push 2 on the stack
slt		//swap top 2 items
tsst	//push 2-i
ltt10011l	// if top < 0, go to label9:id=19

//goto label10
lsl10100l

//labe9:
lss10011l

//printf ","
ss0101100l //push ASCII-44(',') on stack
tlss	//print top of the stack

//labe10:
lss10100l

//printf("%d:%d",i,n);
sls		//duplicate i
tlst	//print top of the stack
ss0111010l //push ASCII-58(':') on stack
tlss	//print top of the stack
ss0100l	//push address of n
ttt		//retrieve n
tlst	//print top of the stack


//if (i-1000<0) goto label1;
sls		//duplicate i
ss01111101000l	//push 1000
tsst	//push i-1000
ltt1011l	// if top < 0, go to label1:id=11

lll		//end of programme
*/
/*
//i=1
ss01l	//push 1 on the stack
sls		//duplicate top of the stack
tts		//store i = 1 at address 1

lss1011l	//mark label1: id=11

//i++
ss01l	//push address of i
sls		//duplicate address of i
ttt		//retrieve i
ss01l	//push 1 on the stack
tsss	// add 1 to i
tts		//store i

//k=0
ss011l	//push address of k(3)
ss00l	//push 0
tts		//store k

//n=0
ss0100l	//push address of n(4)
ss00l	//push 0
tts		//store n

lss1100l	//mark label2: id=12

//k++
ss011l	//push address of k
sls		//duplicate address of k
ttt		//retrieve k
ss01l	//push 1 on the stack
tsss	// add 1 to k
tts		//store k


//l=i/k
ss01l	//push address of i
ttt		//retrieve i
sls		//duplicate i
ss011l	//push address of k
ttt		//retrieve k
tsts	//push i/k
ss0101l	//push address of l(5)
slt		//swap top address and value of l
tts		//store l


//m=i%k (stack already has i)
ss011l	//push address of k
ttt		//retrieve k
tstt	//i%k
ss0110l	//push address of m(6)
slt		//swap top address and value of m
tts		//store m


//if (l-k<0) goto label3;
ss0101l	//push address of l(5)
ttt		//retrieve l
ss011l	//push address of k
ttt		//retrieve k
tsst	//push l-k
ltt1101l	// if top < 0, go to label3:id=13

//if (m==0) goto label5;
ss0110l	//push address of m(6)
ttt		//retrieve m
lts1111l	//if top 0 goto label5:id=15

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
//m=temp%m;[m]
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

//if (l-1==0) goto label7
ss0101l	//push address of l(5)
ttt		//retrieve l
ss01l	//push 1 on the stack
tsst	//push l-1
lts10001l	//if top 0 goto label7:id=17

//goto label2;
lsl1100l

//label7:
lss10001l

//n++
ss0100l	//push address of n
sls		//duplicate address of n
ttt		//retrieve n
ss01l	//push 1 on the stack
tsss	// add 1 to n
tts		//store n

//goto label2;
lsl1100l

//label3:
lss1101l

//if (2-i<0) goto label9
ss010l	//push 2 on the stack
ss01l	//push address of i
ttt		//retrieve i
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
ss01l	//push address of i
sls		//duplicate address of i
ttt		//retrieve i
sls		//duplicate i
tlst	//print top of the stack
ss0111010l //push ASCII-58(':') on stack
tlss	//print top of the stack
ss0100l	//push address of n
ttt		//retrieve n
tlst	//print top of the stack


//if (i-1000<0) goto label1;
ss01l	//push address of i
ttt		//retrieve i
ss01111101000l	//push 1000
tsst	//push i-1000
ltt1011l	// if top < 0, go to label1:id=11

lll		//end of programme
*/
// War mein erster Projekt mit WINAPI 32 , deshalb ein bisschen komplizierter code

#include<windows.h>
#include<time.h>

int Beant[31];
int Num;
WNDCLASS a;
HWND b;
MSG c;
HWND FRG;
HWND ATW;
HWND BTW;
HWND CTW;
HWND DTW;
HWND WYC;
HWND a1;
HWND b1;
HWND c1;
HWND d1;
HWND a2;
HWND b2;
HWND c2;
HWND d2;
HWND a3;
HWND b3;
HWND c3;
HWND d3;
HWND a4;
HWND b4;
HWND c4;
HWND d4;
HWND a5;
HWND b5;
HWND c5;
HWND d5;
HWND a6;
HWND b6;
HWND c6;
HWND d6;
HWND a7;
HWND b7;
HWND c7;
HWND d7;
HWND a8;
HWND b8;
HWND c8;
HWND d8;
HWND a9;
HWND b9;
HWND c9;
HWND d9;
HWND a10;
HWND b10;
HWND c10;
HWND d10;
HWND a11;
HWND b11;
HWND c11;
HWND d11;
HWND a12;
HWND b12;
HWND c12;
HWND d12;
HWND a13;
HWND b13;
HWND c13;
HWND d13;
HWND a14;
HWND b14;
HWND c14;
HWND d14;
HWND a15;
HWND b15;
HWND c15;
HWND d15;
HWND a16;
HWND b16;
HWND c16;
HWND d16;
HWND a17;
HWND b17;
HWND c17;
HWND d17;
HWND a18;
HWND b18;
HWND c18;
HWND d18;
HWND a19;
HWND b19;
HWND c19;
HWND d19;
HWND a20;
HWND b20;
HWND c20;
HWND d20;
HWND a21;
HWND b21;
HWND c21;
HWND d21;
HWND a22;
HWND b22;
HWND c22;
HWND d22;
HWND a23;
HWND b23;
HWND c23;
HWND d23;
HWND a24;
HWND b24;
HWND c24;
HWND d24;
HWND a25;
HWND b25;
HWND c25;
HWND d25;
HWND a26;
HWND b26;
HWND c26;
HWND d26;
HWND a27;
HWND b27;
HWND c27;
HWND d27;
HWND a28;
HWND b28;
HWND c28;
HWND d28;
HWND a29;
HWND b29;
HWND c29;
HWND d29;
HWND a30;
HWND b30;
HWND c30;
HWND d30;
HWND a31;
HWND b31;
HWND c31;
HWND d31;
HWND UATW;
int rndo=0;
_stdcall RandomizeQ();
_stdcall WndProc(void);
_stdcall Frage1();
_stdcall Frage2();
_stdcall Frage3();
_stdcall Frage4();
_stdcall Frage5();
_stdcall Frage6();
_stdcall Frage7();
_stdcall Frage8();
_stdcall Frage9();
_stdcall Frage10();
_stdcall Frage11();
_stdcall Frage12();
_stdcall Frage13();
_stdcall Frage14();
_stdcall Frage15();
_stdcall Frage16();
_stdcall Frage17();
_stdcall Frage18();
_stdcall Frage19();
_stdcall Frage20();
_stdcall Frage21();
_stdcall Frage22();
_stdcall Frage23();
_stdcall Frage24();
_stdcall Frage25();
_stdcall Frage26();
_stdcall Frage27();
_stdcall Frage28();
_stdcall Frage29();
_stdcall Frage30();
_stdcall Frage31();

_stdcall WinMain(HINSTANCE i,HINSTANCE j,HINSTANCE k,HINSTANCE p)
{
	a.hInstance=i;
	a.lpszClassName="Main";
	a.hbrBackground=6;
	a.lpfnWndProc=WndProc;
	a.hCursor=LoadCursor(0,IDC_ARROW);
	RegisterClass(&a);
	b=CreateWindow("Main","Spiel-Realien",WS_OVERLAPPEDWINDOW,1,100,400,300,0,0,i,0);
	ShowWindow(b,1);
	RandomizeQ();
	while(GetMessage(&c,0,0,0))
	{
		TranslateMessage(&c);
		DispatchMessage(&c);
	}
}

_stdcall WndProc(UINT i,UINT j,UINT k,UINT p)
{
	if(j==WM_DESTROY)
		PostQuitMessage(0);
	if(j==WM_COMMAND)
	{
		if(p==d1)
		{
			DestroyWindow(FRG);
			DestroyWindow(a1);
			DestroyWindow(ATW);
			DestroyWindow(b1);
			DestroyWindow(BTW);
			DestroyWindow(c1);
			DestroyWindow(CTW);
			DestroyWindow(d1);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==c2)
		{
			DestroyWindow(FRG);
			DestroyWindow(a2);
			DestroyWindow(b2);
			DestroyWindow(c2);
			DestroyWindow(d2);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==d3)
		{
			DestroyWindow(FRG);
			DestroyWindow(a3);
			DestroyWindow(b3);
			DestroyWindow(c3);
			DestroyWindow(d3);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==b4)
		{
			DestroyWindow(FRG);
			DestroyWindow(a4);
			DestroyWindow(b4);
			DestroyWindow(c4);
			DestroyWindow(d4);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==a5)
		{
			DestroyWindow(FRG);
			DestroyWindow(a5);
			DestroyWindow(b5);
			DestroyWindow(c5);
			DestroyWindow(d5);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==c6)
		{
			DestroyWindow(FRG);
			DestroyWindow(a6);
			DestroyWindow(b6);
			DestroyWindow(c6);
			DestroyWindow(d6);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==d7)
		{
			DestroyWindow(FRG);
			DestroyWindow(a7);
			DestroyWindow(b7);
			DestroyWindow(c7);
			DestroyWindow(d7);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==c8)
		{
			DestroyWindow(FRG);
			DestroyWindow(a8);
			DestroyWindow(b8);
			DestroyWindow(c8);
			DestroyWindow(d8);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==c9)
		{
			DestroyWindow(FRG);
			DestroyWindow(a9);
			DestroyWindow(b9);
			DestroyWindow(c9);
			DestroyWindow(d9);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==b10)
		{
			DestroyWindow(FRG);
			DestroyWindow(a10);
			DestroyWindow(b10);
			DestroyWindow(c10);
			DestroyWindow(d10);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==c11)
		{
			DestroyWindow(FRG);
			DestroyWindow(a11);
			DestroyWindow(b11);
			DestroyWindow(c11);
			DestroyWindow(d11);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==c12)
		{
			DestroyWindow(FRG);
			DestroyWindow(a12);
			DestroyWindow(b12);
			DestroyWindow(c12);
			DestroyWindow(d12);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==b13)
		{
			DestroyWindow(FRG);
			DestroyWindow(a13);
			DestroyWindow(b13);
			DestroyWindow(c13);
			DestroyWindow(d13);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==b14)
		{
			DestroyWindow(FRG);
			DestroyWindow(a14);
			DestroyWindow(b14);
			DestroyWindow(c14);
			DestroyWindow(d14);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==c15)
		{
			DestroyWindow(FRG);
			DestroyWindow(a15);
			DestroyWindow(b15);
			DestroyWindow(c15);
			DestroyWindow(d15);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==c16)
		{
			DestroyWindow(FRG);
			DestroyWindow(a16);
			DestroyWindow(b16);
			DestroyWindow(c16);
			DestroyWindow(d16);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==a17)
		{
			DestroyWindow(FRG);
			DestroyWindow(a17);
			DestroyWindow(b17);
			DestroyWindow(c17);
			DestroyWindow(d17);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==b18)
		{
			DestroyWindow(FRG);
			DestroyWindow(a18);
			DestroyWindow(b18);
			DestroyWindow(c18);
			DestroyWindow(d18);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==c19)
		{
			DestroyWindow(FRG);
			DestroyWindow(a19);
			DestroyWindow(b19);
			DestroyWindow(c19);
			DestroyWindow(d19);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==b20)
		{
			DestroyWindow(FRG);
			DestroyWindow(a20);
			DestroyWindow(b20);
			DestroyWindow(c20);
			DestroyWindow(d20);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==a21)
		{
			DestroyWindow(FRG);
			DestroyWindow(a21);
			DestroyWindow(b21);
			DestroyWindow(c21);
			DestroyWindow(d21);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==a22)
		{
			DestroyWindow(FRG);
			DestroyWindow(a22);
			DestroyWindow(b22);
			DestroyWindow(c22);
			DestroyWindow(d22);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==c23)
		{
			DestroyWindow(FRG);
			DestroyWindow(a23);
			DestroyWindow(b23);
			DestroyWindow(c23);
			DestroyWindow(d23);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==b24)
		{
			DestroyWindow(FRG);
			DestroyWindow(a24);
			DestroyWindow(b24);
			DestroyWindow(c24);
			DestroyWindow(d24);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==a25)
		{
			DestroyWindow(FRG);
			DestroyWindow(a25);
			DestroyWindow(b25);
			DestroyWindow(c25);
			DestroyWindow(d25);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==b26)
		{
			DestroyWindow(FRG);
			DestroyWindow(a26);
			DestroyWindow(b26);
			DestroyWindow(c26);
			DestroyWindow(d26);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==b27)
		{
			DestroyWindow(FRG);
			DestroyWindow(a27);
			DestroyWindow(b27);
			DestroyWindow(c27);
			DestroyWindow(d27);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==d28)
		{
			DestroyWindow(FRG);
			DestroyWindow(a28);
			DestroyWindow(b28);
			DestroyWindow(c28);
			DestroyWindow(d28);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==b29)
		{
			DestroyWindow(FRG);
			DestroyWindow(a29);
			DestroyWindow(b29);
			DestroyWindow(c29);
			DestroyWindow(d29);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==a30)
		{
			DestroyWindow(FRG);
			DestroyWindow(a30);
			DestroyWindow(b30);
			DestroyWindow(c30);
			DestroyWindow(d30);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==d31)
		{
			DestroyWindow(FRG);
			DestroyWindow(a31);
			DestroyWindow(b31);
			DestroyWindow(c31);
			DestroyWindow(d31);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"RIGHT","RIGHT!!!",0);
			RandomizeQ();
		}
		if(p==a2||p==b2||p==d2)
		{
			DestroyWindow(FRG);
			DestroyWindow(a2);
			DestroyWindow(b2);
			DestroyWindow(c2);
			DestroyWindow(d2);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==a1||p==b1||p==c1)
		{
			DestroyWindow(FRG);
			DestroyWindow(a1);
			DestroyWindow(b1);
			DestroyWindow(c1);
			DestroyWindow(d1);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==b5||p==c5||p==d5)
		{
			DestroyWindow(FRG);
			DestroyWindow(a5);
			DestroyWindow(b5);
			DestroyWindow(c5);
			DestroyWindow(d5);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}

		if(p==a3||p==b3||p==c3)
		{
			DestroyWindow(FRG);
			DestroyWindow(a3);
			DestroyWindow(b3);
			DestroyWindow(c3);
			DestroyWindow(d3);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==a4||p==c4||p==d4)
		{
			DestroyWindow(FRG);
			DestroyWindow(a4);
			DestroyWindow(b4);
			DestroyWindow(c4);
			DestroyWindow(d4);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==a6||p==b6||p==d6)
		{
			DestroyWindow(FRG);
			DestroyWindow(a6);
			DestroyWindow(b6);
			DestroyWindow(c6);
			DestroyWindow(d6);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==a7||p==b7||p==c7)
		{
			DestroyWindow(FRG);
			DestroyWindow(a7);
			DestroyWindow(b7);
			DestroyWindow(c7);
			DestroyWindow(d7);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==a8||p==b8||p==d8)
		{
			DestroyWindow(FRG);
			DestroyWindow(a8);
			DestroyWindow(b8);
			DestroyWindow(c8);
			DestroyWindow(d8);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==a9||p==b9||p==d9)
		{
			DestroyWindow(FRG);
			DestroyWindow(a9);
			DestroyWindow(b9);
			DestroyWindow(c9);
			DestroyWindow(d9);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==a10||p==c10||p==d10)
		{
			DestroyWindow(FRG);
			DestroyWindow(a10);
			DestroyWindow(b10);
			DestroyWindow(c10);
			DestroyWindow(d10);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==a11||p==b11||p==d11)
		{
			DestroyWindow(FRG);
			DestroyWindow(a11);
			DestroyWindow(b11);
			DestroyWindow(c11);
			DestroyWindow(d11);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==a12||p==b12||p==d12)
		{
			DestroyWindow(FRG);
			DestroyWindow(a12);
			DestroyWindow(b12);
			DestroyWindow(c12);
			DestroyWindow(d12);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==a13||p==c13||p==d13)
		{
			DestroyWindow(FRG);
			DestroyWindow(a13);
			DestroyWindow(b13);
			DestroyWindow(c13);
			DestroyWindow(d13);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==a14||p==c14||p==d14)
		{
			DestroyWindow(FRG);
			DestroyWindow(a14);
			DestroyWindow(b14);
			DestroyWindow(c14);
			DestroyWindow(d14);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==a15||p==b15||p==d15)
		{
			DestroyWindow(FRG);
			DestroyWindow(a15);
			DestroyWindow(b15);
			DestroyWindow(c15);
			DestroyWindow(d15);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==a16||p==b16||p==d16)
		{
			DestroyWindow(FRG);
			DestroyWindow(a16);
			DestroyWindow(b16);
			DestroyWindow(c16);
			DestroyWindow(d16);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==b17||p==c17||p==d17)
		{
			DestroyWindow(FRG);
			DestroyWindow(a17);
			DestroyWindow(b17);
			DestroyWindow(c17);
			DestroyWindow(d17);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==a18||p==c18||p==d18)
		{
			DestroyWindow(FRG);
			DestroyWindow(a18);
			DestroyWindow(b18);
			DestroyWindow(c18);
			DestroyWindow(d18);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==a19||p==b19||p==d19)
		{
			DestroyWindow(FRG);
			DestroyWindow(a19);
			DestroyWindow(b19);
			DestroyWindow(c19);
			DestroyWindow(d19);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==a20||p==c20||p==d20)
		{
			DestroyWindow(FRG);
			DestroyWindow(a20);
			DestroyWindow(b20);
			DestroyWindow(c20);
			DestroyWindow(d20);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==b21||p==c21||p==d21)
		{
			DestroyWindow(FRG);
			DestroyWindow(a21);
			DestroyWindow(b21);
			DestroyWindow(c21);
			DestroyWindow(d21);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==b22||p==c22||p==d22)
		{
			DestroyWindow(FRG);
			DestroyWindow(a22);
			DestroyWindow(b22);
			DestroyWindow(c22);
			DestroyWindow(d22);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==a23||p==b23||p==d23)
		{
			DestroyWindow(FRG);
			DestroyWindow(a23);
			DestroyWindow(b23);
			DestroyWindow(c23);
			DestroyWindow(d23);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==a24||p==c24||p==d24)
		{
			DestroyWindow(FRG);
			DestroyWindow(a24);
			DestroyWindow(b24);
			DestroyWindow(c24);
			DestroyWindow(d24);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==b25||p==c25||p==d25)
		{
			DestroyWindow(FRG);
			DestroyWindow(a25);
			DestroyWindow(b25);
			DestroyWindow(c25);
			DestroyWindow(d25);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==a26||p==c26||p==d26)
		{
			DestroyWindow(FRG);
			DestroyWindow(a26);
			DestroyWindow(b26);
			DestroyWindow(c26);
			DestroyWindow(d26);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==a27||p==c27||p==d27)
		{
			DestroyWindow(FRG);
			DestroyWindow(a27);
			DestroyWindow(b27);
			DestroyWindow(c27);
			DestroyWindow(d27);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==a28||p==b28||p==c28)
		{
			DestroyWindow(FRG);
			DestroyWindow(a28);
			DestroyWindow(b28);
			DestroyWindow(c28);
			DestroyWindow(d28);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==a29||p==c29||p==d29)
		{
			DestroyWindow(FRG);
			DestroyWindow(a29);
			DestroyWindow(b29);
			DestroyWindow(c29);
			DestroyWindow(d29);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==b30||p==c30||p==d30)
		{
			DestroyWindow(FRG);
			DestroyWindow(a30);
			DestroyWindow(b30);
			DestroyWindow(c30);
			DestroyWindow(d30);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
		if(p==a31||p==b31||p==c31)
		{
			DestroyWindow(FRG);
			DestroyWindow(a31);
			DestroyWindow(b31);
			DestroyWindow(c31);
			DestroyWindow(d31);
			DestroyWindow(ATW);
			DestroyWindow(BTW);
			DestroyWindow(CTW);
			DestroyWindow(DTW);
			MessageBox(0,"WRONG","WRONG",0);
			RandomizeQ();
		}
	}
return DefWindowProc(i,j,k,p);
}

_stdcall RandomizeQ(void)
{
	srand( (unsigned)time( NULL ) );
	rndo=rand()%31;
	switch(rndo)
	{
	case 0:
		Frage1();
		break;
	case 1:
		Frage2();
		break;
	case 2:
		Frage3();
		break;
	case 3:
		Frage4();
		break;
	case 4:
		Frage5();
		break;
	case 5:
		Frage6();
		break;
	case 6:
		Frage7();
		break;
	case 7:
		Frage8();
		break;
	case 8:
		Frage9();
		break;
	case 9:
		Frage10();
		break;
	case 10:
		Frage11();
		break;
	case 11:
		Frage12();
		break;
	case 12:
		Frage13();
		break;
	case 13:
		Frage14();
		break;
	case 14:
		Frage15();
		break;
	case 15:
		Frage16();
		break;
	case 16:
		Frage17();
		break;
	case 17:
		Frage18();
		break;
	case 18:
		Frage19();
		break;
	case 19:
		Frage20();
		break;
	case 20:
		Frage21();
		break;
	case 21:
		Frage22();
		break;
	case 22:
		Frage23();
		break;
	case 23:
		Frage24();
		break;
	case 24:
		Frage25();
		break;
	case 25:
		Frage26();
		break;
	case 26:
		Frage27();
		break;
	case 27:
		Frage28();
		break;
	case 28:
		Frage29();
		break;
	case 29:
		Frage30();
		break;
	case 30:
		Frage31();
		break;
	}
}

_stdcall Frage1(void)
{
	if(Beant[0]==0)
	{
		if(Num<32)
		{
			Beant[0]=1;
			Num++;
			FRG=CreateWindow("EDIT","Was heisst U.S.A?",WS_CHILD,1,1,150,25,b,0,0,0);
			ShowWindow(FRG,1);
			a1=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a1,1);
			ATW=CreateWindow("EDIT","Uralten Samler Abteilung",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b1=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b1,1);
			BTW=CreateWindow("EDIT","Uslaendishe Seufer Auto",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c1=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c1,1);
			CTW=CreateWindow("EDIT","Unentliche Songs Authoren",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d1=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d1,1);
			DTW=CreateWindow("EDIT","United States of America",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}

_stdcall Frage2(void)
{
	if(Beant[1]==0)
	{
		if(Num<32)
		{
			Beant[1]=1;
			Num++;
			FRG=CreateWindow("EDIT","Wo liegt die Sahara Wueste?",WS_CHILD,1,1,250,25,b,0,0,0);
			ShowWindow(FRG,1);
			a2=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a2,1);
			ATW=CreateWindow("EDIT","In Amerika",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b2=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b2,1);
			BTW=CreateWindow("EDIT","In Deutschland",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c2=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c2,1);
			CTW=CreateWindow("EDIT","In Afrika",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d2=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d2,1);
			DTW=CreateWindow("EDIT","Es gibt sie nicht",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}

_stdcall Frage3(void)
{
	if(Beant[2]==0)
	{
		if(Num<32)
		{
			Beant[2]=1;
			Num++;
			FRG=CreateWindow("EDIT","Wie heisst der Amerikanische Praesident?",WS_CHILD,1,1,275,25,b,0,0,0);
			ShowWindow(FRG,1);
			a3=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a3,1);
			ATW=CreateWindow("EDIT","Busch",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b3=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b3,1);
			BTW=CreateWindow("EDIT","Hans",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c3=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c3,1);
			CTW=CreateWindow("EDIT","Bill Gates",WS_CHILD,25,75,175,25,b,0,0,0);
			ShowWindow(CTW,1);
			d3=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d3,1);
			DTW=CreateWindow("EDIT","George W. Bush",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}

_stdcall Frage4(void)
{
	if(Beant[3]==0)
	{
		if(Num<32)
		{
			Beant[3]=1;
			Num++;
			FRG=CreateWindow("EDIT","Was ist die Hauptstadt des Kanton Thurgaus?",WS_CHILD,1,1,350,25,b,0,0,0);
			ShowWindow(FRG,1);
			a4=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a4,1);
			ATW=CreateWindow("EDIT","Weinfelden",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b4=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b4,1);
			BTW=CreateWindow("EDIT","Frauenfeld",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c4=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c4,1);
			CTW=CreateWindow("EDIT","Buerglen",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d4=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d4,1);
			DTW=CreateWindow("EDIT","Istighofen",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}

_stdcall Frage5(void)
{
	if(Beant[4]==0)
	{
		if(Num<32)
		{
			Beant[4]=1;
			Num++;
			FRG=CreateWindow("EDIT","Wer war der erste auf dem mond?",WS_CHILD,1,1,250,25,b,0,0,0);
			ShowWindow(FRG,1);
			a5=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a5,1);
			ATW=CreateWindow("EDIT","Nil Armstrong",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b5=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b5,1);
			BTW=CreateWindow("EDIT","Ilan Ramon",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c5=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c5,1);
			CTW=CreateWindow("EDIT","Mr. Bean",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d5=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d5,1);
			DTW=CreateWindow("EDIT","Die Schweiz",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}

_stdcall Frage6(void)
{
	if(Beant[5]==0)
	{
		if(Num<32)
		{
			Beant[5]=1;
			Num++;
			FRG=CreateWindow("EDIT","Wie viele Menschen leben heute in New-York city?",WS_CHILD,1,1,350,25,b,0,0,0);
			ShowWindow(FRG,1);
			a6=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a6,1);
			ATW=CreateWindow("EDIT","10,000 Menschen",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b6=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b6,1);
			BTW=CreateWindow("EDIT","50,000 Menschen",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c6=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c6,1);
			CTW=CreateWindow("EDIT","8,000,000 Menschen",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d6=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d6,1);
			DTW=CreateWindow("EDIT","500,000",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}

_stdcall Frage7(void)
{
	if(Beant[6]==0)
	{
		if(Num<32)
		{
			Beant[6]=1;
			Num++;
			FRG=CreateWindow("EDIT","Wie viele Leute Leben bis heute im Kanton Thurgau?",WS_CHILD,1,1,350,25,b,0,0,0);
			ShowWindow(FRG,1);
			a7=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a7,1);
			ATW=CreateWindow("EDIT","10,000 Menschen",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b7=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b7,1);
			BTW=CreateWindow("EDIT","50,950 Menschen",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c7=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c7,1);
			CTW=CreateWindow("EDIT","8,958,542 Menschen",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d7=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d7,1);
			DTW=CreateWindow("EDIT","130,000 Menschen",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}

_stdcall Frage8(void)
{
	if(Beant[7]==0)
	{
		if(Num<32)
		{
			Beant[7]=1;
			Num++;
			FRG=CreateWindow("EDIT","Wie viele Menschen hat es auf der Welt?",WS_CHILD,1,1,350,25,b,0,0,0);
			ShowWindow(FRG,1);
			a8=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a8,1);
			ATW=CreateWindow("EDIT","6,000,000 Menschen",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b8=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b8,1);
			BTW=CreateWindow("EDIT","6,000 Menschen",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c8=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c8,1);
			CTW=CreateWindow("EDIT","6 Milliarden",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d8=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d8,1);
			DTW=CreateWindow("EDIT","6 Bilionen",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}
_stdcall Frage9(void)
{
	if(Beant[8]==0)
	{
		if(Num<32)
		{
			Beant[8]=1;
			Num++;
			FRG=CreateWindow("EDIT","Wie weit ist die sonne von der Erde?",WS_CHILD,1,1,350,25,b,0,0,0);
			ShowWindow(FRG,1);
			a9=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a9,1);
			ATW=CreateWindow("EDIT","80 Km",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b9=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b9,1);
			BTW=CreateWindow("EDIT","85,000,000 mile",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c9=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c9,1);
			CTW=CreateWindow("EDIT","149,000,000 Km",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d9=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d9,1);
			DTW=CreateWindow("EDIT","3 km",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}
_stdcall Frage10(void)
{
	if(Beant[9]==0)
	{
		if(Num<32)
		{
			Beant[9]=1;
			Num++;
			FRG=CreateWindow("EDIT","In welchem land hat es am meisten Menschen?",WS_CHILD,1,1,350,25,b,0,0,0);
			ShowWindow(FRG,1);
			a10=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a10,1);
			ATW=CreateWindow("EDIT","In Rusland",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b10=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b10,1);
			BTW=CreateWindow("EDIT","In China",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c10=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c10,1);
			CTW=CreateWindow("EDIT","In Amerika",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d10=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d10,1);
			DTW=CreateWindow("EDIT","In der Schweiz",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}
_stdcall Frage11(void)
{
	if(Beant[10]==0)
	{
		if(Num<32)
		{
			Beant[10]=1;
			Num++;
			FRG=CreateWindow("EDIT","Welche Sprache Spricht mann in Israel?",WS_CHILD,1,1,350,25,b,0,0,0);
			ShowWindow(FRG,1);
			a11=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a11,1);
			ATW=CreateWindow("EDIT","Deutsch",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b11=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b11,1);
			BTW=CreateWindow("EDIT","Englisch",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c11=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c11,1);
			CTW=CreateWindow("EDIT","Hebraisch",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d11=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d11,1);
			DTW=CreateWindow("EDIT","Arabisch",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}
_stdcall Frage12(void)
{
	if(Beant[11]==0)
	{
		if(Num<32)
		{
			Beant[11]=1;
			Num++;
			FRG=CreateWindow("EDIT","Wer hat Amerika Entdeckt?",WS_CHILD,1,1,350,25,b,0,0,0);
			ShowWindow(FRG,1);
			a12=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a12,1);
			ATW=CreateWindow("EDIT","Cristian Colombo",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b12=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b12,1);
			BTW=CreateWindow("EDIT","Jesus Crist",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c12=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c12,1);
			CTW=CreateWindow("EDIT","Cristofer Colombus",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d12=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d12,1);
			DTW=CreateWindow("EDIT","Muhamed",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}
_stdcall Frage13(void)
{
	if(Beant[12]==0)
	{
		if(Num<32)
		{
			Beant[12]=1;
			Num++;
			FRG=CreateWindow("EDIT","Was ist die Hauptstadt Argentinien?",WS_CHILD,1,1,350,25,b,0,0,0);
			ShowWindow(FRG,1);
			a13=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a13,1);
			ATW=CreateWindow("EDIT","Buenos Nochas",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b13=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b13,1);
			BTW=CreateWindow("EDIT","Buenos Aires",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c13=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c13,1);
			CTW=CreateWindow("EDIT","Buenos Tardes",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d13=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d13,1);
			DTW=CreateWindow("EDIT","Gute Nacht",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}
_stdcall Frage14(void)
{
	if(Beant[13]==0)
	{
		if(Num<32)
		{
			Beant[13]=1;
			Num++;
			FRG=CreateWindow("EDIT","Wo ist der tiefste punkt der Welt?",WS_CHILD,1,1,350,25,b,0,0,0);
			ShowWindow(FRG,1);
			a14=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a14,1);
			ATW=CreateWindow("EDIT","Frankreich",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b14=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b14,1);
			BTW=CreateWindow("EDIT","Das Tote Meer",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c14=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c14,1);
			CTW=CreateWindow("EDIT","Amerika",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d14=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d14,1);
			DTW=CreateWindow("EDIT","Das Meer , also meeres hoehe",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}
_stdcall Frage15(void)
{
	if(Beant[14]==0)
	{
		if(Num<32)
		{
			Beant[14]=1;
			Num++;
			FRG=CreateWindow("EDIT","Welches Menschen gebautes Gebeude seht mann vom Mond?",WS_CHILD,1,1,350,25,b,0,0,0);
			ShowWindow(FRG,1);
			a15=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a15,1);
			ATW=CreateWindow("EDIT","Der Eifelturm",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b15=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b15,1);
			BTW=CreateWindow("EDIT","Der Piza",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c15=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c15,1);
			CTW=CreateWindow("EDIT","Die chinesische Mauer",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d15=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d15,1);
			DTW=CreateWindow("EDIT","Die Tweens",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}
_stdcall Frage16(void)
{
	if(Beant[15]==0)
	{
		if(Num<32)
		{
			Beant[15]=1;
			Num++;
			FRG=CreateWindow("EDIT","Welcher ist der hoechste Berg der Welt?",WS_CHILD,1,1,350,25,b,0,0,0);
			ShowWindow(FRG,1);
			a16=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a16,1);
			ATW=CreateWindow("EDIT","Der Sentis",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b16=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b16,1);
			BTW=CreateWindow("EDIT","Der Hermon",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c16=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c16,1);
			CTW=CreateWindow("EDIT","Der Everest",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d16=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d16,1);
			DTW=CreateWindow("EDIT","Der Ottoberg",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}
_stdcall Frage17(void)
{
	if(Beant[16]==0)
	{
		if(Num<32)
		{
			Beant[16]=1;
			Num++;
			FRG=CreateWindow("EDIT","Gegen wer beginte George W. Bush den letzten Krieg?",WS_CHILD,1,1,350,25,b,0,0,0);
			ShowWindow(FRG,1);
			a17=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a17,1);
			ATW=CreateWindow("EDIT","Sadam Husein",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b17=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b17,1);
			BTW=CreateWindow("EDIT","Iraq",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c17=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c17,1);
			CTW=CreateWindow("EDIT","Amerika",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d17=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d17,1);
			DTW=CreateWindow("EDIT","Israel",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}
_stdcall Frage18(void)
{
	if(Beant[17]==0)
	{
		if(Num<32)
		{
			Beant[17]=1;
			Num++;
			FRG=CreateWindow("EDIT","Wo wohnen die Eskimosen ?",WS_CHILD,1,1,350,25,b,0,0,0);
			ShowWindow(FRG,1);
			a18=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a18,1);
			ATW=CreateWindow("EDIT","In Zelten.",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b18=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b18,1);
			BTW=CreateWindow("EDIT","In Igluen.",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c18=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c18,1);
			CTW=CreateWindow("EDIT","In Schlossen.",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d18=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d18,1);
			DTW=CreateWindow("EDIT","In Schulen.",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}
_stdcall Frage19(void)
{
	if(Beant[18]==0)
	{
		if(Num<23)
		{
			Beant[18]=1;
			Num++;
			FRG=CreateWindow("EDIT","Wer Beginnte den 2 Weltkrieg ?",WS_CHILD,1,1,350,25,b,0,0,0);
			ShowWindow(FRG,1);
			a19=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a19,1);
			ATW=CreateWindow("EDIT","Amerika.",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b19=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b19,1);
			BTW=CreateWindow("EDIT","Die Schweiz.",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c19=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c19,1);
			CTW=CreateWindow("EDIT","Deutschland.",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d19=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d19,1);
			DTW=CreateWindow("EDIT","China.",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}
_stdcall Frage20(void)
{
	if(Beant[19]==0)
	{
		if(Num<32)
		{
			Beant[19]=1;
			Num++;
			FRG=CreateWindow("EDIT","Wie lange ist der Kanton Thurgau in der Schweiz?",WS_CHILD,1,1,350,25,b,0,0,0);
			ShowWindow(FRG,1);
			a20=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a20,1);
			ATW=CreateWindow("EDIT","500 Jahre.",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b20=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b20,1);
			BTW=CreateWindow("EDIT","200 Jahre.",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c20=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c20,1);
			CTW=CreateWindow("EDIT","30 Jahre.",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d20=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d20,1);
			DTW=CreateWindow("EDIT","50 Jahre.",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}
_stdcall Frage21(void)
{
	if(Beant[20]==0)
	{
		if(Num<32)
		{
			Beant[20]=1;
			Num++;
			FRG=CreateWindow("EDIT","Wie lange gibt es Israel wieder?",WS_CHILD,1,1,350,25,b,0,0,0);
			ShowWindow(FRG,1);
			a21=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a21,1);
			ATW=CreateWindow("EDIT","55 Jahre.",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b21=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b21,1);
			BTW=CreateWindow("EDIT","300 Jahre.",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c21=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c21,1);
			CTW=CreateWindow("EDIT","1 Jahr.",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d21=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d21,1);
			DTW=CreateWindow("EDIT","2 Jahre.",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}
_stdcall Frage22(void)
{
	if(Beant[21]==0)
	{
		if(Num<32)
		{
			Beant[21]=1;
			Num++;
			FRG=CreateWindow("EDIT","Welche waren die erste Kantöne in der Schweiz?",WS_CHILD,1,1,350,25,b,0,0,0);
			ShowWindow(FRG,1);
			a22=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a22,1);
			ATW=CreateWindow("EDIT","Uri , Oberwalden und Underwalden.",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b22=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b22,1);
			BTW=CreateWindow("EDIT","Kanton Thurgau.",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c22=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c22,1);
			CTW=CreateWindow("EDIT","Lichtenstein.",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d22=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d22,1);
			DTW=CreateWindow("EDIT","Kanton Bern.",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}
_stdcall Frage23(void)
{
	if(Beant[22]==0)
	{
		if(Num<32)
		{
			Beant[22]=1;
			Num++;
			FRG=CreateWindow("EDIT","In welchem Kontinent liegt Aegypten?",WS_CHILD,1,1,350,25,b,0,0,0);
			ShowWindow(FRG,1);
			a23=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a23,1);
			ATW=CreateWindow("EDIT","Europa.",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b23=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b23,1);
			BTW=CreateWindow("EDIT","Amerika.",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c23=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c23,1);
			CTW=CreateWindow("EDIT","Afrika.",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d23=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d23,1);
			DTW=CreateWindow("EDIT","Asia.",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}
_stdcall Frage24(void)
{
	if(Beant[23]==0)
	{
		if(Num<32)
		{
			Beant[23]=1;
			Num++;
			FRG=CreateWindow("EDIT","Welche Stadt ist die Hauptstadt der Schweiz?",WS_CHILD,1,1,350,25,b,0,0,0);
			ShowWindow(FRG,1);
			a24=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a24,1);
			ATW=CreateWindow("EDIT","Zürich.",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b24=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b24,1);
			BTW=CreateWindow("EDIT","Bern.",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c24=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c24,1);
			CTW=CreateWindow("EDIT","Frauenfeld.",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d24=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d24,1);
			DTW=CreateWindow("EDIT","Weinfelden.",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}
_stdcall Frage25(void)
{
	if(Beant[24]==0)
	{
		if(Num<32)
		{
			Beant[24]=1;
			Num++;
			FRG=CreateWindow("EDIT","Wer hatte die erleuchtende Erleuchtung erleuchtet?",WS_CHILD,1,1,350,25,b,0,0,0);
			ShowWindow(FRG,1);
			a25=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a25,1);
			ATW=CreateWindow("EDIT","Edison.",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b25=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b25,1);
			BTW=CreateWindow("EDIT","Newton.",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c25=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c25,1);
			CTW=CreateWindow("EDIT","Galileo Galilei.",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d25=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d25,1);
			DTW=CreateWindow("EDIT","Louis Armstrong.",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}
_stdcall Frage26(void)
{
	if(Beant[25]==0)
	{
		if(Num<32)
		{
			Beant[25]=1;
			Num++;
			FRG=CreateWindow("EDIT","Wie heisst das iranische geld?",WS_CHILD,1,1,350,25,b,0,0,0);
			ShowWindow(FRG,1);
			a26=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a26,1);
			ATW=CreateWindow("EDIT","Iranischer Dinar.",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b26=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b26,1);
			BTW=CreateWindow("EDIT","Rial.",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c26=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c26,1);
			CTW=CreateWindow("EDIT","Dollar.",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d26=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d26,1);
			DTW=CreateWindow("EDIT","Iranischer Franc.",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}
_stdcall Frage27(void)
{
	if(Beant[26]==0)
	{
		if(Num<32)
		{
			Beant[26]=1;
			Num++;
			FRG=CreateWindow("EDIT","Wie heisst das nigerische geld?",WS_CHILD,1,1,350,25,b,0,0,0);
			ShowWindow(FRG,1);
			a27=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a27,1);
			ATW=CreateWindow("EDIT","Yen .",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b27=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b27,1);
			BTW=CreateWindow("EDIT","Naira.",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c27=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c27,1);
			CTW=CreateWindow("EDIT","Dollar.",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d27=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d27,1);
			DTW=CreateWindow("EDIT","Franc.",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}
_stdcall Frage28(void)
{
	if(Beant[27]==0)
	{
		if(Num<32)
		{
			Beant[27]=1;
			Num++;
			FRG=CreateWindow("EDIT","Wie hoch ist der Eifel Turm?",WS_CHILD,1,1,350,25,b,0,0,0);
			ShowWindow(FRG,1);
			a28=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a28,1);
			ATW=CreateWindow("EDIT","50 Meter.",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b28=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b28,1);
			BTW=CreateWindow("EDIT","150 Meter.",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c28=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c28,1);
			CTW=CreateWindow("EDIT","500 Meter.",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d28=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d28,1);
			DTW=CreateWindow("EDIT","300 Meter.",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}
_stdcall Frage29(void)
{
	if(Beant[28]==0)
	{
		if(Num<32)
		{
			Beant[28]=1;
			Num++;
			FRG=CreateWindow("EDIT","Wen wurden die Tween Towers zerstört?",WS_CHILD,1,1,350,25,b,0,0,0);
			ShowWindow(FRG,1);
			a29=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a29,1);
			ATW=CreateWindow("EDIT","7 November 2001.",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b29=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b29,1);
			BTW=CreateWindow("EDIT","11 September 2001.",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c29=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c29,1);
			CTW=CreateWindow("EDIT","1 August 2001.",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d29=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d29,1);
			DTW=CreateWindow("EDIT","Nie , sie stehen immer noch dort.",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}
_stdcall Frage30(void)
{
	if(Beant[29]==0)
	{
		if(Num<32)
		{
			Beant[29]=1;
			Num++;
			FRG=CreateWindow("EDIT","Wie hoch ist der Everest Berg?",WS_CHILD,1,1,350,25,b,0,0,0);
			ShowWindow(FRG,1);
			a30=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a30,1);
			ATW=CreateWindow("EDIT","8850 Meter.",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b30=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b30,1);
			BTW=CreateWindow("EDIT","1000 Meter.",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c30=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c30,1);
			CTW=CreateWindow("EDIT","5000 Meter.",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d30=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d30,1);
			DTW=CreateWindow("EDIT","50 KM.",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}
_stdcall Frage31(void)
{
	if(Beant[30]==0)
	{
		if(Num<32)
		{
			Beant[30]=1;
			Num++;
			FRG=CreateWindow("EDIT","Welcher ist der Grösste Gletscher?",WS_CHILD,1,1,350,25,b,0,0,0);
			ShowWindow(FRG,1);
			a31=CreateWindow("BUTTON","A.",WS_CHILD,1,25,25,25,b,0,0,0);
			ShowWindow(a31,1);
			ATW=CreateWindow("EDIT","Aletsch-G. , Berner Alpen.",WS_CHILD,25,25,175,25,b,0,0,0);
			ShowWindow(ATW,1);
			b31=CreateWindow("BUTTON","B.",WS_CHILD,1,50,25,25,b,0,0,0);
			ShowWindow(b31,1);
			BTW=CreateWindow("EDIT","Tasman-G. , Neuseeland.",WS_CHILD,25,50,175,25,b,0,0,0);
			ShowWindow(BTW,1);
			c31=CreateWindow("BUTTON","C.",WS_CHILD,1,75,25,25,b,0,0,0);
			ShowWindow(c31,1);
			CTW=CreateWindow("EDIT","Rhone-G. , Berner Alpen.",WS_CHILD,25,75,190,25,b,0,0,0);
			ShowWindow(CTW,1);
			d31=CreateWindow("BUTTON","D.",WS_CHILD,1,100,25,25,b,0,0,0);
			ShowWindow(d31,1);
			DTW=CreateWindow("EDIT","Vatnajökull , Island.",WS_CHILD,25,100,175,25,b,0,0,0);
			ShowWindow(DTW,1);
		}
		else
		{
			MessageBox(0,"End","End",0);
		}
	}
	else
	{
		RandomizeQ();
	}
}



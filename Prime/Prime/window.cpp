



#include "stdafx.h"
#include "comdef.h"
#include "funcs.h"


void Window() {

	HWND hConsole, hEge;
	PIMAGE  img; 

	SetConsoleTitle("aaa");
	hConsole = FindWindow(NULL,"aa");
	RECT rect;
	GetWindowRect(hConsole, &rect);
	SetWindowPos(hConsole, HWND_TOP, 0, 0, 0, 0, SWP_NOSIZE);

	initgraph(640, 480);	// 初始化为640*480的窗口
	setbkcolor(WHITE);	// 设置背景色为白色
	setcolor(RED);		// 设置前景色为红色

	hEge = getHWnd();
	SetWindowText(hEge, "六角形控制端");
	SetWindowPos(hEge, HWND_TOP, rect.right - rect.left + 4, 4, 0, 0, SWP_NOSIZE);
	SetForegroundWindow(hConsole);
	




	char jpgName[SIZE] = { "blank.jpg" };	// 图片文件名

	
	
	//打开图片
	img = newimage();
	getimage(img, jpgName);
	initgraph(getwidth(img), getheight(img));
	putimage(0, 0, img);


	/*把点打印出来*/
	
	char c = '.';
	int n,t;
	double xx,yy;
	double centerX=XX;
	double centerY=YY;
	double coords[N+1][2];
	
	for (int i = 1;i < N;i++) {
		int n=1;
		int temp=i ;
		for (int j = 1;temp> j * 6;j++) {
			temp = temp - 6 * j;
			n++;
		}
		
		//得出n
		 temp=i;
		for (int j = 1;temp> j * 6;j++) {
			temp=temp-6*j;
		}
		t=temp;
		
		xx=coords[i][0]=X(n,t);
		yy=coords[i][1]= Y(n, t);
		//cout<<"在点"<<"("<<xx<<","<<yy<<")   ";
		xx=centerX+xx*M;
		yy=centerY+yy*M;
		setcolor(RED);
			if (isprime(i)) {
			xyprintf(xx, yy, "%c", c);
			}
			else {
				setcolor(GREEN);
				//xyprintf(xx, yy, "%c", c);
			}


	}
	
	
		setcolor(GREEN);
		
	fflush(stdin);
	cin>>c;
	


	SetForegroundWindow(hConsole);

	system("pause");
 	closegraph();

}





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

	initgraph(640, 480);	// ��ʼ��Ϊ640*480�Ĵ���
	setbkcolor(WHITE);	// ���ñ���ɫΪ��ɫ
	setcolor(RED);		// ����ǰ��ɫΪ��ɫ

	hEge = getHWnd();
	SetWindowText(hEge, "�����ο��ƶ�");
	SetWindowPos(hEge, HWND_TOP, rect.right - rect.left + 4, 4, 0, 0, SWP_NOSIZE);
	SetForegroundWindow(hConsole);
	




	char jpgName[SIZE] = { "blank.jpg" };	// ͼƬ�ļ���

	
	
	//��ͼƬ
	img = newimage();
	getimage(img, jpgName);
	initgraph(getwidth(img), getheight(img));
	putimage(0, 0, img);


	/*�ѵ��ӡ����*/
	
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
		
		//�ó�n
		 temp=i;
		for (int j = 1;temp> j * 6;j++) {
			temp=temp-6*j;
		}
		t=temp;
		
		xx=coords[i][0]=X(n,t);
		yy=coords[i][1]= Y(n, t);
		//cout<<"�ڵ�"<<"("<<xx<<","<<yy<<")   ";
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

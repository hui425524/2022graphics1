# 2022graphics1\

#week01



#week02

##下載範例

```
1.去老師的網站:http://jsyeh.org/3dcg10)

data.zip

windows.zip

glut32.dll

2.跑shapes.exe看範例 (左右 都可按右鍵會出現選單)

```



##跑上週程式

```
1.安裝git for windows

2.git bash-> cd desktop->git clone 貼上自己的網址

https://github.com/hui425524/2022graphics1

3.跑專案
```
##寫一個簡短程式

1.新建一個新的glut->名稱:week02-color
2.刪掉內文開始打程式碼


```c++
#include <GL/glut.h>///簡化程式

void display()

{



    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );///畫圖前先清理畫面



    glColor3f(1,1,0);///設定色彩

    glutSolidTeapot(0.3);



    glutSwapBuffers();///畫好後換出來



}



int main (int argc, char** argv)

{


    glutInit( &argc, argv);///送給glutInit 初始化

    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );

    glutCreateWindow("第2周程式!");



    glutDisplayFunc(display);



    glutMainLoop();



}
```



##做出三色三角形

```c++

#include <GL/glut.h>///簡化程式

void display()

{



    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );///畫圖前先清理畫面



    glColor3f(1,1,0);///設定色彩

   /// glutSolidTeapot(0.3);

   

   glBegin(GL_POLYGON);

   

   glColor3f(1,0,0);///紅色

   glVertex2f(-1,-1);

   

   glColor3f(0,1,0);///綠色

   glVertex2f(+1,-1);

   

   glColor3f(0,0,1);///藍色

   glVertex2f(0,+1);

    glEnd();

    

    glutSwapBuffers();///畫好後換出來



}



int main (int argc, char** argv)

{

    glutInit( &argc, argv);///把參數送給glutInit 初始化

    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );///雙緩衝區+3D深度功能

    glutCreateWindow("第2周程式!");///開視窗



    glutDisplayFunc(display);///顯示函式



    glutMainLoop();

```

}


#include <GL/glut.h>///簡化程式
#include<stdio.h>///printf()印東西用

float mouseX=0,mouseY=0;
void myTeapot (float x,float y)
{
     glPushMatrix();///備份矩陣(舊的位置)移動會累積，它會修改矩陣

    glTranslatef(x,y,0);

    glColor3f(1,1,0);///設定色彩-黃色

    glutSolidTeapot(0.1);///茶壺大小

    glPopMatrix();///還原矩陣
}

void display()

{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );///畫圖前先清理畫面

    myTeapot( (mouseX-150)/150.0 ,-(mouseY-150)/150.0);///座標換算可把mouse轉換成3D世界

    glutSwapBuffers();///畫好後換出來



}

void mouse (int button, int state, int x, int y)
{
   printf("%d %d %d %d\n",button,state,x,y);///
   mouseX=x,mouseY=y;
}

int main (int argc, char** argv)

{


    glutInit( &argc, argv);///送給glutInit 初始化

    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );

    glutCreateWindow("第3周程式!");



    glutDisplayFunc(display);

    glutMouseFunc(mouse);///滑鼠事件

    glutMainLoop();


}






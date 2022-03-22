#include <GL/glut.h>///簡化程式

#include<stdio.h>

void display()



{



    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );///畫圖前先清理畫面



    glColor3f(1,1,0);///設定色彩



    glutSolidTeapot(0.3);



    glutSwapBuffers();///畫好後換出來



}

void keyboard( unsigned char key, int x,int y)

{

    printf("你按下了 %c 在 %d %d 座標\n",key,x,y);

}



int main (int argc, char** argv)



{

    glutInit( &argc, argv);///送給glutInit 初始化



    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );



    glutCreateWindow("第5周程式!");



    glutDisplayFunc(display);



    glutKeyboardFunc(keyboard);



    glutMainLoop();



}

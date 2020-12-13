#include <iostream>
#include <GL/glut.h>
#include <stdlib.h>
#include <GL/glu.h>
#include <string>
#include <math.h>
#define PI 3.1416

int i,j,x,y,day;
static GLfloat spin = 0.0;
static float	train1x	=  0.0;
static float	train2x	=  0.0;
static float	ty	=  0.0;
void init(void)
{
	glClearColor(0,0, 0, 0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
void circle(GLdouble rad, GLdouble x, GLdouble y)

{

       GLint points = 360;
       GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
       GLdouble theta = 0.0;

      glBegin(GL_TRIANGLE_FAN);
      {
          for( i = 0; i <=360; i++, theta += delTheta )
          {
              glVertex2f(x+rad * cos(theta),y+rad * sin(theta));
          }
      }
      glEnd();
}
void half_circle(GLdouble rad, GLdouble x, GLdouble y)

{
       GLint points = 180;
       GLdouble delTheta =  PI / (GLdouble)points;
       GLdouble theta = 0.0;

      glBegin(GL_TRIANGLE_FAN);
      {
          for( i = 0; i <=180; i++, theta += delTheta )
          {
              glVertex2f(x+rad * cos(theta),y+rad * sin(theta));
          }
      }
      glEnd();
}


void DrawCircle(float cx, float cy, float rx,float ry,float points)
{
      glBegin(GL_TRIANGLE_FAN);
      for(i = 0; i < points; i++)
      {
          float theta = 2.0f * 3.1415926f * float(i) / float(points);

          float x = rx * cosf(theta);
          float y = ry * sinf(theta);
          glVertex2f(x + cx, y + cy);

      }
      glEnd();
}
void halfDrawCircle(float cx, float cy, float rx,float ry,float points)
{
      glBegin(GL_TRIANGLE_FAN);
      for(i = 0; i < points; i++)
      {
          float theta =  3.1415926f * float(i) / float(points);

          float x = rx * cosf(theta);
          float y = ry * sinf(theta);
          glVertex2f(x + cx, y + cy);

      }
      glEnd();
}





void view()
{

      glColor3ub(9, 49, 86);

     circle(220,320,240);



}



void building()
{

  glColor3ub(5, 19, 26);
  glBegin(GL_POLYGON);
  glVertex2i(148,98);
  glVertex2i(148,192);
  glVertex2i(188,192);
  glVertex2i(188,98);
  glEnd();


 glColor3ub(5, 19, 26);
  glBegin(GL_POLYGON);
  glVertex2i(128,130);
  glVertex2i(128,222);
  glVertex2i(155,222);
  glVertex2i(155,96);
  glEnd();




 glColor3ub(5, 19, 26);
  glBegin(GL_POLYGON);
  glVertex2i(103,198);
  glVertex2i(103,200);
  glVertex2i(128,200);
  glVertex2i(128,130);
  glEnd();


  glColor3ub(5, 19, 26);
  glBegin(GL_POLYGON);
  glVertex2i(188,154);
  glVertex2i(218,154);
  glVertex2i(218,92);
  glVertex2i(188,92);
  glEnd();


  glRectf(340,92,400,222);
  glColor3ub(5, 19, 26);
  glRectf(400,92,430,192);
 glColor3ub(5, 19, 26);
  glRectf(430,92,460,144);

  glRectf(450,92,480,202);

 glColor3ub(5, 19, 26);
  glBegin(GL_POLYGON);
  glVertex2i(480,162);
  glVertex2i(510,162);
  glVertex2i(510,125);
  glVertex2i(480,92);
  glEnd();

  glBegin(GL_POLYGON);
  glVertex2i(510,192);
  glVertex2i(530,192);
  glVertex2i(530,173);
  glVertex2i(510,130);
  glEnd();

  /////

   glColor3ub(255, 128, 0);
  glRectf(118,192,124,188);
  glRectf(118,175,124,171);

  ///windows
  glRectf(161,102,182,106);
  glRectf(161,114,182,118);
  glRectf(161,122,182,126);
  glRectf(161,136,182,140);
  glRectf(161,150,182,154);
  glRectf(161,164,182,168);
  glRectf(161,178,182,182);
  glColor3ub(5, 19, 26);
  glRectf(167,98,176,192);
///
   glColor3ub(0, 143, 179);
  glRectf(132,207,151,204);
  glRectf(132,189,151,186);
  glRectf(132,171,151,168);
  glRectf(132,153,151,150);
///
  glRectf(198,144,210,137);
  glRectf(198,127,210,120);
  glRectf(198,110,210,103);

  //

  glRectf(350,210,390,205);
  glRectf(350,195,390,190);
  glRectf(350,180,390,175);
  glRectf(350,165,390,160);
  glRectf(350,150,390,145);
  glRectf(350,135,390,130);
  glRectf(350,120,390,115);
  glRectf(350,95,390,90);
  glColor3ub(5, 19, 26);
  glRectf(365,90,374,210);

  ///
  glRectf(410,102,420,182);

glColor3ub(245, 225, 112);
  glRectf(410,170,420,182);
  glRectf(410,150,420,160);
  glRectf(410,130,420,140);
  glRectf(410,110,420,120);
/////

 //
glColor3ub(245, 225, 112);
  glRectf(460,192,470,189);
  glRectf(460,179,470,176);
  glRectf(460,166,470,163);
  glRectf(460,153,470,150);
  glRectf(430,140,470,137);
  glRectf(430,127,470,124);
  glRectf(430,114,470,111);
////////
  glRectf(490,142,500,152);
  glRectf(480,122,490,132);
  glRectf(495,122,505,132);
  glRectf(523,163,518,182);


}


void building2()
{

  glColor3ub(3, 41, 64);
  glRectf(118,192,158,240);
  glRectf(158,144,198,216);
  glRectf(201,96,230,201);
  glRectf(230,96,265,230);
  glRectf(265,96,295,155);
  glRectf(300,96,330,192);
  glRectf(330,96,357,250);
  glRectf(492,150,520,250);
  glBegin(GL_POLYGON);
  glVertex2i(360,265);
  glVertex2i(385,265);
  glVertex2i(385,245);
  glVertex2i(410,245);
  glVertex2i(410,96);
  glVertex2i(360,96);
  glEnd();
  glBegin(GL_POLYGON);
  glVertex2i(420,235);
  glVertex2i(435,250);
  glVertex2i(450,235);
  glVertex2i(450,96);
  glVertex2i(420,96);
  glEnd();
  glRectf(450,96,487,220);


  //window
   glColor3ub(0, 143, 179);
   glRectf(125,229,151,235);

   glColor3ub(3, 41, 64);
   glRectf(136,120,140,240);

     glColor3ub(0, 143, 179);
     glRectf(168,204,188,206);
     glRectf(168,198,188,201);
     glRectf(168,192,188,195);
   //
     glRectf(208,188,222,192);
     glRectf(208,180,222,184);
     glRectf(208,172,222,176);
     glRectf(208,164,222,168);
     glRectf(208,156,222,160);
     glRectf(208,148,222,152);
   //////
     glRectf(235,215,260,220);
     glRectf(235,205,260,210);
     glRectf(235,195,260,200);
     glRectf(235,185,260,190);
     glRectf(235,175,260,180);
     glRectf(235,165,260,170);
     glRectf(235,155,260,160);
     glRectf(235,145,260,150);
     glRectf(235,135,260,140);
     glRectf(235,125,260,130);
     glRectf(235,115,260,120);
     glRectf(235,105,260,110);

     glColor3ub(3, 41, 64);
     glRectf(238,220,240,105);
     glRectf(243,220,245,105);
     glRectf(248,220,250,105);
     glRectf(253,220,255,105);
     glRectf(258,220,269,105);
/////
     glColor3ub(255, 128, 0);
     glRectf(270,145,290,148);
     glRectf(275,135,285,130);
     glRectf(275,120,285,125);
     glRectf(275,105,285,110);
   ///
     glRectf(315,184,325,187);
     glRectf(315,171,325,174);
     glRectf(315,158,325,161);
     glRectf(315,145,325,148);
     glRectf(315,132,325,135);
     glRectf(315,119,325,122);
     glRectf(315,105,325,109);
    ///
     glRectf(340,230,347,240);
   //
     glRectf(365,238,405,240);
     glRectf(365,230,405,232);
     glRectf(365,220,405,222);
     glRectf(365,210,405,212);
     glRectf(365,200,405,202);
   //
     glRectf(425,229,445,230);
     glRectf(425,223,445,224);
     glRectf(425,217,445,218);
     glRectf(425,211,445,212);
     glRectf(425,205,445,206);
     glRectf(425,199,445,200);
     glRectf(425,193,445,194);
     glRectf(425,187,445,188);
     glRectf(425,181,445,182);
     glRectf(425,175,445,176);
     glRectf(425,169,445,170);
     glRectf(425,155,445,156);
     glRectf(425,154,445,150);
     glRectf(425,148,445,149);
  ////
     glColor3ub(3, 41, 64);
     glRectf(450,96,487,220);
     glColor3ub(0, 143, 179);
     glRectf(460,205,477,210);
///
     glRectf(502,235,510,240);
     glRectf(502,225,510,230);
     glRectf(502,215,510,220);
     glRectf(502,205,510,210);
     glRectf(502,195,510,200);
     glRectf(502,185,510,190);
     glRectf(502,175,510,180);
     glRectf(502,165,510,170);


}

void building3()
{

  glColor3ub(0,25,51);
  glRectf(110,192,150,280);
  glRectf(192,152,220,260);
  glRectf(164,192,192,230);
  glBegin(GL_POLYGON);
  glVertex2i(240,192);
  glVertex2i(240,267);
  glVertex2i(255,274);
  glVertex2i(270,267);
  glVertex2i(270,192);
  glEnd();
  glRectf(266,92,299,210);
  glBegin(GL_POLYGON);
  glVertex2i(320,150);
  glVertex2i(320,271);
  glVertex2i(323,275);
  glVertex2i(347,275);
  glVertex2i(350,271);
  glVertex2i(350,150);
  glEnd();
  glRectf(350,150,370,250);

  //windows
    glColor3ub(0, 122, 153);
    glRectf(120,267,140,270);
    glRectf(120,257,140,260);
    glRectf(120,247,140,250);
///

   glRectf(201,251,210,253);
   glRectf(201,244,210,246);
   glRectf(201,237,210,239);
   glRectf(201,230,210,232);
   glRectf(201,225,210,227);
   glRectf(201,218,210,220);
   glRectf(201,211,210,213);
   glRectf(201,204,210,206);
   glRectf(201,197,210,199);
 ////

  glRectf(201,251,210,253);

////

   glRectf(250,258,260,260);
   glRectf(250,246,260,250);
   glRectf(250,234,260,236);
////

   glRectf(273,190,294,195);
   glRectf(273,175,294,180);

///


  glRectf(325,259,345,260);
  glRectf(325,254,345,255);
  glRectf(325,249,345,250);
  glRectf(325,244,345,245);
  glRectf(325,239,345,240);
  glRectf(325,234,345,235);
  glRectf(325,229,345,230);
  glRectf(325,224,345,225);
  glRectf(325,219,345,220);
  glRectf(325,214,345,215);
  glRectf(325,209,345,210);
  glRectf(325,204,345,205);
  glRectf(325,199,345,200);
  glRectf(325,194,345,195);
  glRectf(325,189,345,190);
  glRectf(325,184,345,185);


}

void building4()
{


  glColor3ub(0, 38, 77);
  glRectf(138,220,155,288);
  glRectf(160,200,180,260);
  glRectf(162,260,178,265);
  glRectf(165,265,175,270);


  glBegin(GL_TRIANGLES);
  glVertex2i(168,270);
  glVertex2i(170,290);
  glVertex2i(172,270);

  glEnd();

  glRectf(185,200,210,270);
  glRectf(225,200,250,280);
  glRectf(255,200,280,260);
  glRectf(287,180,313,260);

   half_circle(11,300,260);
  glRectf(313,180,325,240);
  glRectf(394,180,415,260);
  glRectf(480,150,510,260);

  glBegin(GL_POLYGON);
  glVertex2i(520,240);
  glVertex2i(535,240);
  glVertex2i(535,195);
  glVertex2i(520,170);
  glEnd();


}

void wheel()
{


  GLdouble rad =45;
   glLineWidth(1.5f);
  for ( j=0;j<=4 ;j++)
  {
    glColor3ub(0,25,51);
    GLint points = 360;
    GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
    GLdouble theta = 0.0;
    glBegin(GL_LINE_LOOP);
    {
        for( i =0; i <=360; i++, theta += delTheta )
        {
            glVertex2f(448+rad * cos(theta),240+rad * sin(theta));
        }
    }
    glEnd();

   if (j<2)
   {
   rad =rad-.5;
   }

   else if (j<=3)
   {
    rad =rad-5;
   }


   else
   {
    rad =rad-35;

       glBegin(GL_TRIANGLE_FAN);
    {
        for( i =0; i <=360; i++, theta += delTheta )
        {
            glVertex2f(448+rad * cos(theta),240+rad * sin(theta));
        }
    }
    glEnd();


   }


  }


   glPushMatrix();
	 glTranslatef(448, 240, 0 );
	 glRotatef(spin, 0.0, 0.0, 1.0);
     glTranslatef(-448, -240, 0 );;

   x=448;  y=240; int z=39; int n=2;
  glBegin(GL_POLYGON);
  glVertex2i(x,y);
  glVertex2i(x-z,y);
  glVertex2i(x-z, y-n);
  glVertex2i(x,y-n);
  glEnd();

  glBegin(GL_POLYGON);
  glVertex2i(x,y);
  glVertex2i(x+z,y);
  glVertex2i(x+z, y-n);
  glVertex2i(x,y-n);
  glEnd();

  glBegin(GL_POLYGON);
  glVertex2i(x,y);
  glVertex2i(x+n,y);
  glVertex2i(x+n, y+z);
  glVertex2i(x,y+z);
  glEnd();

  glBegin(GL_POLYGON);
  glVertex2i(x,y);
  glVertex2i(x+n,y);
  glVertex2i(x+n, y-z);
  glVertex2i(x,y-z);
  glEnd();

  glBegin(GL_POLYGON);
  glVertex2i(x,y);
  glVertex2i(x+28, y+28);
  glVertex2i(x+28, y+28-n);
  glVertex2i(x+n,y);
  glEnd();

  glBegin(GL_POLYGON);
  glVertex2i(x,y);
  glVertex2i(x-28, y+28);
  glVertex2i(x-28, y+28-n);
  glVertex2i(x-n,y);
  glEnd();

  glBegin(GL_POLYGON);
  glVertex2i(x,y);
  glVertex2i(x+28, y-28);
  glVertex2i(x+28, y-28+n);
  glVertex2i(x+n,y);
  glEnd();

    glBegin(GL_POLYGON);
  glVertex2i(x,y);
  glVertex2i(x-28, y-28);
  glVertex2i(x-28, y-28+n);
  glVertex2i(x-n,y);
  glEnd();

    glColor3ub(0, 204, 255);
     circle(3,487,238);
     circle(3,409,238);
     circle(3,450,279);
     circle(3,450,201);

    glColor3ub(245, 225, 112);
     circle(2,476,268);
     circle(2,420,268);
     circle(2,476,212);
     circle(2,420,212);

 glPopMatrix();

}

void bridge()
{


  glColor3ub(7,11,36);
  glBegin(GL_POLYGON);
  glVertex2i(187,167);
  glVertex2i(340,167);
  glVertex2i(340,162);
  glVertex2i(187,162);


  glEnd();
//bridge2
glColor3ub(0,25,51);
  glBegin(GL_POLYGON);
  glVertex2i(150,247);
  glVertex2i(150,250);
  glVertex2i(320,250);
  glVertex2i(320,247);
  glEnd();
  //lane

  glBegin(GL_POLYGON);
  glVertex2i(166,247);
  glVertex2i(166,230);
  glVertex2i(169,230);
  glVertex2i(169,247);
  glEnd();
glColor3ub(0,25,51);

  glBegin(GL_POLYGON);
  glVertex2i(164,247);
  glVertex2i(164,245);
  glVertex2i(171,245);
  glVertex2i(171,247);
  glEnd();

  glBegin(GL_POLYGON);
  glVertex2i(182,247);
  glVertex2i(182,230);
  glVertex2i(185,230);
  glVertex2i(185,247);
  glEnd();

    glBegin(GL_POLYGON);
  glVertex2i(180,247);
  glVertex2i(180,245);
  glVertex2i(187,245);
  glVertex2i(187,247);
  glEnd();

  glBegin(GL_POLYGON);
  glVertex2i(227,247);
  glVertex2i(227,200);
  glVertex2i(231,200);
  glVertex2i(231,247);
  glEnd();

   glBegin(GL_POLYGON);
  glVertex2i(225,247);
  glVertex2i(225,245);
  glVertex2i(232,245);
  glVertex2i(232,247);
  glEnd();

 glBegin(GL_POLYGON);
  glVertex2i(275,247);
  glVertex2i(275,200);
  glVertex2i(279,200);
  glVertex2i(279,247);
  glEnd();

   glBegin(GL_POLYGON);
  glVertex2i(273,247);
  glVertex2i(273,245);
  glVertex2i(281,245);
  glVertex2i(281,247);
  glEnd();

   glBegin(GL_POLYGON);
  glVertex2i(300,247);
  glVertex2i(300,170);
  glVertex2i(304,170);
  glVertex2i(304,247);
  glEnd();

    glBegin(GL_POLYGON);
  glVertex2i(298,247);
  glVertex2i(298,245);
  glVertex2i(306,245);
  glVertex2i(306,247);
  glEnd();


}
void bridgelane()
{


  glColor3ub(7,11,36);
  glBegin(GL_POLYGON);
  glVertex2i(220,162);
  glVertex2i(225,162);
  glVertex2i(225,96);
  glVertex2i(220,96);


  glEnd();
  //bridge lane

  glBegin(GL_POLYGON);
  glVertex2i(217,162);
  glVertex2i(228,162);
  glVertex2i(228,159);
  glVertex2i(217,159);


  glEnd();



  glBegin(GL_POLYGON);
  glVertex2i(260,162);
  glVertex2i(265,162);
  glVertex2i(265,96);
  glVertex2i(260,96);


  glEnd();
  //bridge lane

  glBegin(GL_POLYGON);
  glVertex2i(257,162);
  glVertex2i(268,162);
  glVertex2i(268,159);
  glVertex2i(257,159);


  glEnd();



  glBegin(GL_POLYGON);
  glVertex2i(300,162);
  glVertex2i(305,162);
  glVertex2i(305,96);
  glVertex2i(300,96);


  glEnd();
 // bridge lane


  glBegin(GL_POLYGON);
  glVertex2i(297,162);
  glVertex2i(308,162);
  glVertex2i(308,159);
  glVertex2i(297,159);


  glEnd();


  glBegin(GL_POLYGON);
  glVertex2i(333,162);
  glVertex2i(338,162);
  glVertex2i(338,96);
  glVertex2i(333,96);


  glEnd();
//bridgelane

  glBegin(GL_POLYGON);
  glVertex2i(330,162);
  glVertex2i(340,162);
  glVertex2i(340,159);
  glVertex2i(330,159);

  glEnd();

}


void cloud()
{

   glColor3ub(153,179,255);
  glBegin(GL_POLYGON);
  glVertex2i(192,331);
  glVertex2i(250,331);
  glVertex2i(250,326);
  glVertex2i(192,326);

  glEnd();

  glBegin(GL_POLYGON);
  glVertex2i(210,331);
  glVertex2i(230,331);
  glVertex2i(230,336);
  glVertex2i(210,336);

  glEnd();

  glBegin(GL_POLYGON);
  glVertex2i(175,336);
  glVertex2i(265,336);
  glVertex2i(265,342);
  glVertex2i(175,342);
  glEnd();

  glBegin(GL_POLYGON);
  glVertex2i(430,337);
  glVertex2i(488,337);
  glVertex2i(488,330);
  glVertex2i(430,330);
  glEnd();

   circle(2,191,329);
   circle(2,249,329);
   circle(3,177,339.5);
   circle(3,263,339.5);
   circle(3,432,334);
   circle(3,486,334);



}


void moon()
{


    glColor3ub(0, 51, 102);
    circle(34,380,350);
   glColor3ub(74, 110, 122);

   circle(25,380,350);
   glColor3ub(190, 247, 221);
    circle(20,380,350);



}

void river ()

{

 glColor3ub(0, 0, 0);
 glRectf(0,0,640,96);
 glColor3ub(19, 55, 93);

 glRectf(152,96,482,90);
 glRectf(192,70,448,64);
 glRectf(232,44,408,38);
 glRectf(272,18,368,12);

}

void train1()
{

  //train1

  glColor3ub(19, 55, 93);

   glPushMatrix();
   glTranslatef(train1x, ty, 0 );

  glRectf(230,168,288,177);

  glBegin(GL_TRIANGLES);
  glVertex2i(288,168);
  glVertex2i(288,177);
  glVertex2i(295,168);
  glEnd();

  glBegin(GL_TRIANGLES);
  glVertex2i(230,168);
  glVertex2i(230,177);
  glVertex2i(224,168);
  glEnd();
  //window
  glColor3ub(245, 225, 112);
  glRectf(236,170,240,174);
  glRectf(244,170,248,174);
  glRectf(258,170,262,174);
  glRectf(272,170,276,174);
  glRectf(280,170,284,174);

 glPopMatrix();

}
void train2()
{

  //train2

  glPushMatrix();
  glTranslatef(train2x, ty, 0 );

  glColor3ub(19, 55, 93);
  glRectf(256,250,300,255);

  glBegin(GL_TRIANGLES);
  glVertex2i(300,250);
  glVertex2i(300,255);
  glVertex2i(304,250);
  glEnd();

  glBegin(GL_TRIANGLES);
  glVertex2i(256,250);
  glVertex2i(256,255);
  glVertex2i(252,250);
  glEnd();
  //window
  glColor3ub(245, 225, 112);
  glRectf(263,252,267,253);
  glRectf(271,252,275,253);
glRectf(279,252,283,253);
glRectf(287,252,291,253);
glRectf(295,252,296,253);

glPopMatrix();


}
void dayview()
{

      glColor3ub(89, 178, 172);

     circle(220,320,240);



}



void daybuilding()
{

  glColor3ub(233, 140, 115);
  glBegin(GL_POLYGON);
  glVertex2i(148,98);
  glVertex2i(148,192);
  glVertex2i(188,192);
  glVertex2i(188,98);
  glEnd();



  glBegin(GL_POLYGON);
  glVertex2i(128,130);
  glVertex2i(128,222);
  glVertex2i(155,222);
  glVertex2i(155,96);
  glEnd();




 glColor3ub(233, 140, 115);
  glBegin(GL_POLYGON);
  glVertex2i(103,198);
  glVertex2i(103,200);
  glVertex2i(128,200);
  glVertex2i(128,130);
  glEnd();


  glColor3ub(233, 140, 115);
  glBegin(GL_POLYGON);
  glVertex2i(188,154);
  glVertex2i(218,154);
  glVertex2i(218,92);
  glVertex2i(188,92);
  glEnd();


  glRectf(340,92,400,222);

  glRectf(400,92,430,192);

  glRectf(430,92,460,144);

  glRectf(450,92,480,202);

 glColor3ub(233, 140, 115);
  glBegin(GL_POLYGON);
  glVertex2i(480,162);
  glVertex2i(510,162);
  glVertex2i(510,125);
  glVertex2i(480,92);
  glEnd();

  glBegin(GL_POLYGON);
  glVertex2i(510,192);
  glVertex2i(530,192);
  glVertex2i(530,173);
  glVertex2i(510,130);
  glEnd();

  /////

   glColor3ub(69, 83, 84);
  glRectf(118,192,124,188);
  glRectf(118,175,124,171);

  ///windows
  glRectf(161,102,182,106);
  glRectf(161,114,182,118);
  glRectf(161,122,182,126);
  glRectf(161,136,182,140);
  glRectf(161,150,182,154);
  glRectf(161,164,182,168);
  glRectf(161,178,182,182);
  glColor3ub(233, 140, 115);
  glRectf(167,98,176,192);
///
   glColor3ub(69, 83, 84);
  glRectf(132,207,151,204);
  glRectf(132,189,151,186);
  glRectf(132,171,151,168);
  glRectf(132,153,151,150);
///
  glRectf(198,144,210,137);
  glRectf(198,127,210,120);
  glRectf(198,110,210,103);

  //

  glRectf(350,210,390,205);
  glRectf(350,195,390,190);
  glRectf(350,180,390,175);
  glRectf(350,165,390,160);
  glRectf(350,150,390,145);
  glRectf(350,135,390,130);
  glRectf(350,120,390,115);
  glRectf(350,95,390,90);
glColor3ub(233, 140, 115);
  glRectf(365,90,374,210);

  ///
  glRectf(410,102,420,182);

glColor3ub(69, 83, 84);
  glRectf(410,170,420,182);
  glRectf(410,150,420,160);
  glRectf(410,130,420,140);
  glRectf(410,110,420,120);
/////

 //
glColor3ub(69, 83, 84);
  glRectf(460,192,470,189);
  glRectf(460,179,470,176);
  glRectf(460,166,470,163);
  glRectf(460,153,470,150);
  glRectf(430,140,470,137);
  glRectf(430,127,470,124);
  glRectf(430,114,470,111);
////////
  glRectf(490,142,500,152);
  glRectf(480,122,490,132);
  glRectf(495,122,505,132);
  glRectf(523,163,518,182);


}


void daybuilding2()
{

  glColor3ub(234, 203, 142);
  glRectf(118,192,158,240);
  glRectf(158,144,198,216);
  glRectf(201,96,230,201);
  glRectf(230,96,265,230);
  glRectf(265,96,295,155);
  glRectf(300,96,330,192);
  glRectf(330,96,357,250);
  glRectf(492,150,520,250);
  glBegin(GL_POLYGON);
  glVertex2i(360,265);
  glVertex2i(385,265);
  glVertex2i(385,245);
  glVertex2i(410,245);
  glVertex2i(410,96);
  glVertex2i(360,96);
  glEnd();
  glBegin(GL_POLYGON);
  glVertex2i(420,235);
  glVertex2i(435,250);
  glVertex2i(450,235);
  glVertex2i(450,96);
  glVertex2i(420,96);
  glEnd();
  glRectf(450,96,487,220);


  //window
   glColor3ub(66, 81, 81);
   glRectf(125,229,151,235);

   glColor3ub(234, 203, 142);
   glRectf(136,120,140,240);

     glColor3ub(66, 81, 81);
     glRectf(168,204,188,206);
     glRectf(168,198,188,201);
     glRectf(168,192,188,195);
   //
     glRectf(208,188,222,192);
     glRectf(208,180,222,184);
     glRectf(208,172,222,176);
     glRectf(208,164,222,168);
     glRectf(208,156,222,160);
     glRectf(208,148,222,152);
   //////
     glRectf(235,215,260,220);
     glRectf(235,205,260,210);
     glRectf(235,195,260,200);
     glRectf(235,185,260,190);
     glRectf(235,175,260,180);
     glRectf(235,165,260,170);
     glRectf(235,155,260,160);
     glRectf(235,145,260,150);
     glRectf(235,135,260,140);
     glRectf(235,125,260,130);
     glRectf(235,115,260,120);
     glRectf(235,105,260,110);

    glColor3ub(234, 203, 142);
     glRectf(238,220,240,105);
     glRectf(243,220,245,105);
     glRectf(248,220,250,105);
     glRectf(253,220,255,105);
     glRectf(258,220,269,105);
/////
     glColor3ub(66, 81, 81);
     glRectf(270,145,290,148);
     glRectf(275,135,285,130);
     glRectf(275,120,285,125);
     glRectf(275,105,285,110);
   ///
     glRectf(315,184,325,187);
     glRectf(315,171,325,174);
     glRectf(315,158,325,161);
     glRectf(315,145,325,148);
     glRectf(315,132,325,135);
     glRectf(315,119,325,122);
     glRectf(315,105,325,109);
    ///
     glRectf(340,230,347,240);
   //
     glRectf(365,238,405,240);
     glRectf(365,230,405,232);
     glRectf(365,220,405,222);
     glRectf(365,210,405,212);
     glRectf(365,200,405,202);
   //
     glRectf(425,229,445,230);
     glRectf(425,223,445,224);
     glRectf(425,217,445,218);
     glRectf(425,211,445,212);
     glRectf(425,205,445,206);
     glRectf(425,199,445,200);
     glRectf(425,193,445,194);
     glRectf(425,187,445,188);
     glRectf(425,181,445,182);
     glRectf(425,175,445,176);
     glRectf(425,169,445,170);
     glRectf(425,155,445,156);
     glRectf(425,154,445,150);
     glRectf(425,148,445,149);
  ////
     glColor3ub(234, 203, 142);
     glRectf(450,96,487,220);
     glColor3ub(66, 81, 81);
     glRectf(460,205,477,210);
///
     glRectf(502,235,510,240);
     glRectf(502,225,510,230);
     glRectf(502,215,510,220);
     glRectf(502,205,510,210);
     glRectf(502,195,510,200);
     glRectf(502,185,510,190);
     glRectf(502,175,510,180);
     glRectf(502,165,510,170);


}

void daybuilding3()
{

  glColor3ub(116, 78, 56);
  glRectf(110,192,150,280);
  glRectf(192,152,220,260);
  glRectf(164,192,192,230);
  glBegin(GL_POLYGON);
  glVertex2i(240,192);
  glVertex2i(240,267);
  glVertex2i(255,274);
  glVertex2i(270,267);
  glVertex2i(270,192);
  glEnd();
  glRectf(266,92,299,210);
  glBegin(GL_POLYGON);
  glVertex2i(320,150);
  glVertex2i(320,271);
  glVertex2i(323,275);
  glVertex2i(347,275);
  glVertex2i(350,271);
  glVertex2i(350,150);
  glEnd();
  glRectf(350,150,370,250);

  //windows
    glColor3ub(46, 58, 58);
    glRectf(120,267,140,270);
    glRectf(120,257,140,260);
    glRectf(120,247,140,250);
///

   glRectf(201,251,210,253);
   glRectf(201,244,210,246);
   glRectf(201,237,210,239);
   glRectf(201,230,210,232);
   glRectf(201,225,210,227);
   glRectf(201,218,210,220);
   glRectf(201,211,210,213);
   glRectf(201,204,210,206);
   glRectf(201,197,210,199);
 ////

  glRectf(201,251,210,253);

////

   glRectf(250,258,260,260);
   glRectf(250,246,260,250);
   glRectf(250,234,260,236);
////

   glRectf(273,190,294,195);
   glRectf(273,175,294,180);

///


  glRectf(325,259,345,260);
  glRectf(325,254,345,255);
  glRectf(325,249,345,250);
  glRectf(325,244,345,245);
  glRectf(325,239,345,240);
  glRectf(325,234,345,235);
  glRectf(325,229,345,230);
  glRectf(325,224,345,225);
  glRectf(325,219,345,220);
  glRectf(325,214,345,215);
  glRectf(325,209,345,210);
  glRectf(325,204,345,205);
  glRectf(325,199,345,200);
  glRectf(325,194,345,195);
  glRectf(325,189,345,190);
  glRectf(325,184,345,185);


}

void daybuilding4()
{


  glColor3ub(45, 73, 71);
  glRectf(138,220,155,288);
  glRectf(160,200,180,260);
  glRectf(162,260,178,265);
  glRectf(165,265,175,270);


  glBegin(GL_TRIANGLES);
  glVertex2i(168,270);
  glVertex2i(170,290);
  glVertex2i(172,270);

  glEnd();

  glRectf(185,200,210,270);
  glRectf(225,200,250,280);
  glRectf(255,200,280,260);
  glRectf(287,180,313,260);

   half_circle(11,300,260);
  glRectf(313,180,325,240);
  glRectf(394,180,415,260);
  glRectf(480,150,510,260);

  glBegin(GL_POLYGON);
  glVertex2i(520,240);
  glVertex2i(535,240);
  glVertex2i(535,195);
  glVertex2i(520,170);
  glEnd();


}

void daywheel()
{


  GLdouble rad =45;
   glLineWidth(1.5f);
  for ( j=0;j<=4 ;j++)
  {
    glColor3ub(45, 73, 71);
    GLint points = 360;
    GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
    GLdouble theta = 0.0;
    glBegin(GL_LINE_LOOP);
    {
        for( i =0; i <=360; i++, theta += delTheta )
        {
            glVertex2f(448+rad * cos(theta),240+rad * sin(theta));
        }
    }
    glEnd();

   if (j<2)
   {
   rad =rad-.5;
   }

   else if (j<=3)
   {
    rad =rad-5;
   }


   else
   {
    rad =rad-35;

       glBegin(GL_TRIANGLE_FAN);
    {
        for( i =0; i <=360; i++, theta += delTheta )
        {
            glVertex2f(448+rad * cos(theta),240+rad * sin(theta));
        }
    }
    glEnd();


   }


  }


   glPushMatrix();
	 glTranslatef(448, 240, 0 );
	 glRotatef(spin, 0.0, 0.0, 1.0);
     glTranslatef(-448, -240, 0 );;

   x=448;  y=240; int z=39; int n=2;
  glBegin(GL_POLYGON);
  glVertex2i(x,y);
  glVertex2i(x-z,y);
  glVertex2i(x-z, y-n);
  glVertex2i(x,y-n);
  glEnd();

  glBegin(GL_POLYGON);
  glVertex2i(x,y);
  glVertex2i(x+z,y);
  glVertex2i(x+z, y-n);
  glVertex2i(x,y-n);
  glEnd();

  glBegin(GL_POLYGON);
  glVertex2i(x,y);
  glVertex2i(x+n,y);
  glVertex2i(x+n, y+z);
  glVertex2i(x,y+z);
  glEnd();

  glBegin(GL_POLYGON);
  glVertex2i(x,y);
  glVertex2i(x+n,y);
  glVertex2i(x+n, y-z);
  glVertex2i(x,y-z);
  glEnd();

  glBegin(GL_POLYGON);
  glVertex2i(x,y);
  glVertex2i(x+28, y+28);
  glVertex2i(x+28, y+28-n);
  glVertex2i(x+n,y);
  glEnd();

  glBegin(GL_POLYGON);
  glVertex2i(x,y);
  glVertex2i(x-28, y+28);
  glVertex2i(x-28, y+28-n);
  glVertex2i(x-n,y);
  glEnd();

  glBegin(GL_POLYGON);
  glVertex2i(x,y);
  glVertex2i(x+28, y-28);
  glVertex2i(x+28, y-28+n);
  glVertex2i(x+n,y);
  glEnd();

    glBegin(GL_POLYGON);
  glVertex2i(x,y);
  glVertex2i(x-28, y-28);
  glVertex2i(x-28, y-28+n);
  glVertex2i(x-n,y);
  glEnd();

    glColor3ub(231, 65, 37);
     circle(3,487,238);
     circle(3,409,238);
     circle(3,450,279);
     circle(3,450,201);

    glColor3ub(245, 225, 112);
     circle(2,476,268);
     circle(2,420,268);
     circle(2,476,212);
     circle(2,420,212);

 glPopMatrix();

}

void daybridge()
{


 glColor3ub(116, 78, 56);
  glBegin(GL_POLYGON);
  glVertex2i(187,167);
  glVertex2i(340,167);
  glVertex2i(340,162);
  glVertex2i(187,162);


  glEnd();
//bridge2
glColor3ub(116, 78, 56);
  glBegin(GL_POLYGON);
  glVertex2i(150,247);
  glVertex2i(150,250);
  glVertex2i(320,250);
  glVertex2i(320,247);
  glEnd();
  //lane

  glBegin(GL_POLYGON);
  glVertex2i(166,247);
  glVertex2i(166,230);
  glVertex2i(169,230);
  glVertex2i(169,247);
  glEnd();
glColor3ub(116, 78, 56);

  glBegin(GL_POLYGON);
  glVertex2i(164,247);
  glVertex2i(164,245);
  glVertex2i(171,245);
  glVertex2i(171,247);
  glEnd();

  glBegin(GL_POLYGON);
  glVertex2i(182,247);
  glVertex2i(182,230);
  glVertex2i(185,230);
  glVertex2i(185,247);
  glEnd();

    glBegin(GL_POLYGON);
  glVertex2i(180,247);
  glVertex2i(180,245);
  glVertex2i(187,245);
  glVertex2i(187,247);
  glEnd();

  glBegin(GL_POLYGON);
  glVertex2i(227,247);
  glVertex2i(227,200);
  glVertex2i(231,200);
  glVertex2i(231,247);
  glEnd();

   glBegin(GL_POLYGON);
  glVertex2i(225,247);
  glVertex2i(225,245);
  glVertex2i(232,245);
  glVertex2i(232,247);
  glEnd();

 glBegin(GL_POLYGON);
  glVertex2i(275,247);
  glVertex2i(275,200);
  glVertex2i(279,200);
  glVertex2i(279,247);
  glEnd();

   glBegin(GL_POLYGON);
  glVertex2i(273,247);
  glVertex2i(273,245);
  glVertex2i(281,245);
  glVertex2i(281,247);
  glEnd();

   glBegin(GL_POLYGON);
  glVertex2i(300,247);
  glVertex2i(300,170);
  glVertex2i(304,170);
  glVertex2i(304,247);
  glEnd();

    glBegin(GL_POLYGON);
  glVertex2i(298,247);
  glVertex2i(298,245);
  glVertex2i(306,245);
  glVertex2i(306,247);
  glEnd();


}
void daybridgelane()
{


  glColor3ub(116, 78, 56);
  glBegin(GL_POLYGON);
  glVertex2i(220,162);
  glVertex2i(225,162);
  glVertex2i(225,96);
  glVertex2i(220,96);


  glEnd();
  //bridge lane

  glBegin(GL_POLYGON);
  glVertex2i(217,162);
  glVertex2i(228,162);
  glVertex2i(228,159);
  glVertex2i(217,159);


  glEnd();



  glBegin(GL_POLYGON);
  glVertex2i(260,162);
  glVertex2i(265,162);
  glVertex2i(265,96);
  glVertex2i(260,96);


  glEnd();
  //bridge lane

  glBegin(GL_POLYGON);
  glVertex2i(257,162);
  glVertex2i(268,162);
  glVertex2i(268,159);
  glVertex2i(257,159);


  glEnd();



  glBegin(GL_POLYGON);
  glVertex2i(300,162);
  glVertex2i(305,162);
  glVertex2i(305,96);
  glVertex2i(300,96);


  glEnd();
 // bridge lane


  glBegin(GL_POLYGON);
  glVertex2i(297,162);
  glVertex2i(308,162);
  glVertex2i(308,159);
  glVertex2i(297,159);


  glEnd();


  glBegin(GL_POLYGON);
  glVertex2i(333,162);
  glVertex2i(338,162);
  glVertex2i(338,96);
  glVertex2i(333,96);


  glEnd();
//bridgelane

  glBegin(GL_POLYGON);
  glVertex2i(330,162);
  glVertex2i(340,162);
  glVertex2i(340,159);
  glVertex2i(330,159);

  glEnd();

}


void daycloud()
{

   glColor3ub(255, 255, 255);
  glBegin(GL_POLYGON);
  glVertex2i(192,331);
  glVertex2i(250,331);
  glVertex2i(250,326);
  glVertex2i(192,326);

  glEnd();

  glBegin(GL_POLYGON);
  glVertex2i(210,331);
  glVertex2i(230,331);
  glVertex2i(230,336);
  glVertex2i(210,336);

  glEnd();

  glBegin(GL_POLYGON);
  glVertex2i(175,336);
  glVertex2i(265,336);
  glVertex2i(265,342);
  glVertex2i(175,342);
  glEnd();

  glBegin(GL_POLYGON);
  glVertex2i(430,337);
  glVertex2i(488,337);
  glVertex2i(488,330);
  glVertex2i(430,330);
  glEnd();

   circle(2,191,329);
   circle(2,249,329);
   circle(3,177,339.5);
   circle(3,263,339.5);
   circle(3,432,334);
   circle(3,486,334);



}


void sun()
{



   glColor3ub(229, 210, 139);

   circle(25,380,350);
   glColor3ub(255, 203, 54);
    circle(20,380,350);



}

void dayriver ()

{

 glColor3ub(0, 0, 0);
 glRectf(0,0,640,96);
  glColor3ub(89, 178, 172);


 glRectf(152,96,482,90);
 glRectf(192,70,448,64);
 glRectf(232,44,408,38);
 glRectf(272,18,368,12);

}

void daytrain1()
{

  //train1

  glColor3ub(231, 65, 37);

   glPushMatrix();
   glTranslatef(train1x, ty, 0 );

  glRectf(230,168,288,177);

  glBegin(GL_TRIANGLES);
  glVertex2i(288,168);
  glVertex2i(288,177);
  glVertex2i(295,168);
  glEnd();

  glBegin(GL_TRIANGLES);
  glVertex2i(230,168);
  glVertex2i(230,177);
  glVertex2i(224,168);
  glEnd();
  //window
  glColor3ub(70, 89, 85);
  glRectf(236,170,240,174);
  glRectf(244,170,248,174);
  glRectf(258,170,262,174);
  glRectf(272,170,276,174);
  glRectf(280,170,284,174);

 glPopMatrix();

}
void daytrain2()
{

  //train2

  glPushMatrix();
  glTranslatef(train2x, ty, 0 );
  glColor3ub(70, 89, 85);
  glRectf(256,250,300,255);

  glBegin(GL_TRIANGLES);
  glVertex2i(300,250);
  glVertex2i(300,255);
  glVertex2i(304,250);
  glEnd();

  glBegin(GL_TRIANGLES);
  glVertex2i(256,250);
  glVertex2i(256,255);
  glVertex2i(252,250);
  glEnd();
  //window
  glColor3ub(245, 225, 112);
  glRectf(263,252,267,253);
  glRectf(271,252,275,253);
glRectf(279,252,283,253);
glRectf(287,252,291,253);
glRectf(295,252,296,253);

glPopMatrix();


}

void main_display()
{
   if (day==1)
   {

     dayview();
     dayriver();

	 sun();
     daycloud();
	 daybuilding4();
	daywheel();
	  daytrain2();
     daybuilding3();
	 daybuilding2();
	 daytrain1();
     daybuilding();
     daybridge();
     daybridgelane();
     dayriver();


   }

   else
    {


     view();
     river();

	 moon();
     cloud();
	 building4();
	 wheel();
	  train2();
     building3();
	 building2();
	 train1();
     building();
     bridge();
     bridgelane();
     river();





    }


}



void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);


     main_display();
   glFlush();


}
void move_right(void)
{
   spin = spin + .25;

    train1x	+=  .25;
    if (train1x > 120.0)
    train1x = train1x - 200.0;

    train2x	-=  .25;
    if (train2x < -150.0)
    train2x = train2x + 200.0;


   glutPostRedisplay();
}

void spinDisplay_right(void)
{
   spin = spin - 1;
   if (spin > 360.0)
      spin = spin - 360.0;
   glutPostRedisplay();
}

void my_keyboard(unsigned char key, int x, int y)
{

	switch (key) {

	 case 'd':
                 day=1;
                glutIdleFunc(main_display);
                break;

            case 'D':
                 day=1;
                  glutIdleFunc(main_display); ;
                break;

	  default:
			break;
	}
}
void my_mouse(int button, int state, int x, int y)
{
   switch (button) {
      case GLUT_LEFT_BUTTON:
         if (state == GLUT_DOWN)
            glutIdleFunc(move_right);
         break;
      case GLUT_MIDDLE_BUTTON:
      case GLUT_RIGHT_BUTTON:
         if (state == GLUT_DOWN)
			glutIdleFunc(spinDisplay_right);
          //glutIdleFunc(NULL); // make idle function inactive
         break;
      default:
         break;
   }
}


int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(50, 50);
	glutInitWindowSize(800, 600);
	glutCreateWindow("A day with metropolis sky");
	init();
	glutKeyboardFunc(my_keyboard);
	glutMouseFunc(my_mouse);
	glutDisplayFunc(display);

	glutMainLoop();
}

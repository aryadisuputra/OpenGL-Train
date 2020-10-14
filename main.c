#include <windows.h>
#include <gl/glut.h>
#include <math.h>

int i;
const double PI = 3.14;
void lingkaran(int jari2, int jumlah_titik, int x_tengah, int y_tengah) {
    glBegin(GL_POLYGON);
    for (i=0;i<=360;i++){
    float sudut=i*(2*PI/jumlah_titik);
    float x=x_tengah+jari2*cos(sudut);
    float y=y_tengah+jari2*sin(sudut);
    glVertex2f(x,y);
    }
    glEnd();
 }

void bintang(){
    glBegin(GL_POLYGON);
        glVertex2f(7.7,7);
        glVertex2f(8,14.6);
        glVertex2f(9.9,9);
        glVertex2f(15.7,9);
        glVertex2f(11,5.5);
        glVertex2f(12.8,0.1);
        glVertex2f(8,3.4);
        glVertex2f(3.2,0.1);
        glVertex2f(5.4,5.5);
        glVertex2f(0.3,9);
        glVertex2f(6.3,9);
        glVertex2f(8,14.6);
    glEnd();
}

int r=1;
int ujung=1;
void timer(int value){
    if (ujung==1 && r>-1200){
        r--;
    if(r==-1200){
        ujung=0;}
    }
    else
    if (r<600 && ujung==0){
        r++;
    if (r==600){
        ujung = 1;}
    }
    glutPostRedisplay();
    glutTimerFunc(5,timer,0);
}

void latar(){
    glClearColor(0.1f, 0.1f, 0.1f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    //#REL#
    //tanah
    glBegin(GL_QUADS);
        glColor3f(0.9, 0.9, 0.5);
        glVertex2i(0, -450);
        glVertex2i(800, -450);
        glColor3f(0.8, 0.8, 0.9);
        glVertex2i(800, -500);
        glVertex2i(0, -500);
    glEnd();
    //dasar rel
    glBegin(GL_QUADS);
        glColor3f(0.3, 0.3, 0.1);
        glVertex2i(0, -450);
        glVertex2i(0, -425);
        glVertex2i(800, -425);
        glVertex2i(800, -450);
    glEnd();
    //rel
    glBegin(GL_QUADS);
        glColor3f(0.3, 0.3, 0.3);
        glVertex2i(0, -430);
        glVertex2i(0, -435);
        glVertex2i(800, -435);
        glVertex2i(800, -430);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0.3, 0.3, 0.3);
        glVertex2i(0, -440);
        glVertex2i(0, -445);
        glVertex2i(800, -445);
        glVertex2i(800, -440);
    glEnd();
    //pembatas rel
    glBegin(GL_QUADS);
        glColor3f(0.2, 0.2, 0.2);
        glVertex2i(0, -420);
        glVertex2i(0, -425);
        glColor3f(0.3, 0.3, 0.1);
        glVertex2i(800, -425);
        glVertex2i(800, -420);
    glEnd();
    //#STASIUN#
    //atap
    glBegin(GL_QUADS);
        glColor3f(0.75, 0.1, 0.0);
        glVertex2i(450, -175);
        glVertex2i(800, -175);
        glColor3f(1.0, 0.5, 0.0);
        glVertex2i(800, -225);
        glVertex2i(400, -225);
    glEnd();
    //tembok
    glBegin(GL_QUADS);
        glColor3f(0.5, 0.5, 0.2);
        glVertex2i(425, -225);
        glVertex2i(800, -225);
        glVertex2i(800, -360);
        glVertex2i(425, -360);
    glEnd();
    //lampu stasiun
    glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2i(480, -226);
        glVertex2i(480, -250);
    glEnd();
    glBegin(GL_TRIANGLES);
        glColor3f(0.2, 0.2, 0.2);
        glVertex2i(480, -249);
        glVertex2i(490, -275);
        glVertex2i(470, -275);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0.8, 0.8, 0.0);
        glVertex2i(470, -275);
        glVertex2i(490, -275);
        glColor3f(0.5, 0.5, 0.2);
        glVertex2i(500, -290);
        glVertex2i(460, -290);
    glEnd();
    //lantai
    glBegin(GL_QUADS);
        glColor3f(0.8, 0.8, 0.8);
        glVertex2i(325, -420);
        glVertex2i(395, -360);
        glVertex2i(800, -360);
        glVertex2i(800, -420);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2i(325, -420);
        glVertex2i(395, -360);
        glVertex2i(395, -360);
        glVertex2i(800, -360);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0.2, 0.2, 0.2);
        glVertex2i(340, -420);
        glVertex2i(800, -420);
        glColor3f(0.8, 0.8, 0.8);
        glVertex2i(800, -372);
        glVertex2i(400, -372);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2i(340, -420);
        glVertex2i(400, -372);
        glVertex2i(400, -372);
        glVertex2i(800, -372);
    glEnd();
    //tiang
    glBegin(GL_QUADS);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2i(534, -385);
        glVertex2i(534, -225);
        glVertex2i(540, -225);
        glVertex2i(540, -385);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2i(529, -400);
        glVertex2i(529, -385);
        glVertex2i(545, -385);
        glVertex2i(545, -400);
    glEnd();
    glBegin(GL_TRIANGLES);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2i(537, -250);
        glVertex2i(530, -225);
        glVertex2i(545, -225);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2i(684, -385);
        glVertex2i(684, -225);
        glVertex2i(690, -225);
        glVertex2i(690, -385);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2i(679, -400);
        glVertex2i(679, -385);
        glVertex2i(695, -385);
        glVertex2i(695, -400);
    glEnd();
    glBegin(GL_TRIANGLES);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2i(687, -250);
        glVertex2i(680, -225);
        glVertex2i(695, -225);
    glEnd();
    //pintu stasiun
    glColor3f(0.0, 0.0, 0.0);
    lingkaran(35, 100, 612.5, -275);
    glBegin(GL_QUADS);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2i(577, -360);
        glVertex2i(577, -275);
        glVertex2i(647, -275);
        glVertex2i(647, -360);
    glEnd();
    glColor3f(0.8, 0.8, 0.0);
    lingkaran(32, 100, 612, -275);
    glBegin(GL_QUADS);
        glColor3f(0.8, 0.8, 0.0);
        glVertex2i(580, -360);
        glVertex2i(580, -275);
        glVertex2i(644, -275);
        glVertex2i(644, -360);
    glEnd();
    //jendela stasiun
    glBegin(GL_QUADS);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2i(712, -257);
        glVertex2i(712, -313);
        glVertex2i(783, -313);
        glVertex2i(783, -257);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0.8, 0.8, 0.0);
        glVertex2i(725, -260);
        glVertex2i(725, -310);
        glVertex2i(770, -310);
        glVertex2i(770, -260);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2i(748, -311);
        glVertex2i(748, -259);
        glVertex2i(725, -285);
        glVertex2i(771, -285);
    glEnd();
    //#LANGIT#
    //bulan
    glColor3f(0.9, 0.9, 0.0);
    lingkaran(25, 100, 75, -75);
    glColor3f(0.1, 0.1, 0.1);
    lingkaran(25, 100, 90, -80);
    //bintang
    glPushMatrix();
    glRotatef(10,0,0,1);
    glTranslatef(175,-80,0);
    glColor3f(1,1,1);
    bintang();
    glRotatef(10,0,0,1);
    glTranslatef(200,-100,0);
    glColor3f(1,1,1);
    bintang();
    glRotatef(10,0,0,1);
    glTranslatef(225,-90,0);
    glColor3f(1,1,1);
    bintang();
    glPopMatrix();
    //bintang kecil
    glBegin(GL_POINTS);
    glColor3f(1.0, 1.0, 1.0);
        glVertex2i(123, -60);
        glVertex2i(224, -65);
        glVertex2i(345, -80);
        glVertex2i(446, -60);
        glVertex2i(547, -55);
        glVertex2i(660, -75);
        glVertex2i(713, -77);
        glVertex2i(134, -78);
        glVertex2i(255, -52);
        glVertex2i(366, -69);
        glVertex2i(467, -74);
        glVertex2i(578, -50);
        glVertex2i(689, -45);
        glVertex2i(767, -69);
        glVertex2i(159, -57);
        glVertex2i(274, -65);
        glVertex2i(315, -80);
        glVertex2i(486, -45);
        glVertex2i(518, -50);
        glVertex2i(615, -64);
        glVertex2i(739, -63);
    glEnd();
}

void kereta(){
    //roda
    glColor3f(0.0, 0.0, 0.0);
        lingkaran(6, 50, 330, -436);
        lingkaran(6, 50, 345, -436);
        lingkaran(6, 50, 405, -436);
        lingkaran(6, 50, 420, -436);
        lingkaran(6, 50, 500, -436);
        lingkaran(6, 50, 515, -436);
        lingkaran(6, 50, 548, -436);
        lingkaran(6, 50, 563, -436);
        lingkaran(6, 50, 638, -436);
        lingkaran(6, 50, 653, -436);
        lingkaran(6, 50, 753, -436);
        lingkaran(6, 50, 768, -436);
        lingkaran(6, 50, 801, -436);
        lingkaran(6, 50, 816, -436);
        lingkaran(6, 50, 901, -436);
        lingkaran(6, 50, 916, -436);
        lingkaran(6, 50, 1031, -436);
        lingkaran(6, 50, 1016, -436);
    //gerbong 1
    glBegin(GL_POLYGON);
    glColor3f (0.3,0.5,0.3);
        glVertex2i(280, -400);
        glVertex2i(305, -345);
        glVertex2i(315, -340);
        glVertex2i(520, -340);
        glVertex2i(530, -350);
        glVertex2i(530, -400);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.85,0.85,0.85);
        glVertex2i(310, -430);
        glVertex2i(310, -440);
        glVertex2i(295, -440);
        glVertex2i(280, -400);
        glVertex2i(530, -400);
        glVertex2i(530, -430);
    glEnd();
    //gerbong 2
    glBegin(GL_POLYGON);
    glColor3f (0.3,0.5,0.3);
        glVertex2i(533, -400);
        glVertex2i(533, -350);
        glVertex2i(543, -340);
        glVertex2i(773, -340);
        glVertex2i(783, -350);
        glVertex2i(783, -400);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.85,0.85,0.85);
        glVertex2i(533, -430);
        glVertex2i(533, -400);
        glVertex2i(783, -400);
        glVertex2i(783, -430);
    glEnd();
    //gerbong 3
    glBegin(GL_POLYGON);
    glColor3f (0.3,0.5,0.3);
        glVertex2i(786, -400);
        glVertex2i(786, -350);
        glVertex2i(796, -340);
        glVertex2i(1046, -340);
        glVertex2i(1076, -370);
        glVertex2i(1076, -400);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.85,0.85,0.85);
        glVertex2i(786, -430);
        glVertex2i(786, -400);
        glVertex2i(1076, -400);
        glVertex2i(1056, -430);
    glEnd();
    //sambungan gerbong
    glBegin(GL_QUADS);
    glColor3f (0.2,0.2,0.2);
        glVertex2i(530, -425);
        glVertex2i(530, -350);
        glVertex2i(533, -350);
        glVertex2i(533, -425);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f (0.2,0.2,0.2);
        glVertex2i(783, -425);
        glVertex2i(783, -350);
        glVertex2i(786, -350);
        glVertex2i(786, -425);
    glEnd();
    //as roda
    glBegin(GL_QUADS);
    glColor3f (0.5,0.5,0.5);
        glVertex2i(312, -432);
        glVertex2i(312, -435);
        glVertex2i(530, -435);
        glVertex2i(530, -432);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f (0.5,0.5,0.5);
        glVertex2i(533, -432);
        glVertex2i(533, -435);
        glVertex2i(783, -435);
        glVertex2i(783, -432);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f (0.5,0.5,0.5);
        glVertex2i(786, -432);
        glVertex2i(786, -435);
        glVertex2i(1056, -435);
        glVertex2i(1056, -432);
    glEnd();
    //garis warna
    //biru
    glBegin(GL_QUADS);
    glColor3f (0.0,0.0,0.3);
        glVertex2i(365, -410);
        glVertex2i(370, -405);
        glVertex2i(530, -405);
        glVertex2i(530, -410);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f (0.0,0.0,0.3);
        glVertex2i(533, -410);
        glVertex2i(533, -405);
        glVertex2i(783, -405);
        glVertex2i(783, -410);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f (0.0,0.0,0.3);
        glVertex2i(786, -410);
        glVertex2i(786, -405);
        glVertex2i(975, -405);
        glVertex2i(980, -410);
    glEnd();
    //merah
    glBegin(GL_QUADS);
    glColor3f (0.7,0.0,0.0);
        glVertex2i(302, -423);
        glVertex2i(300, -418);
        glVertex2i(530, -418);
        glVertex2i(530, -423);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.7,0.0,0.0);
        glVertex2i(533, -423);
        glVertex2i(533, -418);
        glVertex2i(783, -418);
        glVertex2i(783, -423);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.7,0.0,0.0);
        glVertex2i(786, -423);
        glVertex2i(786, -418);
        glVertex2i(1050, -418);
        glVertex2i(1045, -423);
    glEnd();
    //jendela kereta
    glBegin(GL_TRIANGLES);
    glColor3f (0.7,0.7,0.4);
        glVertex2i(297, -390);
        glVertex2i(315, -355);
        glVertex2i(315, -390);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f (0.7,0.7,0.4);
        glVertex2i(370, -390);
        glVertex2i(370, -355);
        glVertex2i(395, -355);
        glVertex2i(395, -390);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f (0.7,0.7,0.4);
        glVertex2i(410, -390);
        glVertex2i(410, -355);
        glVertex2i(435, -355);
        glVertex2i(435, -390);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f (0.7,0.7,0.4);
        glVertex2i(450, -390);
        glVertex2i(450, -355);
        glVertex2i(475, -355);
        glVertex2i(475, -390);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f (0.7,0.7,0.4);
        glVertex2i(490, -390);
        glVertex2i(490, -355);
        glVertex2i(515, -355);
        glVertex2i(515, -390);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f (0.7,0.7,0.4);
        glVertex2i(595, -390);
        glVertex2i(595, -355);
        glVertex2i(620, -355);
        glVertex2i(620, -390);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f (0.7,0.7,0.4);
        glVertex2i(640, -390);
        glVertex2i(640, -355);
        glVertex2i(665, -355);
        glVertex2i(665, -390);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f (0.7,0.7,0.4);
        glVertex2i(685, -390);
        glVertex2i(685, -355);
        glVertex2i(710, -355);
        glVertex2i(710, -390);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f (0.7,0.7,0.4);
        glVertex2i(800, -390);
        glVertex2i(800, -355);
        glVertex2i(825, -355);
        glVertex2i(825, -390);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f (0.7,0.7,0.4);
        glVertex2i(850, -390);
        glVertex2i(850, -355);
        glVertex2i(875, -355);
        glVertex2i(875, -390);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f (0.7,0.7,0.4);
        glVertex2i(900, -390);
        glVertex2i(900, -355);
        glVertex2i(925, -355);
        glVertex2i(925, -390);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f (0.7,0.7,0.4);
        glVertex2i(950, -390);
        glVertex2i(950, -355);
        glVertex2i(975, -355);
        glVertex2i(975, -390);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.7,0.7,0.4);
        glVertex2i(1035, -390);
        glVertex2i(1035, -355);
        glVertex2i(1047, -355);
        glVertex2i(1060, -368);
        glVertex2i(1060, -390);
    glEnd();
    //pintu kereta
    glBegin(GL_LINES);
    glColor3f (0.5,0.5,0.5);
        glVertex2i(325, -350);
        glVertex2i(325, -415);
        glVertex2i(325, -415);
        glVertex2i(355, -415);
        glVertex2i(355, -415);
        glVertex2i(355, -350);
        glVertex2i(355, -350);
        glVertex2i(325, -350);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f (0.5,0.5,0.5);
        glVertex2i(330, -355);
        glVertex2i(330, -395);
        glVertex2i(350, -395);
        glVertex2i(350, -355);
    glEnd();
    glBegin(GL_LINES);
    glColor3f (0.5,0.5,0.5);
        glVertex2i(545, -350);
        glVertex2i(545, -415);
        glVertex2i(545, -415);
        glVertex2i(575, -415);
        glVertex2i(575, -415);
        glVertex2i(575, -350);
        glVertex2i(575, -350);
        glVertex2i(545, -350);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f (0.5,0.5,0.5);
        glVertex2i(550, -355);
        glVertex2i(550, -395);
        glVertex2i(570, -395);
        glVertex2i(570, -355);
    glEnd();
    glBegin(GL_LINES);
    glColor3f (0.5,0.5,0.5);
        glVertex2i(740, -350);
        glVertex2i(740, -415);
        glVertex2i(740, -415);
        glVertex2i(770, -415);
        glVertex2i(770, -415);
        glVertex2i(770, -350);
        glVertex2i(770, -350);
        glVertex2i(740, -350);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f (0.5,0.5,0.5);
        glVertex2i(745, -355);
        glVertex2i(745, -395);
        glVertex2i(765, -395);
        glVertex2i(765, -355);
    glEnd();
    glBegin(GL_LINES);
    glColor3f (0.5,0.5,0.5);
        glVertex2i(990, -350);
        glVertex2i(990, -415);
        glVertex2i(990, -415);
        glVertex2i(1020, -415);
        glVertex2i(1020, -415);
        glVertex2i(1020, -350);
        glVertex2i(1020, -350);
        glVertex2i(990, -350);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f (0.5,0.5,0.5);
        glVertex2i(995, -355);
        glVertex2i(995, -395);
        glVertex2i(1015, -395);
        glVertex2i(1015, -355);
    glEnd();
}

void stopan(){
    //dasar
    glBegin(GL_QUADS);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2i(64, -471);
        glVertex2i(64, -465);
        glVertex2i(112, -465);
        glVertex2i(112, -471);
    glEnd();
    //pondasi
    glBegin(GL_POLYGON);
        glColor3f(0.2, 0.2, 0.2);
        glVertex2i(92, -465);
        glVertex2i(92, -455);
        glVertex2i(93, -455);
        glVertex2i(93, -440);
        glVertex2i(94, -440);
        glVertex2i(94, -430);
        glVertex2i(106, -430);
        glVertex2i(106, -440);
        glVertex2i(107, -440);
        glVertex2i(107, -455);
        glVertex2i(108, -455);
        glVertex2i(108, -465);
    glEnd();
    //tiang
    glBegin(GL_QUADS);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2i(98, -431);
        glVertex2i(98, -251);
        glVertex2i(102, -251);
        glVertex2i(102, -431);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2i(98, -431);
        glVertex2i(98, -251);
        glVertex2i(102, -251);
        glVertex2i(102, -431);
    glEnd();
    //kabel
    glBegin(GL_QUADS);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2i(72, -465);
        glVertex2i(70, -465);
        glVertex2i(90, -251);
        glVertex2i(92, -251);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2i(102, -251);
        glVertex2i(102, -247);
        glVertex2i(90, -247);
        glVertex2i(90, -251);
    glEnd();
    //lampu
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2i(95, -251);
        glVertex2i(95, -200);
        glVertex2i(130, -200);
        glVertex2i(120, -210);
        glVertex2i(120, -225);
        glVertex2i(130, -225);
        glVertex2i(120, -240);
        glVertex2i(120, -251);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.5, 0.5, 0.0);
        glVertex2i(123, -218);
        glVertex2i(123, -213);
        glColor3f(0.1, 0.1, 0.1);
        glVertex2i(175, -195);
        glVertex2i(175, -240);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.5, 0.5, 0.0);
        glVertex2i(123, -248);
        glVertex2i(123, -243);
        glColor3f(0.1, 0.1, 0.1);
        glVertex2i(175, -225);
        glVertex2i(175, -265);
    glEnd();
}

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
        latar();
    glTranslatef(r,0,0);
        kereta();
    glPopMatrix();
        stopan();
    glFlush();
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitWindowPosition(150,150);
    glutInitWindowSize(800,500);
    glutCreateWindow("KERETA MALAM");
    gluOrtho2D(0,800,-500,0);
    glutDisplayFunc(display);
    timer(0);
    glutMainLoop();
}


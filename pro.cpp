

#include<iostream>
#include<conio.h>
using namespace std;
#include<windows.h>
 #include <stdio.h>

  COORD coord={0,0};
  class input
{
  public:
        float i;
};
class length:public input
{
   public:
       void mm_m();
       void m_mm();
       void cm_m();
       void m_cm();
       void cm_km();
       void km_cm();
       void m_mile();
       void mile_m();
       void km_mile();
       void mile_km();
       void feet_m();
       void m_feet();
       void inch_m();
       void m_inch();
       void yard_m();
       void m_yard();

};
class temp:public input
 {
 public:
       void cel_f();
       void f_cel();
       void cel_k();
       void k_cel();

};
class weight:public input
{
    public:
       void milligm_gm();
       void gm_milligm();
       void gm_kg();
       void kg_gm();
       void kg_mton();
       void mton_kg();
       void pound_kg();
       void kg_pound();
       void gm_pound();
       void pound_gm();
};
class area :public input
{
   public:
       void mmSq_cmSq();
       void cmSq_mmSq();
       void cmSq_mSq ();
       void mSq_cmSq ();
       void mSq_kmSq ();
       void kmSq_mSq ();
       void feetSq_mSq();
       void mSq_feetSq();
       void yardSq_mSq();
       void mSq_yardSq();
       void mileSq_kmSq();
       void kmSq_mileSq();
       void acre_kmSq();
       void kmSq_acre();
       void acre_hect();
       void hect_acre();
};
class vol:public input
{
public:
       void mL_L();
       void L_mL();
       void mmQ_cmQ();
       void cmQ_mmQ();
       void cmQ_mQ ();
       void mQ_cmQ ();
       void inchQ_mQ();
       void mQ_inchQ();
       void feetQ_mQ();
       void mQ_feetQ();
       void mQ_gallon();
       void gallon_mQ();
       void L_gallon();
       void gallon_L();

};
  void symbol();
  void mainmenu();
  void temparature();
  void area1();
  void vol1();
  void weight1();

 void gotoxy(int x,int y)
 {
   coord.X=x;
 coord.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }


 void exit()
 {
     system("cls");
     gotoxy(70,20);
     cout<<"Thank you for visit...";
     for(int i=0;i<1234567891;i++);
 }
 void Length()
 {
     symbol();
     int x=77;int y=15;
    char c=219,d=219;
    for(int i=0;i<12;i++)
    {
        gotoxy(x,y);
        cout<<c;
        x++;
    }
    for(int i=0;i<19;i++)
    {
        gotoxy(x,y);
        cout<<d;
        y++;
    }
    for(int i=0;i<12;i++)
    {
        gotoxy(x,y);
        cout<<c;
        x--;
    }
    for(int i=0;i<19;i++)
    {
        gotoxy(x,y);
        cout<<d;
        y--;
    }
    int x1=80,y1=17;
    gotoxy(x1,y1);
    cout<<"mm-m";
    gotoxy(x1,18);
    cout<<"m-mm";
    gotoxy(x1,19);
    cout<<"cm-m";
    gotoxy(x1,20);
    cout<<"m-cm";
    gotoxy(x1,21);
    cout<<"cm-km";
    gotoxy(x1,22);
    cout<<"km-cm";
    gotoxy(x1,23);
    cout<<"m-mile";
    gotoxy(x1,24);
    cout<<"mile-m";
    gotoxy(x1,25);
    cout<<"km-mile";
    gotoxy(x1,26);
    cout<<"mile-km";
    gotoxy(x1,27);
    cout<<"m-feet";
    gotoxy(x1,28);
    cout<<"feet-m";
    gotoxy(x1,29);
    cout<<"inch-m";
    gotoxy(x1,30);
    cout<<"m-inch";
    gotoxy(x1,31);
    cout<<"yard-m";
    gotoxy(x1,32);
    cout<<"m-yard";

    gotoxy(79,y1);
    char ch=_getch();
     while(ch!=8 && ch!=13)
  {
      ch=_getch();
      switch(ch)
      {
          case 72:if(y1==17)
                     break;
                else
                {
                    y1--;
                    gotoxy(79,y1);
                    break;
                }

         case 80:if(y1==32)
                    break;
                 else
                    {
                        y1++;
                        gotoxy(79,y1);
                        break;
                    }
      }
  }
if(ch==8)
   {
     mainmenu();
   }
length l1;
switch(y1)
{
    case 17:l1.mm_m();
            break;
    case 18:l1.m_mm();break;
    case 19:l1.cm_m();break;
    case 20:l1.m_cm();break;
    case 21:l1.cm_km();break;
    case 22:l1.km_cm();break;
    case 23:l1.m_mile();break;
    case 24:l1.mile_m();break;
    case 25:l1.km_mile();break;
    case 26:l1.mile_km();break;
    case 27:l1.m_feet();break;
    case 28:l1.feet_m();break;
    case 29:l1.inch_m();break;
    case 30:l1.m_inch();break;
    case 31:l1.yard_m();break;
}
}

void temparature()
 {
     symbol();
     int x=77;int y=15;
    char c=219,d=219;
    for(int i=0;i<12;i++)
    {
        gotoxy(x,y);
        cout<<c;
        x++;
    }
    for(int i=0;i<7;i++)
    {
        gotoxy(x,y);
        cout<<d;
        y++;
    }
    for(int i=0;i<12;i++)
    {
        gotoxy(x,y);
        cout<<c;
        x--;
    }
    for(int i=0;i<7;i++)
    {
        gotoxy(x,y);
        cout<<d;
        y--;
    }
    int x1=80,y1=17;
    gotoxy(x1,y1);
    cout<<"cel-f";
    gotoxy(x1,18);
    cout<<"f-cel";
    gotoxy(x1,19);
    cout<<"cel-k";
    gotoxy(x1,20);
    cout<<"k-cel";
    /*gotoxy(x1,21);
    cout<<"f-k";
    gotoxy(x1,22);
    cout<<"k-f";*/


    gotoxy(79,y1);
    char ch=_getch();
     while(ch!=8 && ch!=13)
  {
      ch=_getch();
      switch(ch)
      {
          case 72:if(y1==17)
                     break;
                else
                {
                    y1--;
                    gotoxy(79,y1);
                    break;
                }

         case 80:if(y1==22)
                    break;
                 else
                    {
                        y1++;
                        gotoxy(79,y1);
                        break;
                    }
      }
  }
if(ch==8)
   {
     mainmenu();
   }
temp t1;
switch(y1)
{


    case 17:t1.cel_f();break;
    case 18:t1.f_cel();break;
    case 19:t1.cel_k();break;
    case 20:t1.k_cel();break;
   // case 21:t1.f_k();break;
    //case 22:t1.k_f();break;

}
}

void length ::mm_m()
{
        system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"Millimeter= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"Meter= "<<i*.001;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
}
void area1()
 {
     symbol();
     int x=77;int y=15;
    char c=219,d=219;
    for(int i=0;i<14;i++)
    {
        gotoxy(x,y);
        cout<<c;
        x++;
    }
    for(int i=0;i<19;i++)
    {
        gotoxy(x,y);
        cout<<d;
        y++;
    }
    for(int i=0;i<14;i++)
    {
        gotoxy(x,y);
        cout<<c;
        x--;
    }
    for(int i=0;i<19;i++)
    {
        gotoxy(x,y);
        cout<<d;
        y--;
    }
    int x1=80,y1=17;
    gotoxy(x1,y1);
    cout<<"mmSq-cmSq";
    gotoxy(x1,18);
    cout<<"cmSq-mmSq";
    gotoxy(x1,19);
    cout<<"cmSq-mSq";
    gotoxy(x1,20);
    cout<<"mSq-cmSq";
    gotoxy(x1,21);
     cout<<"mSq-kmSq";
    gotoxy(x1,22);
    cout<<"kmSq-mSq";
    gotoxy(x1,23);
    cout<<"feetSq-mSq";
    gotoxy(x1,24);
    cout<<"mSq-feetSq";
    gotoxy(x1,25);
    cout<<"yardSq-mSq";
    gotoxy(x1,26);
    cout<<"mSq-yardSq";
    gotoxy(x1,27);
    cout<<"mileSq-kmSq";
    gotoxy(x1,28);
    cout<<"kmSq-mileSq";
    gotoxy(x1,29);
    cout<<"arc-kmSq";
    gotoxy(x1,30);
    cout<<"kmSq-arc";
    gotoxy(x1,31);
    cout<<"arc-hect";
    gotoxy(x1,32);
    cout<<"hect-arc";

    gotoxy(79,y1);
    char ch=_getch();
     while(ch!=8 && ch!=13)
  {
      ch=_getch();
      switch(ch)
      {
          case 72:if(y1==17)
                     break;
                else
                {
                    y1--;
                    gotoxy(79,y1);
                    break;
                }

         case 80:if(y1==32)
                    break;
                 else
                    {
                        y1++;
                        gotoxy(79,y1);
                        break;
                    }
      }
  }
if(ch==8)
   {
     mainmenu();
   }
area a1;
switch(y1)
{
    case 17:a1.mmSq_cmSq();
            break;
    case 18:a1.cmSq_mmSq();break;
    case 19:a1.cmSq_mSq ();break;
    case 20:a1.mSq_cmSq ();break;
    case 21:a1.mSq_kmSq ();break;
    case 22:a1.kmSq_mSq ();break;
    case 23:a1.feetSq_mSq();break;
    case 24:a1.mSq_feetSq();break;
    case 25:a1.yardSq_mSq();break;
    case 26:a1.mSq_yardSq();break;
    case 27:a1.mileSq_kmSq();break;
    case 28:a1.kmSq_mileSq();break;
    case 29:a1.acre_kmSq();break;
    case 30:a1.kmSq_acre();break;
    case 31:a1.acre_hect();break;
    case 32:a1.hect_acre();break;
}
}
void weight1()
 {
     symbol();
     int x=77;int y=15;
    char c=219,d=219;
    for(int i=0;i<12;i++)
    {
        gotoxy(x,y);
        cout<<c;
        x++;
    }
    for(int i=0;i<13;i++)
    {
        gotoxy(x,y);
        cout<<d;
        y++;
    }
    for(int i=0;i<12;i++)
    {
        gotoxy(x,y);
        cout<<c;
        x--;
    }
    for(int i=0;i<13;i++)
    {
        gotoxy(x,y);
        cout<<d;
        y--;
    }
    int x1=80,y1=17;
    gotoxy(x1,y1);
    cout<<"miligm-gm";
    gotoxy(x1,18);
    cout<<"gm-miligm";
    gotoxy(x1,19);
    cout<<"gm-kg";
    gotoxy(x1,20);
    cout<<"kg-gm";
    gotoxy(x1,21);
     cout<<"kg-mton";
    gotoxy(x1,22);
    cout<<"mton-kg";
    gotoxy(x1,23);
    cout<<"pound-kg";
    gotoxy(x1,24);
    cout<<"kg-pound";
    gotoxy(x1,25);
    cout<<"gm-pound";
    gotoxy(x1,26);
    cout<<"pound-gm";

    gotoxy(79,y1);
    char ch=_getch();
     while(ch!=8 && ch!=13)
  {
      ch=_getch();
      switch(ch)
      {
          case 72:if(y1==17)
                     break;
                else
                {
                    y1--;
                    gotoxy(79,y1);
                    break;
                }

         case 80:if(y1==26)
                    break;
                 else
                    {
                        y1++;
                        gotoxy(79,y1);
                        break;
                    }
      }
  }
if(ch==8)
   {
     mainmenu();
   }
weight w1;
switch(y1)
{
    case 17:w1.milligm_gm();
            break;
    case 18:w1.gm_milligm();break;
    case 19:w1.gm_kg();break;
    case 20:w1.kg_gm();break;
    case 21:w1.kg_mton();break;
    case 22:w1. mton_kg ();break;
    case 23:w1.pound_kg();break;
    case 24:w1.kg_pound();break;
    case 25:w1.gm_pound();break;
    case 26:w1.pound_gm();break;

}
}
 void vol1()
 {
     symbol();
     int x=77;int y=15;
    char c=219,d=219;
    for(int i=0;i<12;i++)
    {
        gotoxy(x,y);
        cout<<c;
        x++;
    }
    for(int i=0;i<16;i++)
    {
        gotoxy(x,y);
        cout<<d;
        y++;
    }
    for(int i=0;i<12;i++)
    {
        gotoxy(x,y);
        cout<<c;
        x--;
    }
    for(int i=0;i<16;i++)
    {
        gotoxy(x,y);
        cout<<d;
        y--;
    }
    int x1=80,y1=17;
    gotoxy(x1,y1);
    cout<<"ml-L";
    gotoxy(x1,18);
    cout<<"L-ml";
    gotoxy(x1,19);
    cout<<"mmq-cmq";
    gotoxy(x1,20);
    cout<<"cmq-mmq";
    gotoxy(x1,21);
    cout<<"cmq-mq";
    gotoxy(x1,22);
    cout<<"mq-cmq";
    gotoxy(x1,23);
    cout<<"inchq-mq";
    gotoxy(x1,24);
    cout<<"mq-inchq";
    gotoxy(x1,25);
    cout<<"feetq-mq";
    gotoxy(x1,26);
    cout<<"mq-feetq";
    gotoxy(x1,27);
    cout<<"mq-gallon";
    gotoxy(x1,28);
    cout<<"gallon-mq";
    gotoxy(x1,29);
    cout<<"L-gallon";
    gotoxy(x1,30);
    cout<<"gallon-L";

    gotoxy(79,y1);
    char ch=_getch();
     while(ch!=8 && ch!=13)
  {
      ch=_getch();
      switch(ch)
      {
          case 72:if(y1==17)
                     break;
                else
                {
                    y1--;
                    gotoxy(79,y1);
                    break;
                }

         case 80:if(y1==30)
                    break;
                 else
                    {
                        y1++;
                        gotoxy(79,y1);
                        break;
                    }
      }
  }
if(ch==8)
   {
     mainmenu();
   }
vol v1;
switch(y1)
{
    case 17:v1.mL_L();
            break;
    case 18:v1. L_mL();break;
    case 19:v1.mmQ_cmQ();break;
    case 20:v1.cmQ_mmQ();break;
    case 21:v1.cmQ_mQ ();break;
    case 22:v1. mQ_cmQ ();break;
    case 23:v1.inchQ_mQ();break;
    case 24:v1.mQ_inchQ();break;
    case 25:v1.feetQ_mQ();break;
    case 26:v1.mQ_feetQ();break;
    case 27:v1.mQ_gallon();break;
    case 28:v1.gallon_mQ();break;
    case 29:v1.L_gallon();break;
    case 30:v1.gallon_L();break;

}
}



void length ::m_mm()
{

        system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"Meter= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"milimeter= "<<i*1000;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
}
     void length ::cm_m()
         {
               system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"centimeter= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"meter= "<<i*.01;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }

          }
    void length ::m_cm()
        {
           system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"Meter= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"centimeter= "<<i*100;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
         }
    void length::m_mile()
         {
          system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"Meter= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"mile= "<<i*0.00062;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
         }
    void length::mile_m()
        {
         system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"Mile= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"meter= "<<i*1609.344;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }
     void length :: cm_km()
        {
           system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"centimeter= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"kilometer= "<<i*.00001;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }

        }

    void length :: km_cm()
        {    system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"kilometer= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"centimeter= "<<i*100000;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }
    void length::feet_m()
        {
          system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"feet= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"meter= "<<i*0.3048;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }
    void length::m_feet()
        {
         system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"Meter= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"feet= "<<i*3.28084;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }
    void length::yard_m()
        {
         system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"yard= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"meter= "<<i*0.9144;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }
    void length::m_yard()
        {
         system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"Meter= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"yard= "<<i*1.09361;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }
    void length::inch_m()
        {
         system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"inch= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"meter= "<<i*0.254;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }
    void length::m_inch()
        {
          system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"Meter= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"inch= "<<i*39.37008;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }
    void length ::km_mile()
        {
        system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"kilometer= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"mile= "<<i*.6213712;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }
    void length ::mile_km( )
        {
        system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"Mile= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"kilometer= "<<i*1.60934;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }



    void temp::cel_f()
       {
        system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"celsius= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"fahrenheit= "<<(((9*i)/5)+32);
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
       }
    void temp::f_cel()
       {
     system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"fahrenheit= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"celsius= "<<(((i-32)/9)*5);
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }
    void temp::cel_k()
        {
       system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"celsius= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"kelvin= "<<i+273;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }
    void temp::k_cel()
        {
         system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"kelvin= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"celsius= "<<i-273;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }




    void weight::milligm_gm()
        {
        system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"miligram= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"gram= "<<i*.001;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }
    void weight::gm_milligm()
        {
         system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"gram= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"miligram= "<<i*1000;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }
    void weight::pound_kg()
       {
        system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"pound= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"kilogram= "<<i*45359;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
       }
     void weight::gm_kg()
        {  system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"gram= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"kilogram= "<<i*.001;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
         }
     void weight::kg_gm()
    {     system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"kilogram= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"gram= "<<i*1000;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }


    void weight::kg_pound()
      {
      system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"kilogram= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"pound= "<<2.20462*i;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
      }
    void weight::gm_pound()
      {
      system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"gram= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"pound= "<<i*.0022;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
      }
    void weight::pound_gm()
      {
      system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"pound= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"gram= "<<i*453.59237;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
      }
    void weight::kg_mton()
      {
       system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"kilogram= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"metric-ton= "<<i*.001;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
       }
    void weight::mton_kg()
      {
           system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"metric-ton= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"kilogram= "<<i*.1000;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
      }


    void area::mmSq_cmSq()
        {
         system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"square mm= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"square cm= "<<i*.01;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }
    void area::cmSq_mmSq()
        {
        system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"square cm= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"square mm= "<<i*100;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }
    void area::cmSq_mSq()
        {
        system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"square centimeter= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"square meter= "<<i*.0001;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }
    void area::mSq_cmSq()
        {
         system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"square meter= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"square centimeter= "<<i*1000;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }
    void area::mSq_kmSq()
        {
         system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"square meter= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"square kilometer= "<<i*.000001;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }
    void area::kmSq_mSq()
        {
         system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"square kilometer= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"square meter= "<<i*100000;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }
    void area::feetSq_mSq()
      {
       system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"square feet= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"square meter= "<<i*0.929;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
      }
    void area::mSq_feetSq()
      {
     system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"square meter= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"square feet= "<<i*10.76391;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
      }
    void area::yardSq_mSq()
      {
     system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"squre yard= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"square meter= "<<i*.83613;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
      }
     void area::mSq_yardSq()
       {
         system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"square meter= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"square yard= "<<i*1.19599;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
       }
     void area::mileSq_kmSq()
        {
         system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"square mile= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"square kilometer= "<<i*2.5899;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }
     void area::kmSq_mileSq()
        {
         system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"square kilometer= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"square mile= "<<i*.3861;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }
     void area::acre_hect()
        {
        system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"acre= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"hector= "<<i*.40469;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }
     void area::hect_acre()
        {
         system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"hector= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"acre= "<<i*2.47105;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }
      void area::acre_kmSq()
         { system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"arce= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"sqare kilometer= "<<i*.00405;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
         }
      void area::kmSq_acre()
      {
        system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"sqare kilometer= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"arc= "<<i*247.10538;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }

      }

     void vol::mL_L()
         {
        system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"mili litre= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"litre= "<<i*.001;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
         }
      void vol::L_mL()
         { system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"Litre= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"Milli litre= "<<i*1000;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
         }
     void vol::cmQ_mmQ()
         {
         system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"cubic cm= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"cubic mm= "<<i*1000;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
          }
     void vol::mmQ_cmQ()
         {
       system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"cubic mm= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"cubic cm= "<<i*.001;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
         }
     void vol::cmQ_mQ()
        {
    system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"cubic cm= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"cubic meter= "<<i*.000001;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }
     void vol::mQ_cmQ()
        {
     system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"cubic meter= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"cubic cm= "<<i*1000000;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }
     void vol::inchQ_mQ()
       {
      system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"cubic inch= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"cubic meter= "<<i*.00002;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
       }
     void vol::mQ_inchQ()
       {
system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"cubic meter= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"cubic inch= "<<i*61023.74409;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
       }
     void vol::feetQ_mQ()
      {
      system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"cubic feet= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"cubic meter= "<<i*1222;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
      }
     void vol::mQ_feetQ()
       {
      system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"cubic meter= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"cubic feet= "<<i*123;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
       }
     void vol::mQ_gallon()
       {
    system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"cubic meter= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"gallon= "<<i*264.17205;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
       }
     void vol::gallon_mQ()
       {
      system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"cubic meter= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"gallon= "<<i*.00379;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
       }
     void vol::L_gallon()
        {
       system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"Litre= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"gallon= "<<i*.21997;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }
    void vol::gallon_L()
        {
        system("cls");
        //gotoxy(70,20);
        gotoxy(73,23);\
        int x=79,y=23;
        char c=205,d=186,e=188,f=187,g=201,h=200;
          for(int i=0;i<9;i++)
            {
                x++;
                gotoxy(x,y);
                cout<<c;
            }
            x++;
            gotoxy(x,y);
            cout<<f;
         for(int i=0;i<1;i++)
            {
                y++;
                gotoxy(x,y);
                cout<<d;
            }
            y++;
            gotoxy(x,y);
            cout<<e;
        for(int i=0;i<9;i++)
        {
            x--;
            gotoxy(x,y);
            cout<<c;
        }
        x--;
        gotoxy(x,y);
        cout<<h;
        for(int i=0;i<1;i++)
        {
            y--;
            gotoxy(x,y);
            cout<<d;
        }
        y--;
        gotoxy(x,y);
        cout<<g;
        gotoxy(80,24);
        cout<<"Convert";
        gotoxy(75,20);
        cout<<"gallon= ";
        cin>>i;
        gotoxy(80,24);
         char ch=_getch();
         while(ch!=13)
         {
             ch=_getch();
         }
         if(ch==13)
            {
                gotoxy(75,28);
                cout<<"litre= "<<i*4.54609;
            }
        gotoxy(90,28);
        char ch1=_getch();
        while(ch1!=8)
        {
            ch1=_getch();
        }
        if(ch1==8)
        {
            mainmenu();
        }
        }
void symbol()
{
    system("cls");
    gotoxy(70,10);
    char c=177;
    int x=70,y=5;
    for(int i=0;i<30;i++)
            {
                gotoxy(x,y);
                x++;
                cout<<c;
            }
    for(int i=0;i<4;i++)
        {
            gotoxy(x,y);
            y++;
            cout<<c;
        }
    for(int i=0;i<30;i++)
            {
                gotoxy(x,y);
                x--;
                cout<<c;
            }
    for(int i=0;i<4;i++)
        {
            gotoxy(x,y);
            y--;
            cout<<c;
        }
        gotoxy(72,7);
        cout<<"Welcome to unit conversion";
}
void mainmenu()
{
    symbol();
    int x=77;int y=15;
    char c=219,d=219;
    for(int i=0;i<15;i++)
    {
        gotoxy(x,y);
        cout<<c;
        x++;
    }
    for(int i=0;i<8;i++)
    {
        gotoxy(x,y);
        cout<<d;
        y++;
    }
    for(int i=0;i<15;i++)
    {
        gotoxy(x,y);
        cout<<c;
        x--;
    }
    for(int i=0;i<8;i++)
    {
        gotoxy(x,y);
        cout<<d;
        y--;
    }
  int x1=80,y1=17;
  gotoxy(x1,y1);
  cout<<"Length";
  gotoxy(x1,18);
  cout<<"Temparature";
  gotoxy(x1,19);
  cout<<"Weight";
  gotoxy(x1,20);
  cout<<"Area";
  gotoxy(x1,21);
  cout<<"Volume";

  gotoxy(79,y1);
  char ch=_getch();
  while(ch!=8 && ch!=13)
  {
      ch=_getch();
      switch(ch)
      {
          case 72:if(y1==17)
                     break;
                else
                {
                    y1--;
                    gotoxy(79,y1);
                    break;
                }

         case 80:if(y1==21)
                    break;
                 else
                    {
                        y1++;
                        gotoxy(79,y1);
                        break;
                    }
      }
  }
if(ch==8)
    exit();
switch(y1)
{
    case 17:Length();
            break;
    case 18:temparature();break;
    case 19:weight1();break;
    case 20:area1();break;
    case 21:vol1();break;
}
}

int main()
{
    mainmenu();
}


int Xnum;
int XHp ;
int XDoor;
int XGem;
int XnextGem;
int roll;
int XFreze;
int Xstart = 1 ;

int BossA;
int BossB;
int BossC;
int BossD;
int XShield;

void setup(){
Serial.begin(9600);
}

void loop(){
    
if (Xnum<41) {
        if(Xnum==1||Xnum==11||Xnum==21||Xnum==31)
        {
            //เก็บหิน
            XDoor = XDoor+XGem ;
            XGem  = 0 ;
        }
        else if(Xnum==2||Xnum==12||Xnum==22||Xnum==32)
        {
            //เสียหิน
            if(XGem>0)
            {
                XGem = XGem - 1 ;
                //next
            }
            else 
            {
                //next
            }
        }
        else if(Xnum==3||Xnum==9||Xnum==13||Xnum==19||Xnum==23||Xnum==29||Xnum==33||Xnum==39)
        {
            //ได้หิน
            XGem = XGem + 1 ;
            //next
        }
        else if(Xnum==4||Xnum==8||Xnum==14||Xnum==18||Xnum==24||Xnum==28||Xnum==34||Xnum==38)
        {
            //สุ่มสกิล
            //กดปุ่ม
            roll = random(1,6);
            if(roll == 1)
            {
                XFreze = (XFreze * 0) - 1 ;
                //next
            }
            else if (roll == 2)
            {
                XHp = XHp - 2 ;
                //next
            }
            else if (roll == 3)
            {
                if(Xnum == 4||Xnum == 14||Xnum == 24||Xnum == 34)
                {
                    XGem = XGem + 1 ;
                    if(Xnum == 4)
                    {
                        Xnum = 3 ;
                        //next
                    }
                    else if(Xnum == 14)
                    {
                        Xnum = 13 ;
                        //next
                    }
                    else if(Xnum == 24)
                    {
                        Xnum = 23 ;
                        //next
                    }
                    else if(Xnum == 34)
                    {
                        Xnum = 33 ;
                        //next
                    }
                }
                else if(Xnum == 8||Xnum == 18)
                {
                    XHp = XHp + 1 ;
                    if(Xnum = 8)
                    {
                        Xnum = 7 ;
                        //next
                    }
                    else if(Xnum = 18)
                    {
                        Xnum = 17 ;
                        //next
                    }
                }
                else if(Xnum == 28||Xnum == 38)
                {
                    XHp = XHp - 1 ;
                    if(Xnum == 28)
                    {
                        Xnum = 27 ;
                        //next
                    }
                else if(Xnum == 38)
                    {
                        Xnum = 37 ;
                        //next
                    }
                }
                
            }
            else if (roll == 4)
            {
                XShield = 1 ;
                //next
            }
            else if (roll == 5)
            {
                //next
            }
            else if (roll == 6)
            {
                if(Xnum == 4||Xnum == 8)
                {
                    if(BossA == 1)
                    {
                        BossA = 0 ;
                        XGem = XGem + 1 ;
                        Xnum = Xstart ;
                        XDoor = XDoor + XGem ;
                        XGem = 0 ;
                        //next
                    }
                    else
                    {
                        //next
                    }
                }
                if(Xnum == 14||Xnum == 18)
                {
                    if(BossB == 1)
                    {
                        BossB = 0 ;
                        XGem = XGem + 1 ;
                        Xnum = Xstart ;
                        XDoor = XDoor + XGem ;
                        XGem = 0 ;
                        //next
                    }
                    else
                    {
                        //next
                    }
                }
                if(Xnum == 24||Xnum == 28)
                {
                    if(BossC == 1)
                    {
                        BossC = 0 ;
                        XGem = XGem + 1 ;
                        Xnum = Xstart ;
                        XDoor = XDoor + XGem ;
                        XGem = 0 ;
                        //next
                    }
                    else
                    {
                        //next
                    }
                }
                if(Xnum == 34||Xnum == 38)
                {
                    if(BossD == 1)
                    {
                        BossD = 0 ;
                        XGem = XGem + 1 ;
                        Xnum = Xstart ;
                        XDoor = XDoor + XGem ;
                        XGem = 0 ;
                        //next
                    }
                    else
                    {
                        //next
                    }
                }
            }
        }
        else if(Xnum==5||Xnum==15||Xnum==27||Xnum==37)
        {
            //เสียเลือด 1
            XHp = XHp - 1 ;
            //next
        }
        else if(Xnum==6||Xnum==16||Xnum==26||Xnum==36)
        {
            //ขโมย
            if (XnextGem>0)
            {
            XnextGem = XnextGem - 1 ;
            XGem = XGem + 1 ;
            //next 
            }
            else {
            //next
            }
        }
        else if(Xnum==7||Xnum==17||Xnum==25||Xnum==35)
        {
            //ฮิล
            XHp = XHp + 1 ;
            //next
        }
        else if(Xnum==10||Xnum==20||Xnum==30||Xnum==40)
        {
            //บอส
            if (Xnum == 10) 
            {
                if(BossA == 1)
                {
                    if(XShield == 1)
                    {
                        XShield = 0 ;
                        //next
                    }
                    else
                    {
                        XHp = XHp - 3 ;
                        //next
                    }
                }
            }
            else if (Xnum == 20) 
            {
                if(BossB == 1)
                {
                    if(XShield == 1)
                    {
                        XShield = 0 ;
                        //next
                    }
                    else
                    {
                        XHp = XHp - 3 ;
                        //next
                    }
                }
            }
            else if (Xnum == 30) 
            {
                if(BossC == 1)
                {
                    if(XShield == 1)
                    {
                        XShield = 0 ;
                        //next
                    }
                    else
                    {
                        XHp = XHp - 3 ;
                        //next
                    }
                }
            }
            else if (Xnum == 40) 
            {
                if(BossD == 1)
                {
                    if(XShield == 1)
                    {
                        XShield = 0 ;
                        //next
                    }
                    else
                    {
                        XHp = XHp - 3 ;
                        //next
                    }
                }
            }

        }
    
}

    
}

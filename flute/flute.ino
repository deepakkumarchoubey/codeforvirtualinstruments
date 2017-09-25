  int datlring,datlmiddle,datlindex,datrring,datrmiddle,datrindex,datatouch,datablow;
int deg;
void setup(){
  Serial.begin(9600);
  
}
void loop()
{
//A0-left hand ring finger   
datlring = int(analogRead(A0));
//A1-left hand middle finger
datlmiddle = int(analogRead(A1));//correct
//A2-left hand index finger
datlindex = int(analogRead(A0));//A0
//A3-right hand ringfinger 
datrring = int(analogRead(A6));//correct
//A4-right hand middlefinger 
datrmiddle = int(analogRead(A6));//A6 whereas it was marked as A5
//A5-right hand index finger 
datrindex = int(analogRead(A3));//A3 whereas it was marked as A4
datatouch =int(analogRead(A3));
datablow=analogRead(A7);

//Serial.printlnln(data);
//bool highpitch=(datatouch>300);
//bool lowpitch=(datatouch<300);

//bool blow = (int(datablow)>600);


//bool lringclosed=(datlring<=600);
//bool lringhalfclosed=(datlring>600)  &&  (datlring<=635);
//bool lringopen=(datlring>635);
//Serial.println(datlring);// 670 close and random value for open position

bool lmiddleclosed=(datlmiddle<=580);
//bool lmiddlehalfclosed=(datlmiddle>600)  &&  (datlmiddle<=625);
bool lmiddleopen=(datlmiddle>580);
//Serial.println(datlmiddle);//(500 to 580)(580 to 650)working

bool lindexclosed=(datlindex>=660);
//bool lindexhalfclosed=(datlindex>620)  &&  (datlindex<=715);
bool lindexopen=(datlindex<660);
//Serial.println(datlindex);//working fine     

/*bool rringclosed=(datrring<=600);
bool rringhalfclosed=(datrring>600)  &&  (datrring<=650);
bool rringopen=(datrring>650);
Serial.println(datrring);//no sensor*/ 

bool rmiddleclosed=(datrmiddle<=550);
//bool rmiddlehalfclosed=(datrmiddle>595)  &&  (datrmiddle<=625);
bool rmiddleopen=(datrmiddle>550);
//Serial.println(datrmiddle);//working awesome490 to 580    580 to 650

bool rindexclosed=(datrindex<=540);
bool rindexopen=(datrindex>540);
//Serial.println(datrindex);//awesome440  540    650

//Serial.print(datatouch);
//for calibration
/*Serial.print(datlring);
Serial.print("\t");
Serial.print(datlmiddle);
Serial.print("\t");
Serial.print(datlindex);
Serial.print("\t");
Serial.print(datrring);
Serial.print("\t");
Serial.print(datrmiddle);
Serial.print("\t");
Serial.print(datrindex);
Serial.print("\t");
Serial.print(datatouch);
//Serial.print(datablow);
//Serial.print("\n");

/*if(lringclosed)
{
Serial.print("lringclosed");
Serial.print("\t");
}
if(lmiddleclosed)
{Serial.print("lmiddleclosed");
Serial.print("\t");
}
if(lindexclosed)
{Serial.print("lindexclosed");
Serial.print("\t");
}
if(rringclosed)
{Serial.print("rringclosed");
Serial.print("\t");
}
if(rmiddleclosed)
{Serial.print("rmiddleclosed");
Serial.print("\t");
}
if(rindexclosed)
{Serial.print("rindexclosed");
Serial.print("\t");


}if(lringhalfclosed)
{Serial.print("lringhalfclosed");
Serial.print("\t");
}if(lmiddlehalfclosed)
{Serial.print("lmiddlehalfclosed");
Serial.print("\t");
}if(lindexhalfclosed)
{Serial.print("lindexhalfclosed");
Serial.print("\t");
}if(rringhalfclosed)
{Serial.print("rringhalfclosed");
Serial.print("\t");
}if(rmiddlehalfclosed)
{Serial.print("rmiddlehalfclosed");
Serial.print("\t");
}

if(lringopen)
{
  Serial.print("lringopen");
Serial.print("\t");
}
if(lmiddleopen)
{
  Serial.print("lmiddleopen");
Serial.print("\t");
}
if(lindexopen)
{
  Serial.print("lindexopen");
Serial.print("\t");
}
if(rringopen)
{
  Serial.print("rringopen");
Serial.print("\t");
}
if(rmiddleopen)
{
Serial.print("rmiddleopen");
Serial.print("\t");
}
if(rindexopen)
{Serial.print("rindexopen");
Serial.print("\t");
}

if(highpitch)
Serial.print("highpitch");
else
Serial.print("lowpitch");
Serial.print("\n");*/

//if(datablow)
//{
if(  lmiddleclosed  &&  lindexclosed     &&  rmiddleopen  &&  rindexopen  )// && blow)
Serial.println("a");//SA  CCOO

//else if(lindexclosed  &&  lmiddleclosed  &&  rmiddleopen  &&  rindexopen )// && blow)
//Serial.print("b ");//Re CCOO

else if(lindexclosed  &&  lmiddleopen  &&  rmiddleopen  &&  rindexopen  )// && blow)
Serial.println("c ");//ga   COOO

else if(lindexopen  &&  lmiddleopen  &&    rmiddleopen  &&  rindexopen  )// && blow)
Serial.println("B ");//ma  OOOO

else if(lindexclosed  &&  lmiddleclosed  &&    rmiddleclosed  &&  rindexclosed)// && blow)
Serial.println("D");//pa   CCCC

else if(lindexclosed  &&  lmiddleclosed    &&  rmiddleopen  &&  rindexclosed )// && blow)
Serial.println("f ");//dha   CCCO
//else if(  lmiddleclosed  &&  lindexclosed   &&  rmiddleopen  &&  rindexopen  )//&& blow)
//Serial.print("g ");//nee   CCOO

else if( lmiddleopen &&  lindexopen &&   rmiddleclosed  &&  rindexclosed )// && blow)
Serial.println("h ");//saa   OOCC

/*else if(lringclosed  &&  lmiddleclosed  &&  lindexclosed  &&  rringhalfclosed  &&  rmiddleclosed  &&  rindexclosed && highpitch)// && blow)
Serial.print("i ");//D1

else if(lringclosed  &&  lmiddleclosed  &&  lindexclosed  &&  rringopen  &&  rmiddleclosed  &&  rindexclosed && highpitch)// && blow)
Serial.print("j ");//D2/N1

else if(lringclosed  &&  lmiddleclosed  &&  lindexclosed  &&  rindexclosed  &&  rmiddlehalfclosed  &&  rringopen && highpitch)// && blow)
Serial.print("k ");//N2/D3

else if(lringclosed  &&  lmiddleclosed  &&  lindexclosed  &&  rringopen  &&  rmiddleopen  &&  rindexclosed && highpitch)// && blow)
Serial.print("l ");//N3




//low pitch



else if(lringclosed  &&  lmiddleclosed  &&  lindexclosed  &&  rringopen  &&  rmiddleopen  &&  rindexopen && lowpitch)
Serial.print("m ");//S

else if(lindexclosed  &&  lmiddleclosed  &&  lringhalfclosed  &&  rringopen  &&  rmiddleopen  &&  rindexopen && lowpitch)
Serial.print("n ");//R1

else if(lindexclosed  &&  lmiddleclosed  &&  lringopen  &&  rringopen  &&  rmiddleopen  &&  rindexopen && lowpitch)
Serial.print("o ");//R2/G1

else if(lindexclosed  &&  lmiddlehalfclosed  &&  lringopen  &&  rringopen  &&  rmiddleopen  &&  rindexopen && lowpitch)
Serial.print("p ");//G2/R3

else if(lindexclosed  &&  lmiddleopen  &&  lringopen  &&  rringopen  &&  rmiddleopen  &&  rindexopen && lowpitch)
Serial.print("q ");//G3

else if(lindexhalfclosed  &&  lmiddleopen  &&  lringopen  &&  rringopen  &&  rmiddleopen  &&  rindexopen && lowpitch)
Serial.print("r ");//M1

else if(lringopen  &&  lmiddleopen  &&  lindexopen  &&  rringopen  &&  rmiddleopen  &&  rindexopen && lowpitch)
Serial.print("s ");//M2

else if(lringclosed  &&  lmiddleclosed  &&  lindexclosed  &&  rringclosed  &&  rmiddleclosed  &&  rindexclosed && lowpitch)
Serial.print("t ");//P

else if(lringclosed  &&  lmiddleclosed  &&  lindexclosed  &&  rringhalfclosed  &&  rmiddleclosed  &&  rindexclosed && lowpitch)
Serial.print("u ");//D1

else if(lringclosed  &&  lmiddleclosed  &&  lindexclosed  &&  rringopen  &&  rmiddleclosed  &&  rindexclosed && lowpitch)
Serial.print("v ");//D2/N1

else if(lringclosed  &&  lmiddleclosed  &&  lindexclosed  &&  rindexclosed  &&  rmiddlehalfclosed  &&  rringopen && lowpitch)
Serial.print("w ");//N2/D3

else if(lringclosed  &&  lmiddleclosed  &&  lindexclosed  &&  rringopen  &&  rmiddleopen  &&  rindexclosed && lowpitch )
Serial.print("x ");//N3
else
Serial.println("z");
//}
//else
//Serial.print("z ");



if(lringopen && rindexopen && lmiddleclosed && lindexclosed && rmiddleclosed && rringclosed && lowpitch)
Serial.print("a ");
else if(lringopen && rindexopen && lmiddleopen && lindexclosed && rmiddleclosed && rringclosed && lowpitch)
Serial.print("b ");
else if(lringopen && rindexopen && lmiddleopen && lindexopen && rmiddleclosed && rringclosed && lowpitch)
Serial.print("c ");
else if(lringclosed && rindexclosed && lmiddleclosed && lindexopen && rmiddleclosed && rringclosed && lowpitch)
Serial.print("d ");
else if(lringclosed && rindexclosed && lmiddleclosed && lindexclosed && rmiddleclosed && rringopen && lowpitch)
Serial.print("e ");
else if(lringclosed && rindexclosed && lmiddleclosed && lindexclosed && rmiddleopen && rringopen && lowpitch)
Serial.print("f ");
else if(lringclosed && rindexopen && lmiddleclosed && lindexclosed && rmiddleopen && rringopen && lowpitch)
Serial.print("g ");
else if(lringopen && rindexopen && lmiddleclosed && lindexclosed && rmiddleopen && rringopen && lowpitch)
Serial.print("h ");

else if(lringopen && rindexopen && lmiddleclosed && lindexclosed && rmiddleclosed && rringclosed && highpitch)
Serial.print("h ");
else if(lringopen && rindexopen && lmiddleopen && lindexclosed && rmiddleclosed && rringclosed && highpitch)
Serial.print("i ");
else if(lringopen && rindexopen && lmiddleopen && lindexopen && rmiddleclosed && rringclosed && highpitch)
Serial.print("j ");
else if(lringclosed && rindexclosed && lmiddleclosed && lindexopen && rmiddleclosed && rringclosed && highpitch)
Serial.print("k ");
else if(lringclosed && rindexclosed && lmiddleclosed && lindexclosed && rmiddleclosed && rringopen && highpitch)
Serial.print("l ");
else if(lringclosed && rindexclosed && lmiddleclosed && lindexclosed && rmiddleopen &&g rringopen && highpitch)
Serial.print("m ");
else if(lringclosed && rindexopen && lmiddleclosed && lindexclosed && rmiddleopen && rringopen && highpitch)
Serial.print("n ");
else
Serial.print("z ");

Serial.flush();*/
delay(100);

//pvalue1=datablow;
//pvalue2=pvalue1;
  
}



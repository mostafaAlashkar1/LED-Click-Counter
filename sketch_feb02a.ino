int RED=13;
int Yeiiow=12;
int Green=8;
int button=7;
int c=0;
void setup(){
  pinMode(RED,OUTPUT);
  pinMode(button,INPUT);
     pinMode(Yeiiow,OUTPUT);
   pinMode(Green,OUTPUT);
}

void loop(){
  if( digitalRead(button)==HIGH){
      c=c+1;//c++/c+=1
    if(c==1){
      digitalWrite(RED,HIGH);
  delay(1000);
    
    }
    if( digitalRead(button)==HIGH){
      c=c+1;//c++/c+=2
    if(c==2)
    {
    digitalWrite(Yeiiow,HIGH);
         delay(1000);
    }
      
       if( digitalRead(button)==HIGH){
      c=c+1;//c++/c+=3
    if(c==3){
    digitalWrite(Green,HIGH);
 delay(1000);
    }
         
   else{
       digitalWrite(RED,LOW);
      digitalWrite(Yeiiow,LOW);
      digitalWrite(Green,LOW);
     c=0;

    }
      delay(1000);
        
       }
       }
    }
    }

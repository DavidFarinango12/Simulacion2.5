/*
 * CAPITULO II:VISUALIZADORES
 * CODIGO 5:MANEJO DE DISPLAY 7 SEG ANODO COMN CON DEC 7447
 * OBJETIVO:REPRESENTAR LOS NUMEROS DEL 0 AL 9 EN UN DISPLAY
 * NOMBRE:RAFAEL FARINANGO
 */

 const int A=11; //bit menos significativo
 const int B=10;
 const int C=9;
 const int D=8; //bit mas significativo
 const int btn=13;
 int cont=0; 

void setup() {
  pinMode (A,OUTPUT);
  pinMode (B,OUTPUT);
  pinMode (C,OUTPUT);
  pinMode (D,OUTPUT);
  pinMode (btn,INPUT);
}

void loop() {
  if(digitalRead(btn)==LOW){
      delay(300);
      if(cont<9)
        cont++;
      else
        cont=0;
      }

  visualizar();
      
//  for(cont=0;cont<10;cont++){
//    delay(500);
//    switch(cont){
//      case 0:
//        digitalWrite(A,LOW);
//        digitalWrite(B,LOW);
//        digitalWrite(C,LOW);
//        digitalWrite(D,LOW);
//      break;
//      case 1:
//        digitalWrite(A,HIGH);
//        digitalWrite(B,LOW);
//        digitalWrite(C,LOW);
//        digitalWrite(D,LOW);
//      break;
//      case 2:
//        digitalWrite(A,LOW);
//        digitalWrite(B,HIGH);
//        digitalWrite(C,LOW);
//        digitalWrite(D,LOW);
//      break;
//      case 3:
//        digitalWrite(A,HIGH);
//        digitalWrite(B,HIGH);
//        digitalWrite(C,LOW);
//        digitalWrite(D,LOW);
//      break;
//      case 4:
//        digitalWrite(A,LOW);
//        digitalWrite(B,LOW);
//        digitalWrite(C,HIGH);
//        digitalWrite(D,LOW);
//      break;
//      case 5:
//        digitalWrite(A,HIGH);
//        digitalWrite(B,LOW);
//        digitalWrite(C,HIGH);
//        digitalWrite(D,LOW);
//      break;
//      case 6:
//        digitalWrite(A,LOW);
//        digitalWrite(B,HIGH);
//        digitalWrite(C,HIGH);
//        digitalWrite(D,LOW);
//      break;
//      case 7:
//        digitalWrite(A,HIGH);
//        digitalWrite(B,HIGH);
//        digitalWrite(C,HIGH);
//        digitalWrite(D,LOW);
//      break;
//      case 8:
//        digitalWrite(A,LOW);
//        digitalWrite(B,LOW);
//        digitalWrite(C,LOW);
//        digitalWrite(D,HIGH);
//      break;
//      case 9:
//        digitalWrite(A,HIGH);
//        digitalWrite(B,LOW);
//        digitalWrite(C,LOW);
//        digitalWrite(D,HIGH);
//      break;   
//      }
//    }
}

void visualizar(){
    switch(cont){
          case 0:
            digitalWrite(A,LOW);
            digitalWrite(B,LOW);
            digitalWrite(C,LOW);
            digitalWrite(D,LOW);
          break;
          case 1:
            digitalWrite(A,HIGH);
            digitalWrite(B,LOW);
            digitalWrite(C,LOW);
            digitalWrite(D,LOW);
          break;
          case 2:
            digitalWrite(A,LOW);
            digitalWrite(B,HIGH);
            digitalWrite(C,LOW);
            digitalWrite(D,LOW);
          break;
          case 3:
            digitalWrite(A,HIGH);
            digitalWrite(B,HIGH);
            digitalWrite(C,LOW);
            digitalWrite(D,LOW);
          break;
          case 4:
            digitalWrite(A,LOW);
            digitalWrite(B,LOW);
            digitalWrite(C,HIGH);
            digitalWrite(D,LOW);
          break;
          case 5:
            digitalWrite(A,HIGH);
            digitalWrite(B,LOW);
            digitalWrite(C,HIGH);
            digitalWrite(D,LOW);
          break;
          case 6:
            digitalWrite(A,LOW);
            digitalWrite(B,HIGH);
            digitalWrite(C,HIGH);
            digitalWrite(D,LOW);
          break;
          case 7:
            digitalWrite(A,HIGH);
            digitalWrite(B,HIGH);
            digitalWrite(C,HIGH);
            digitalWrite(D,LOW);
          break;
          case 8:
            digitalWrite(A,LOW);
            digitalWrite(B,LOW);
            digitalWrite(C,LOW);
            digitalWrite(D,HIGH);
          break;
          case 9:
            digitalWrite(A,HIGH);
            digitalWrite(B,LOW);
            digitalWrite(C,LOW);
            digitalWrite(D,HIGH);
          break;   
          }
  }

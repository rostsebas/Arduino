const int POS[]={22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46}; 
const int CICLOS=60;
const int TIEMPO=10;

void setup(){
  for(int i=0;i<=24;i++){
    pinMode(POS[i],OUTPUT);    
  }  
  for(int i=0;i<=24;i++){
    pinMode(POS[i],LOW);    
  }  
}

void punto(int lugar, int tiempo){
  digitalWrite(POS[lugar],HIGH);
  delay(tiempo); 
}

void lineaHorizontal(int i, int ancho, int tiempo){
  for (i; i<ancho; i++){
    digitalWrite(POS[i],HIGH);
  }
  delay(tiempo);
 // borrarTodo();
} 

void lineaVertical(int i, int alto,int tiempo){
  for (i; i<alto; i=i+5)
  {
    digitalWrite(POS[i],HIGH);
  }
  delay(tiempo);
  //borrarTodo();
}

void borrarTodo(){
  for(int i=0; i<25;i++){
      digitalWrite(POS[i],LOW);
    } 
}  

void A (){
  lineaHorizontal(1,4,TIEMPO);
  lineaHorizontal(10,15,TIEMPO);
  lineaVertical(5,21,TIEMPO);
  lineaVertical(9,25,TIEMPO);
}

void B (){
  lineaHorizontal(0,4,TIEMPO);
  lineaHorizontal(10,14,TIEMPO);
  lineaHorizontal(20,24,TIEMPO);
  lineaVertical(0,21,TIEMPO);
  punto(9,TIEMPO);
  punto(19,TIEMPO);  
}

void C (){
  lineaHorizontal(0,5,TIEMPO);
  lineaHorizontal(20,25,TIEMPO);
  lineaVertical(0,21,TIEMPO);
}

void D (){
  lineaHorizontal(0,4,TIEMPO);
  lineaHorizontal(20,24,TIEMPO);
  lineaVertical(9,20,TIEMPO);
  lineaVertical(0,21,TIEMPO);
}

void E (){
  lineaHorizontal(0,5,TIEMPO);
  lineaHorizontal(10,15,TIEMPO);
  lineaHorizontal(20,25,TIEMPO);
  lineaVertical(0,21,TIEMPO);
}

void eF (){
  lineaHorizontal(0,5,TIEMPO);
  lineaHorizontal(10,15,TIEMPO);
  lineaVertical(0,21,TIEMPO);
}

void G (){
  lineaHorizontal(0,5,TIEMPO);
  lineaHorizontal(12,15,TIEMPO);
  lineaHorizontal(20,25,TIEMPO);
  lineaVertical(0,21,TIEMPO);
  punto(19,TIEMPO);
}

void H (){
  lineaHorizontal(10,15,TIEMPO);
  lineaVertical(0,21,TIEMPO);
  lineaVertical(4,25,TIEMPO);
}

void I (){
  lineaHorizontal(0,5,TIEMPO);
  lineaHorizontal(20,25,TIEMPO);
  lineaVertical(2,23,TIEMPO);
}

void J (){
  lineaHorizontal(0,5,TIEMPO);
  lineaVertical(2,23,TIEMPO);
  lineaVertical(10,21,TIEMPO);
  punto(21,TIEMPO);
}

void K (){
  lineaVertical(0,21,TIEMPO);
  lineaHorizontal(10,13,TIEMPO);
  punto(8,TIEMPO);
  punto(4,TIEMPO);
  punto(18,TIEMPO);
  punto(24,TIEMPO);
}

void L (){
  lineaHorizontal(20,25,TIEMPO);
  lineaVertical(0,21,TIEMPO);
}

void M (){
  lineaVertical(0,21,TIEMPO);
  punto(6,TIEMPO);
  punto(12,TIEMPO);
  punto(8,TIEMPO);
  lineaVertical(4,25,TIEMPO);
}

void N (){
  lineaVertical(0,21,TIEMPO);
  punto(6,TIEMPO);
  punto(12,TIEMPO);
  punto(18,TIEMPO);
  lineaVertical(4,25,TIEMPO);
}

void O (){ 
  lineaHorizontal(1,4,TIEMPO);
  lineaHorizontal(21,24,TIEMPO);  
  lineaVertical(5,16,TIEMPO);
  lineaVertical(9,20,TIEMPO);
}

void P (){
  lineaVertical(0,21,TIEMPO);
  lineaHorizontal(0,4,TIEMPO);
  punto(9,TIEMPO);
  lineaHorizontal(10,14,TIEMPO); 
}

void Q (){
  lineaVertical(0,16,TIEMPO);
  lineaHorizontal(0,4,TIEMPO);
  lineaVertical(3,19,TIEMPO);
  lineaHorizontal(15,19,TIEMPO);
  punto(24,TIEMPO);
}

void R (){
  lineaHorizontal(0,4,TIEMPO);
  lineaHorizontal(10,14,TIEMPO);
  lineaVertical(0,21,TIEMPO);
  punto(9,TIEMPO);
  punto(18,TIEMPO);
  punto(24,TIEMPO);
}

void S (){
  lineaHorizontal(1,5,TIEMPO);
  punto(5,TIEMPO);
  lineaHorizontal(11,14,TIEMPO);
  punto(19,TIEMPO);
  lineaHorizontal(20,24,TIEMPO); 
}

void T (){
  lineaHorizontal(0,5,TIEMPO);
  lineaVertical(2,23,TIEMPO);
}

void U (){
  lineaVertical(0,21,TIEMPO); 
  lineaHorizontal(20,25,TIEMPO);
  lineaVertical(4,25,TIEMPO);
}

void V (){
  lineaVertical(0,11,TIEMPO);
  punto(16,TIEMPO);
  punto(22,TIEMPO);
  punto(18,TIEMPO);
  lineaVertical(4,15,TIEMPO);
}

void W (){
  lineaVertical(0,21,TIEMPO);
  punto(16,TIEMPO);
  punto(12,TIEMPO);
  punto(18,TIEMPO);
  lineaVertical(4,25,TIEMPO);
}

void X (){
  punto(0,TIEMPO);
  punto(6,TIEMPO);
  punto(12,TIEMPO);
  punto(18,TIEMPO);
  punto(24,TIEMPO);
  punto(4,TIEMPO);
  punto(8,TIEMPO);
  punto(16,TIEMPO);
  punto(20,TIEMPO);
}

void Y (){
  punto(0,TIEMPO);
  punto(6,TIEMPO);
  punto(12,TIEMPO);
  punto(4,TIEMPO);
  punto(8,TIEMPO);
  lineaVertical(12,23,TIEMPO);
}

void Z (){
  lineaHorizontal(0,5,TIEMPO);
  punto(8,TIEMPO);
  punto(12,TIEMPO);
  punto(16,TIEMPO);
  lineaHorizontal(20,25,TIEMPO); 
}

void a (){
  lineaHorizontal(1,3,TIEMPO);
  lineaHorizontal(21,23,TIEMPO);
  lineaVertical(5,20,TIEMPO);
  lineaVertical(4,25,TIEMPO);
  punto(8,TIEMPO);
  punto(18,TIEMPO);
}

void b (){
  lineaHorizontal(11,13,TIEMPO);
  lineaHorizontal(21,23,TIEMPO);
  lineaVertical(0,21,TIEMPO);
  punto(18,TIEMPO);
}

void c (){
  lineaHorizontal(5,9,TIEMPO);
  lineaHorizontal(20,24,TIEMPO);
  lineaVertical(5,20,TIEMPO);
}

void d (){
  lineaHorizontal(12,14,TIEMPO);
  lineaHorizontal(22,24,TIEMPO);
  lineaVertical(4,25,TIEMPO);
  punto(16,TIEMPO);
}

void e (){
  lineaHorizontal(1,3,TIEMPO);
  lineaHorizontal(11,13,TIEMPO);
  lineaHorizontal(21,24,TIEMPO);
  lineaVertical(5,20,TIEMPO);
  punto(8,TIEMPO);
}

void ef (){
  lineaHorizontal(1,3,TIEMPO);
  lineaHorizontal(11,13,TIEMPO);
  lineaVertical(5,21,TIEMPO);
}

void g (){
  lineaHorizontal(2,4,TIEMPO);
  lineaHorizontal(12,14,TIEMPO);
  lineaHorizontal(22,24,TIEMPO);
  lineaVertical(9,20,TIEMPO);
  punto(6,TIEMPO);
}

void h (){
  lineaHorizontal(11,13,TIEMPO);
  lineaVertical(0,21,TIEMPO);
  lineaVertical(13,24,TIEMPO);
}

void ei (){
  lineaVertical(12,24,TIEMPO);
  punto(2,TIEMPO);
}

void ej (){
  lineaHorizontal(20,22,TIEMPO);
  lineaVertical(12,18,TIEMPO);
  punto(2,TIEMPO);
}

void k (){
  lineaVertical(0,21,TIEMPO);
  punto(3,TIEMPO);
  punto(7,TIEMPO);
  punto(11,TIEMPO);
  punto(17,TIEMPO);
  punto(23,TIEMPO);
}

void l (){
  lineaVertical(2,24,TIEMPO);
}

void m (){
  lineaVertical(10,21,TIEMPO);
  lineaVertical(12,23,TIEMPO);
  lineaVertical(14,25,TIEMPO);
  punto(6,TIEMPO);
  punto(8,TIEMPO);
}

void n (){
  lineaVertical(5,21,TIEMPO);
  lineaVertical(13,24,TIEMPO);
  punto(7,TIEMPO);
  punto(11,TIEMPO);
}

void o (){ 
  lineaHorizontal(7,9,TIEMPO);
  lineaHorizontal(22,24,TIEMPO);  
  lineaVertical(11,17,TIEMPO);
  lineaVertical(14,20,TIEMPO);
}

void p (){
  lineaVertical(5,21,TIEMPO);
  lineaHorizontal(1,3,TIEMPO);
  punto(8,TIEMPO);
  lineaHorizontal(10,13,TIEMPO); 
}

void q (){
  lineaHorizontal(2,4,TIEMPO);
  lineaHorizontal(12,14,TIEMPO);
  lineaVertical(9,25,TIEMPO);
  punto(6,TIEMPO);
}

void r (){
  lineaVertical(5,21,TIEMPO);
  lineaHorizontal(7,9,TIEMPO);
  punto(11,TIEMPO);
}

void s (){
  lineaHorizontal(1,4,TIEMPO);
  punto(5,TIEMPO);
  lineaHorizontal(11,13,TIEMPO);
  punto(18,TIEMPO);
  lineaHorizontal(20,23,TIEMPO); 
}

void t (){
  lineaHorizontal(5,9,TIEMPO);
  lineaVertical(1,23,TIEMPO);
  punto(18,TIEMPO);
  punto(22,TIEMPO);
  punto(23,TIEMPO);
}

void u (){
  lineaVertical(5,20,TIEMPO); 
  lineaHorizontal(21,23,TIEMPO);
  lineaVertical(9,25,TIEMPO);
  punto(18,TIEMPO);
}

void v (){
  lineaVertical(5,11,TIEMPO);
  lineaVertical(9,15,TIEMPO);
  punto(16,TIEMPO);
  punto(22,TIEMPO);
  punto(18,TIEMPO);
}

void w (){
  lineaVertical(5,21,TIEMPO);
  punto(16,TIEMPO);
  punto(12,TIEMPO);
  punto(18,TIEMPO);
  lineaVertical(9,25,TIEMPO);
}

void x (){
  //punto(0,TIEMPO);
  punto(6,TIEMPO);
  punto(12,TIEMPO);
  punto(18,TIEMPO);
  //punto(24,TIEMPO);
  //punto(4,TIEMPO);
  punto(8,TIEMPO);
  punto(16,TIEMPO);
  //punto(20,TIEMPO);
}

void y (){
  lineaHorizontal(11,14,TIEMPO);
  lineaHorizontal(21,24,TIEMPO);
  lineaVertical(1,7,TIEMPO);
  lineaVertical(4,20,TIEMPO);
}

void z (){
  lineaHorizontal(6,10,TIEMPO);
  punto(13,TIEMPO);
  punto(17,TIEMPO);
  lineaHorizontal(21,25,TIEMPO); 
}

void numero0 (){
  lineaVertical(0,21,TIEMPO);
  lineaHorizontal(0,5,TIEMPO);
  lineaVertical(4,25,TIEMPO);
  lineaHorizontal(20,25,TIEMPO);  
}

void numero1(){
  punto(10,TIEMPO);
  punto(6,TIEMPO);
  lineaVertical(2,23,TIEMPO);
  lineaHorizontal(20,25,TIEMPO);
}

void numero2(){
  lineaHorizontal(0,4,TIEMPO);
  punto(9,TIEMPO);
  lineaHorizontal(11,14,TIEMPO);
  punto(15,TIEMPO);
  lineaHorizontal(21,25,TIEMPO);
}
  
void numero3(){
  lineaHorizontal(0,4,TIEMPO);
  lineaHorizontal(10,14,TIEMPO);
  lineaHorizontal(20,24,TIEMPO);
  lineaVertical(4,25,TIEMPO);
}

void numero4(){
  lineaVertical(0,11,TIEMPO);
  lineaHorizontal(10,14,TIEMPO);
  lineaVertical(4,25,TIEMPO);
}

void numero5 (){
  lineaHorizontal(0,5,TIEMPO);
  punto(5,TIEMPO);
  lineaHorizontal(10,15,TIEMPO);
  punto(19,TIEMPO);
  lineaHorizontal(20,25,TIEMPO); 
}

void numero6(){
  lineaHorizontal(0,5,TIEMPO);
  lineaVertical(0,16,TIEMPO);
  lineaHorizontal(10,15,TIEMPO);
  lineaVertical(14,24,TIEMPO);  
  lineaHorizontal(20,25,TIEMPO);
}

void numero7(){
  lineaHorizontal(0,5,TIEMPO);
  punto(8,TIEMPO);
  punto(12,TIEMPO);
  punto(16,TIEMPO);
  punto(20,TIEMPO);
}

void numero8(){
  lineaHorizontal(1,4,TIEMPO);
  lineaHorizontal(11,14,TIEMPO);
  lineaHorizontal(21,24,TIEMPO);
  lineaVertical(0,21,TIEMPO);
  lineaVertical(4,25,TIEMPO);
}  

void numero9(){
  lineaHorizontal(0,4,TIEMPO);
  lineaVertical(4,25,TIEMPO);
  lineaHorizontal(10,14,TIEMPO);
  punto(5,TIEMPO);
}  
          
void loop(){
  //En la variable texto se escribe el texto deseado.
  char texto[] = "0123456789";  
  for(int i=0; i<sizeof(texto);i++){
      switch(texto[i]){
        case '1':
          for(int j=0;j<CICLOS;j++){
            numero1();
          } 
          borrarTodo();
          break;
        case '2':
          for(int j=0;j<CICLOS;j++){
            numero2();
          } 
          borrarTodo();
          break;
        case '3':
          for(int j=0;j<CICLOS;j++){
            numero3();
          } 
          borrarTodo();
          break;
        case '4':
          for(int j=0;j<CICLOS;j++){
            numero4();
          } 
          delay(500);
          borrarTodo();
          break;
        case '5':
          for(int j=0;j<CICLOS;j++){
            numero5();
          } 
          borrarTodo();
          break;
        case '6':
          for(int j=0;j<CICLOS;j++){
            numero6();
          } 
          borrarTodo();
          break;
        case '7':
          for(int j=0;j<CICLOS;j++){
            numero7();
          } 
          borrarTodo();
          break;
        case '8':
          for(int j=0;j<CICLOS;j++){
            numero8();
          } 
          borrarTodo();
          break;
        case '9':
          for(int j=0;j<CICLOS;j++){
            numero9();
          } 
          borrarTodo();
          break;
        case '0':
          for(int j=0;j<CICLOS;j++){
            numero0();
          } 
          borrarTodo();
          break;    
        case 'A':
          for(int j=0;j<CICLOS;j++){
            A();
          } 
          borrarTodo();
          break; 
        case 'B':
          for(int j=0;j<CICLOS;j++){
           B();
          } 
          borrarTodo();
         break; 
        case 'C':
          for(int j=0;j<CICLOS;j++){
            C();
          } 
          delay(400);
          borrarTodo();
          break; 
        case 'D':
          for(int j=0;j<CICLOS;j++){
            D();
          } 
          borrarTodo();
          break;
        case 'E':
          for(int j=0;j<CICLOS;j++){
            E();
          } 
          borrarTodo();
          break;
        case 'F':
          for(int j=0;j<CICLOS;j++){
            eF();
          } 
          delay(400);
          borrarTodo();
          break;
        case 'G':
          for(int j=0;j<CICLOS;j++){
            G();
          } 
          borrarTodo();
          break;
        case 'H':
          for(int j=0;j<CICLOS;j++){
            H();
          } 
          borrarTodo();
          break;
        case 'I':
          for(int j=0;j<CICLOS;j++){
            I();
          } 
          delay(400);
          borrarTodo();
          break;
        case 'J':
          for(int j=0;j<CICLOS;j++){
            J();
          } 
          delay(400);
          borrarTodo();
          break;
        case 'K':
          for(int j=0;j<CICLOS;j++){
            K();
          } 
          borrarTodo();
          break;
        case 'L':
          for(int j=0;j<CICLOS;j++){
            L();
          } 
          delay(600);       
          borrarTodo();
          break;
        case 'M':
          for(int j=0;j<CICLOS;j++){
            M();
          } 
          borrarTodo();
          break;
        case 'N':
          for(int j=0;j<CICLOS;j++){
            N();
          } 
          borrarTodo();
          break;
        case 'O':
          for(int j=0;j<CICLOS;j++){
            O();
          } 
          borrarTodo();
          break;
        case 'P':
          for(int j=0;j<CICLOS;j++){
            P();
          } 
          borrarTodo();
          break;
        case 'Q':
          for(int j=0;j<CICLOS;j++){
            Q();
          } 
          borrarTodo();
          break;
        case 'R':
          for(int j=0;j<CICLOS;j++){
            R();
          } 
          borrarTodo();
          break;
        case 'S':
          for(int j=0;j<CICLOS;j++){
            S();
          } 
          borrarTodo();
          break;
        case 'T':
          for(int j=0;j<CICLOS;j++){
            T();
          } 
          delay(800);
          borrarTodo();
          break;
        case 'U':
          for(int j=0;j<CICLOS;j++){
            U();
          } 
          delay(400);
          borrarTodo();
          break;
        case 'V':
          for(int j=0;j<CICLOS;j++){
            V();
          } 
          borrarTodo();
          break;
        case 'W':
          for(int j=0;j<CICLOS;j++){
            W();
          } 
          borrarTodo();
          break;
        case 'X':
          for(int j=0;j<CICLOS;j++){
            X();
          } 
          borrarTodo();
          break;
        case 'Y':
          for(int j=0;j<CICLOS;j++){
            Y();
          } 
          borrarTodo();
          break;
        case 'Z':
          for(int j=0;j<CICLOS;j++){
            Z();
          } 
          borrarTodo();
          break;
        case 'a':
          for(int j=0;j<CICLOS;j++){
            a();
          } 
          borrarTodo();
          break;
        case 'b':
          for(int j=0;j<CICLOS;j++){
            b();
          } 
          borrarTodo();
          break;
        case 'c':
          for(int j=0;j<CICLOS;j++){
            c();
          } 
          delay(500);
          borrarTodo();
          break;
        case 'd':
          for(int j=0;j<CICLOS;j++){
            d();
          } 
          borrarTodo();
          break;
        case 'e':
          for(int j=0;j<CICLOS;j++){
            e();
          } 
          borrarTodo();
          break;
        case 'f':
          for(int j=0;j<CICLOS;j++){
            ef();
          } 
          delay(600);
          borrarTodo();
          break;
        case 'g':
          for(int j=0;j<CICLOS;j++){
            g();
          } 
          borrarTodo();
          break;
        case 'h':
          for(int j=0;j<CICLOS;j++){
            h();
          } 
          delay(600);
          borrarTodo();
          break;
        case 'i':
          for(int j=0;j<CICLOS;j++){
            ei();
          } 
          delay(900);
          borrarTodo();
          break;
        case 'j':
          for(int j=0;j<CICLOS;j++){
            ej();
          } 
          delay(900);
          borrarTodo();
          break;
        case 'k':
          for(int j=0;j<CICLOS;j++){
            k();
          } 
          borrarTodo();
          break;
        case 'l':
          for(int j=0;j<CICLOS;j++){
            l();
          } 
          delay(1000);
          borrarTodo();          
          break;
        case 'm':
          for(int j=0;j<CICLOS;j++){
            m();
          } 
          borrarTodo();
          break;
        case 'n':
          for(int j=0;j<CICLOS;j++){
            n();
          } 
          borrarTodo();
          break;
        case 'o':
          for(int j=0;j<CICLOS;j++){
            o();
          } 
          borrarTodo();
          break;
        case 'p':
          for(int j=0;j<CICLOS;j++){
            p();
          } 
          borrarTodo();
          break;
        case 'q':
          for(int j=0;j<CICLOS;j++){
            q();
          } 
          borrarTodo();
          break;
        case 'r':
          for(int j=0;j<CICLOS;j++){
            r();
          } 
          delay(500);
          borrarTodo();
          break;
        case 's':
          for(int j=0;j<CICLOS;j++){
            s();
          } 
          borrarTodo();
          break;
        case 't':
          for(int j=0;j<CICLOS;j++){
            t();
          } 
          borrarTodo();
          break;
        case 'u':
          for(int j=0;j<CICLOS;j++){
            u();
          } 
          borrarTodo();
          break;
        case 'v':
          for(int j=0;j<CICLOS;j++){
            v();
          } 
          borrarTodo();
          break;
        case 'w':
          for(int j=0;j<CICLOS;j++){
            w();
          } 
          borrarTodo();
          break;
        case 'x':
          for(int j=0;j<CICLOS;j++){
            x();
          } 
          borrarTodo();
          break;
        case 'y':
          for(int j=0;j<CICLOS;j++){
            y();
          } 
          borrarTodo();
          break;
        case 'z':
          for(int j=0;j<CICLOS;j++){
            z();
          } 
          borrarTodo();
          break;
        default:
          borrarTodo();
          delay(TIEMPO);
          break;
      }   
  }
} 

#include<simplecpp>
int n;
void circle(int n){
if(n == 1)
{Circle c1(150,150,50); c1.imprint();}
else if(n==2)
{Circle c2(250,150,50); c2.imprint();}
else if(n==3)
{Circle c3(350,150,50); c3.imprint();}
else if(n==4)
{Circle c4(150,250,50); c4.imprint();}
else if(n==5)
{Circle c5(250,250,50); c5.imprint();}
else if(n==6)
{Circle c6(350,250,50); c6.imprint();}
else if(n==7)
{Circle c7(150,350,50); c7.imprint();}
else if(n==8)
{Circle c8(250,350,50); c8.imprint();}
else if(n==9)
{Circle c9(350,350,50); c9.imprint();}
}
bool player(int a[][3]){
cout<<"player(do not repeat the box number):";
cin>>n;
for(int i=0; i<3; i++){
for(int j=0; j<3; j++){
if(a[i][j] == n) {circle(n); a[i][j] = 0; return true;}
}
}
cout<<"INVALID/WRONG box number"<<endl; return false;
}
void cross(int n){
if(n == 1)
{Line c1(100,100,200,200); c1.imprint();
Line d1(100,200,200,100); d1.imprint();}
else if(n==2)
{Line c2(200,100,300,200); c2.imprint();
Line d2(200,200,300,100); d2.imprint();}
else if(n==3)
{Line c3(300,100,400,200); c3.imprint();
Line d3(300,200,400,100); d3.imprint();}
else if(n==4)
{Line c4(100,200,200,300); c4.imprint();
Line d4(100,300,200,200); d4.imprint();}
else if(n==5)
{Line c5(200,200,300,300); c5.imprint();
Line d5(200,300,300,200); d5.imprint();}
else if(n==6)
{Line c6(300,200,400,300); c6.imprint();
Line d6(300,300,400,200); d6.imprint();}
else if(n==7)
{Line c7(100,300,200,400); c7.imprint();
Line d7(100,400,200,300); d7.imprint();}
else if(n==8)
{Line c8(200,300,300,400); c8.imprint();
Line d8(200,400,300,300); d8.imprint();}
else if(n==9)
{Line c9(300,300,400,400); c9.imprint();
Line d9(300,400,400,300); d9.imprint();}
}
bool computer(int k,int a[][3]){
for(int i=0; i<3; i++){
for(int j=0; j<3; j++){
if(a[i][j] == k) {
cout<<"computer:"<<k<<endl;
cross(k);
a[i][j] = -1; return true;
}
}
}
return false;
}
bool tictactoePlayer(int a[][3]){
for(int i=0; i<3; i++){
if(a[i][0] == 0 && a[i][1] == 0) {if(computer(3*(i+1),a)) return true;}
if(a[i][0] == 0 && a[i][2] == 0) {if(computer(3*(i+1)-1,a)) return true;}
if(a[i][2] == 0 && a[i][1] == 0) {if(computer(3*(i+1)-2,a)) return true;}
}
for(int j=0; j<3; j++){
if(a[0][j] == 0 && a[1][j] == 0) {if(computer(j+7,a)) return true;}
if(a[0][j] == 0 && a[2][j] == 0) {if(computer(j+4,a)) return true;}
if(a[2][j] == 0 && a[1][j] == 0) {if(computer(j+1,a)) return true;}
}
for(int i=0; i<2; i++){
if(a[i][i] == 0 && a[i+1][i+1] == 0) {
if(i==0){if(computer(i+9,a)) return true;}
if(i==1){if(computer(i,a)) return true;} }
}
if(a[0][0] == 0 && a[2][2] == 0){
if(computer(5,a)) return true;
}
for(int i=0; i<2; i++){
for(int j=0; j<3; j++){
if(a[i][2-i] == 0 && a[j][2-j] == 0 && i != j){
if(i==0 && j==1){if(computer(7,a)) return true;}
if(i==1 && j==2){if(computer(3,a)) return true;}
if(i==0 && j==2){if(computer(5,a)) return true;} }
}
}
return false;
}
bool tictactoeComputer(int a[][3]){
for(int i=0; i<3; i++){
if(a[i][0] == -1 && a[i][1] == -1) {if(computer(3*(i+1),a)) {cout<<"GAME OVER. COMPUTER WINS!"; wait(5); return true;}}
if(a[i][0] == -1 && a[i][2] == -1) {if(computer(3*(i+1)-1,a)) {cout<<"GAME OVER. COMPUTER WINS!"; wait(5); return true;}}
if(a[i][2] == -1 && a[i][1] == -1) {if(computer(3*(i+1)-2,a)) {cout<<"GAME OVER. COMPUTER WINS!"; wait(5); return true;}}
}
for(int j=0; j<3; j++){
if(a[0][j] == -1 && a[1][j] == -1) {if(computer(j+7,a)) {cout<<"GAME OVER. COMPUTER WINS!"; wait(5); return true;}}
if(a[0][j] == -1 && a[2][j] == -1) {if(computer(j+4,a)) {cout<<"GAME OVER. COMPUTER WINS!"; wait(5); return true;}}
if(a[2][j] == -1 && a[1][j] == -1) {if(computer(j+1,a)) {cout<<"GAME OVER. COMPUTER WINS!"; wait(5); return true;}}
}
for(int i=0; i<2; i++){
if(a[i][i] == -1 && a[i+1][i+1] == -1) {
if(i==0){if(computer(i+9,a)) {cout<<"GAME OVER. COMPUTER WINS!"; wait(5); return true;}}
if(i==1){if(computer(i,a)) {cout<<"GAME OVER. COMPUTER WINS!"; wait(5); return true;} }
}
}
if(a[0][0] == -1 && a[2][2] == -1) {if(computer(5,a)) {cout<<"GAME OVER. COMPUTER WINS!"; wait(5); return true;}}
for(int i=0; i<3; i++){
for(int j=0; j<3; j++){
if(a[i][2-i] == -1 && a[j][2-j] == -1 && i != j){
if(i==0 && j==1){if(computer(7,a)) {cout<<"GAME OVER. COMPUTER WINS!"; wait(5); return true;}}
if(i==1 && j==2){if(computer(3,a)) {cout<<"GAME OVER. COMPUTER WINS!"; wait(5); return true;}}
if(i==0 && j==2){if(computer(5,a)) {cout<<"GAME OVER. COMPUTER WINS!"; wait(5); return true;}} }
}
}
return false;
}
void normal(int a[][3]){
if(a[1][1] != 0 && a[1][1] != -1){ if(computer(a[1][1],a)) return; }
if(n==5){
if(a[0][0] != 0 && a[0][0] != -1){ if(computer(a[0][0],a)) return; }
if(a[0][2] != 0 && a[0][2] != -1){ if(computer(a[0][2],a)) return; }
if(a[2][0] != 0 && a[2][0] != -1){ if(computer(a[2][0],a)) return; }
if(a[2][2] != 0 && a[2][2] != -1){ if(computer(a[2][2],a)) return; }
}
if(a[1][1] == -1 && a[0][0] == 0 && a[2][2] == 0){
if(a[1][0] != 0 && a[1][0] != -1){ if(computer(a[1][0],a)) return; }
if(a[0][1] != 0 && a[0][1] != -1){ if(computer(a[0][1],a)) return; }
if(a[2][1] != 0 && a[2][1] != -1){ if(computer(a[2][1],a)) return; }
if(a[1][2] != 0 && a[1][2] != -1){ if(computer(a[1][2],a)) return; }
}
if(a[1][1] == -1 && a[2][0] == 0 && a[0][2] == 0){
if(a[1][0] != 0 && a[1][0] != -1){ if(computer(a[1][0],a)) return; }
if(a[0][1] != 0 && a[0][1] != -1){ if(computer(a[0][1],a)) return; }
if(a[2][1] != 0 && a[2][1] != -1){ if(computer(a[2][1],a)) return; }
if(a[1][2] != 0 && a[1][2] != -1){ if(computer(a[1][2],a)) return; }
}
if(a[0][0] != 0 && a[0][0] != -1){ if(computer(a[0][0],a)) return; }
if(a[0][2] != 0 && a[0][2] != -1){ if(computer(a[0][2],a)) return; }
if(a[2][0] != 0 && a[2][0] != -1){ if(computer(a[2][0],a)) return; }
if(a[2][2] != 0 && a[2][2] != -1){ if(computer(a[2][2],a)) return; }
for(int i=0; i<3; i++){
for(int j=0; j<3; j++){
if(a[i][j] != 0 && a[i][j] != -1){if(computer(a[i][j],a)) return;}
}
}
}
main_program{
//Write your code here
int a[3][3];
int m = 1;
for(int i=0; i<3; i++){
for(int j=0; j<3; j++){
a[i][j] = m;
m++;
}
}
turtleSim();
Line v1(100,400,100,100); v1.imprint();
Line v2(200,100,200,400); v2.imprint();
Line v3(300,100,300,400); v3.imprint();
Line v4(400,100,400,400); v4.imprint();
Line h1(100,100,400,100); h1.imprint();
Line h2(100,200,400,200); h2.imprint();
Line h3(100,300,400,300); h3.imprint();
Line h4(100,400,400,400); h4.imprint();
for(int i=0; i<5; i++){
if(player(a)){
if(!(tictactoeComputer(a))){
if(!(tictactoePlayer(a))){
normal(a);
}
}
else {return 0;}
if(i==4){cout<<"GAME OVER! ITS A DRAW!!"; wait(5); return 0;}
}
else{i--;}
}
}

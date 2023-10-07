#include<iostream>
using namespace std;
void checkrow(int a[][9] , int i){
    int g=i;
for(; i<g+3; i++){
    for(int j=i+1; j<g+3; j++){
        for(int k=0; k<9; k++){
            for(int l=0; l<9; l++){
                if(a[i][k] == a[j][l] && a[i][k] != 0){
                   int num = a[i][k];
                   int m = 3*g+3-i-j;
                   if((k>=0 && k<=2 && l>=3 && l<=5) || (l>=0 && l<=2 && k>=3 && k<=5)){
                    int s=0;
                    int zeros[3];
                    int check = 0;
                    for(int p=0; p<9; p++){
                        if(a[m][p] == num) check--;
                        check++;
                    }
                    if(check == 9){
                    for(int p=6; p<9; p++) {if(a[m][p] == 0){ s++; zeros[s-1] = p; }}
                    if(s==1){
                        int x=0;
                        for(int y=0; y<9; y++){
                            if(a[m][y] == num) x--;
                            x++;
                        }
                    if(x==9) a[m][zeros[0]] = num;
                    }
                    if(s==2){
                        int v=0;
                        for(int g=0; g<9; g++){
                            if(a[m][g] == num) v--;
                            v++;
                        }
                    if(v == 9){    
                    int t=0;
                    int u=0;
                    for(int q=0; q<9; q++){
                      if(a[q][zeros[0]] == num) t--;
                      t++;  
                    }
                    for(int q=0; q<9; q++){
                      if(a[q][zeros[1]] == num) u--;
                      u++;  
                    }
                    if(t == 9 && u != 9) a[m][zeros[0]] = num;
                    if(t != 9 && u == 9) a[m][zeros[1]] = num;
                    }
                    }
                    if(s==3){
                        int d=0,e=0,r=0;
                    for(int q=0; q<9; q++){
                      if(a[q][zeros[0]] == num) d--;
                      d++;  
                    }
                    for(int q=0; q<9; q++){
                      if(a[q][zeros[1]] == num) e--;
                      e++;  
                    }
                    for(int q=0; q<9; q++){
                      if(a[q][zeros[2]] == num) r--;
                      r++;  
                    } 
                    if(d==9 && e!=9 && r!=9) a[m][zeros[0]] = num;
                    if(d!=9 && e==9 && r!=9) a[m][zeros[1]] = num;
                    if(d!=9 && e!=9 && r==9) a[m][zeros[2]] = num;   
                    }
                   }
                   }
              else if((k>=3 && k<=5 && l>=6 && l<=8) || (l>=3 && l<=5 && k>=6 && k<=8)){
                    int s=0;
                    int zeros[3];
                    int check = 0;
                    for(int p=0; p<9; p++){
                        if(a[m][p] == num) check--;
                        check++;
                    }
                    if(check == 9){
                    for(int p=0; p<3; p++) {if(a[m][p] == 0){ s++; zeros[s-1] = p; }}
                    if(s==1){
                        int x=0;
                        for(int y=0; y<9; y++){
                            if(a[m][y] == num) x--;
                            x++;
                        }
                     if(x==9) a[m][zeros[0]] = num;
                    }
                    if(s==2){
                        int v=0;
                        for(int g=0; g<9; g++){
                            if(a[m][g] == num) v--;
                            v++;
                        }
                    if(v == 9){
                    int t=0;
                    int u=0;
                    for(int q=0; q<9; q++){
                      if(a[q][zeros[0]] == num) t--;
                      t++;  
                    }
                    for(int q=0; q<9; q++){
                      if(a[q][zeros[1]] == num) u--;
                      u++;  
                    }
                    if(t == 9 && u != 9) a[m][zeros[0]] = num;
                    if(t != 9 && u == 9) a[m][zeros[1]] = num;
                    }
                    }
                    if(s==3){
                        int d=0,e=0,r=0;
                    for(int q=0; q<9; q++){
                      if(a[q][zeros[0]] == num) d--;
                      d++;  
                    }
                    for(int q=0; q<9; q++){
                      if(a[q][zeros[1]] == num) e--;
                      e++;  
                    }
                    for(int q=0; q<9; q++){
                      if(a[q][zeros[2]] == num) r--;
                      r++;  
                    } 
                    if(d==9 && e!=9 && r!=9) a[m][zeros[0]] = num;
                    if(d!=9 && e==9 && r!=9) a[m][zeros[1]] = num;
                    if(d!=9 && e!=9 && r==9) a[m][zeros[2]] = num;   
                    }
                   }
                   }
                   else{
                    int s=0;
                    int zeros[3];
                    int check = 0;
                    for(int p=0; p<9; p++){
                        if(a[m][p] == num) check--;
                        check++;
                    }
                    if(check == 9){
                    for(int p=3; p<6; p++) {if(a[m][p] == 0){ s++; zeros[s-1] = p; }}
                    if(s==1){
                        int x=0;
                        for(int y=0; y<9; y++){
                            if(a[m][y] == num) x--;
                            x++;
                        }
                     if(x == 9) a[m][zeros[0]] = num;
                    }
                    if(s==2){
                       int v=0;
                        for(int g=0; g<9; g++){
                            if(a[m][g] == num) v--;
                            v++;
                        }
                    if(v == 9){ 
                    int t=0;
                    int u=0;
                    for(int q=0; q<9; q++){
                      if(a[q][zeros[0]] == num) t--;
                      t++;  
                    }
                    for(int q=0; q<9; q++){
                      if(a[q][zeros[1]] == num) u--;
                      u++;  
                    }
                    if(t == 9 && u != 9) a[m][zeros[0]] = num;
                    if(t != 9 && u == 9) a[m][zeros[1]] = num;
                    }
                    }
                    if(s==3){
                        int d=0,e=0,r=0;
                    for(int q=0; q<9; q++){
                      if(a[q][zeros[0]] == num) d--;
                      d++;  
                    }
                    for(int q=0; q<9; q++){
                      if(a[q][zeros[1]] == num) e--;
                      e++;  
                    }
                    for(int q=0; q<9; q++){
                      if(a[q][zeros[2]] == num) r--;
                      r++;  
                    } 
                    if(d==9 && e!=9 && r!=9) a[m][zeros[0]] = num;
                    if(d!=9 && e==9 && r!=9) a[m][zeros[1]] = num;
                    if(d!=9 && e!=9 && r==9) a[m][zeros[2]] = num;   
                    }
                   }
                   }
                }
            }
        }
    }
}
}
void checkcolumn(int a[][9], int i){
int g=i;
for(; i<g+3; i++){
    for(int j=i+1; j<g+3; j++){
        for(int k=0; k<9; k++){
            for(int l=0; l<9; l++){
                if(a[k][i] == a[l][j] && a[k][i] != 0){
                   int num = a[k][i];
                   int m = 3*g+(3-i-j);
                   if((k>=0 && k<=2 && l>=3 && l<=5) || (l>=0 && l<=2 && k>=3 && k<=5)){
                    int s=0;
                    int zeros[3];
                    int check = 0;
                    for(int p=0; p<9; p++){
                        if(a[p][m] == num) check--;
                        check++;
                    }
                    if(check == 9){
                    for(int p=6; p<9; p++) {if(a[p][m] == 0){ s++; zeros[s-1] = p; }}
                    if(s==1){
                        int x=0;
                        for(int y=0; y<9; y++){
                            if(a[y][m] == num) x--;
                            x++;
                        }
                    if(x==9) a[zeros[0]][m] = num;
                    }
                    if(s==2){
                        int v=0;
                        for(int g=0; g<9; g++){
                            if(a[g][m] == num) v--;
                            v++;
                        }
                    if(v == 9){
                    int t=0;
                    int u=0;
                    for(int q=0; q<9; q++){
                      if(a[zeros[0]][q] == num) t--;
                      t++;  
                    }
                    for(int q=0; q<9; q++){
                      if(a[zeros[1]][q] == num) u--;
                      u++;  
                    }
                    if(t == 9 && u != 9) a[zeros[0]][m] = num;
                    if(t != 9 && u == 9) a[zeros[1]][m] = num;
                    }
                    }
                    if(s==3){
                        int d=0,e=0,r=0;
                    for(int q=0; q<9; q++){
                      if(a[zeros[0]][q] == num) d--;
                      d++;  
                    }
                    for(int q=0; q<9; q++){
                      if(a[zeros[1]][q] == num) e--;
                      e++;  
                    }
                    for(int q=0; q<9; q++){
                      if(a[zeros[2]][q] == num) r--;
                      r++;  
                    } 
                    if(d==9 && e!=9 && r!=9) a[zeros[0]][m] = num;
                    if(d!=9 && e==9 && r!=9) a[zeros[1]][m] = num;
                    if(d!=9 && e!=9 && r==9) a[zeros[2]][m] = num;   
                    }
                   }
                   }
              else if((k>=3 && k<=5 && l>=6 && l<=8) || (l>=3 && l<=5 && k>=6 && k<=8)){
                    int s=0;
                    int zeros[3];
                    int check = 0;
                    for(int p=0; p<9; p++){
                        if(a[p][m] == num) check--;
                        check++;
                    }
                    if(check == 9){
                    for(int p=0; p<3; p++) {if(a[p][m] == 0){ s++; zeros[s-1] = p; }}
                    if(s==1){
                    int x=0;
                    for(int y=0; y<9; y++){
                        if(a[y][m] == num) x--;
                        x++;
                    }
                    if(x==9) a[zeros[0]][m] = num;
                    }
                    if(s==2){
                        int v=0;
                        for(int g=0; g<9; g++){
                            if(a[g][m] == num) v--;
                            v++;
                        }
                    if(v == 9){
                    int t=0;
                    int u=0;
                    for(int q=0; q<9; q++){
                      if(a[zeros[0]][q] == num) t--;
                      t++;  
                    }
                    for(int q=0; q<9; q++){
                      if(a[zeros[1]][q] == num) u--;
                      u++;  
                    }
                    if(t == 9 && u != 9) a[zeros[0]][m] = num;
                    if(t != 9 && u == 9) a[zeros[1]][m] = num;
                    }
                    }
                    if(s==3){
                        int d=0,e=0,r=0;
                    for(int q=0; q<9; q++){
                      if(a[zeros[0]][q] == num) d--;
                      d++;  
                    }
                    for(int q=0; q<9; q++){
                      if(a[zeros[1]][q] == num) e--;
                      e++;  
                    }
                    for(int q=0; q<9; q++){
                      if(a[zeros[2]][q] == num) r--;
                      r++;  
                    } 
                    if(d==9 && e!=9 && r!=9) a[zeros[0]][m] = num;
                    if(d!=9 && e==9 && r!=9) a[zeros[1]][m] = num;
                    if(d!=9 && e!=9 && r==9) a[zeros[2]][m] = num;   
                    }
                   }
                   }
                   else {
                    int s=0;
                    int zeros[3];
                    int check = 0;
                    for(int p=0; p<9; p++){
                        if(a[p][m] == num) check--;
                        check++;
                    }
                    if(check == 9){
                    for(int p=3; p<6; p++) {if(a[p][m] == 0){ s++; zeros[s-1] = p; }}
                    if(s==1){
                        int x=0;
                        for(int y=0; y<9; y++){
                            if(a[y][m] == num) x--;
                            x++;
                        }
                     if(x == 9) a[zeros[0]][m] = num;
                    }
                    if(s==2){
                        int v=0;
                        for(int g=0; g<9; g++){
                            if(a[g][m] == num) v--;
                            v++;
                        }
                    if(v == 9){
                    int t=0;
                    int u=0;
                    for(int q=0; q<9; q++){
                      if(a[zeros[0]][q] == num) t--;
                      t++;  
                    }
                    for(int q=0; q<9; q++){
                      if(a[zeros[1]][q] == num) u--;
                      u++;  
                    }
                    if(t == 9 && u != 9) a[zeros[0]][m] = num;
                    if(t != 9 && u == 9) a[zeros[1]][m] = num;
                    }
                    }
                    if(s==3){
                        int d=0,e=0,r=0;
                    for(int q=0; q<9; q++){
                      if(a[zeros[0]][q] == num) d--;
                      d++;  
                    }
                    for(int q=0; q<9; q++){
                      if(a[zeros[1]][q] == num) e--;
                      e++;  
                    }
                    for(int q=0; q<9; q++){
                      if(a[zeros[2]][q] == num) r--;
                      r++;  
                    } 
                    if(d==9 && e!=9 && r!=9) a[zeros[0]][m] = num;
                    if(d!=9 && e==9 && r!=9) a[zeros[1]][m] = num;
                    if(d!=9 && e!=9 && r==9) a[zeros[2]][m] = num;   
                    }
                   }
                   }
                }
            }
        }
    }
}
}
bool row(int a[][9], int i, int number){
    int t=0;
    for(int q=0; q<9; q++){
    if(a[i][q] == number) t--;
    t++;
    }
    if(t == 9) return true;
    else return false;
}
bool column(int a[][9], int i, int number){
    int t=0;
    for(int q=0; q<9; q++){
    if(a[q][i] == number) t--;
    t++;
    }
    if(t == 9) return true;
    else return false;
}
void checkbox(int a[][9], int i, int j){
    int numbers[9];
    for(int s=0; s<9; s++) numbers[s] = s+1;
    for(int x=i; x<i+3; x++){
        for(int y=j; y<j+3; y++){
            for(int z=0; z<9; z++){
            if(a[x][y] == numbers[z] && a[x][y] != 0) numbers[z] = 0;
            }
        }
    }
    int r,c;
    for(int z=0; z<9; z++){
        if(numbers[z] != 0){
            int t=0;
        for(int x=i; x<i+3; x++){
        for(int y=j; y<j+3; y++){
            if(a[x][y] == 0){
            if( row(a,x,numbers[z]) && column(a,y,numbers[z]) ) {t++; r=x; c=y;}
            }
        }
        }
        if(t == 1) {a[r][c] = numbers[z]; numbers[z] = 0;}
    }
    }
}
bool box(int a[][9] , int i, int j, int number){
    int p=0;
    for(int x=i; x<i+3; x++){
        for(int y=j; y<j+3; y++){
            if(a[x][y] == number) p--;
            p++;
        }
    }
    if(p == 9) return true;
    else return false;
}
void allrows(int a[][9], int i){
    int si,sj;
    if(i >=0 && i<3) si = 0;
    if(i >=3 && i<6) si = 3;
    if(i >=6 && i<9) si = 6;
    int numbers[9];
    for(int s=0; s<9; s++) numbers[s] = s+1;
    for(int j=0; j<9; j++){
        for(int k=0; k<9; k++){
            if(a[i][j] == numbers[k] && a[i][j] != 0) numbers[k] = 0;
        }
    }
    int r,c;
    for(int z=0; z<9; z++){
        if(numbers[z] != 0){
            int t=0;
            for(int j=0; j<9; j++){
                if(a[i][j] == 0){
                  if(j >=0 && j<3) sj = 0;
                  if(j >=3 && j<6) sj = 3;
                  if(j >=6 && j<9) sj = 6;  
                if(column(a,j,numbers[z]) && box(a,si,sj,numbers[z])) {t++; r=i; c=j;}
                }
            }
        if(t == 1) {a[r][c] = numbers[z]; numbers[z] = 0;}
        }
    }
}
void allcolumns(int a[][9] , int i){
    int si,sj;
    if(i >=0 && i<3) si = 0;
    if(i >=3 && i<6) si = 3;
    if(i >=6 && i<9) si = 6;
    int numbers[9];
    for(int s=0; s<9; s++) numbers[s] = s+1;
    for(int j=0; j<9; j++){
        for(int k=0; k<9; k++){
            if(a[j][i] == numbers[k] && a[j][i] != 0) numbers[k] = 0;
        }
    }
    int r,c;
    for(int z=0; z<9; z++){
        if(numbers[z] != 0){
            int t=0;
            for(int j=0; j<9; j++){
                if(a[j][i] == 0){
                  if(j >=0 && j<3) sj = 0;
                  if(j >=3 && j<6) sj = 3;
                  if(j >=6 && j<9) sj = 6; 
                if(row(a,j,numbers[z]) && box(a,sj,si,numbers[z])) {t++; r=j; c=i;}
                }
            }
        if(t == 1) {a[r][c] = numbers[z]; numbers[z] = 0;}
        }
    }
}
void sudoku(int a[][9]){
    for(int xx=0; xx<3; xx++){
    int f=0;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(a[i][j] != 0) f++;
        }
    }
    if(f == 81) return;
checkrow(a,0);
checkrow(a,3);
checkrow(a,6);
checkcolumn(a,0);
checkcolumn(a,3);
checkcolumn(a,6);
for(int i=0; i<9; i=i+3){
    for(int j=0; j<9; j=j+3){
        checkbox(a,i,j);
    }
}
for(int i=0; i<9; i++) allrows(a,i);
for(int i=0; i<9; i++) allcolumns(a,i);
}
}
int main(){
 int n,x,y,nn;
 int a[9][9];
 for(int i=0; i<9; i++){
    for(int j=0; j<9; j++){
        a[i][j] = 0;
    }
 }
 cout<<"enter the number of input numbers N(>=17) for your sudoku"<<endl;
 cin>>nn;
 cout<<"enter "<<nn<<" numbers with their coordinates"<<endl;
for(int i=0; i<nn; i++){
    cin>>n>>x>>y;
    a[x][y] = n;
}
cout<<"your given numbers for sudoku are:"<<endl;
for(int i=0; i<9; i++){
    if(i==0 || i==3 || i==6){
        for(int k=0; k<19; k++) cout<<"-";
        cout<<endl;
    }
    cout<<"|";
    for(int j=0; j<9; j++){
        if(a[i][j] == 0) cout<<" |";
        else cout<<a[i][j]<<"|";
    }
    cout<<endl;
 }
for(int k=0; k<19; k++) cout<<"-";
cout<<endl;
sudoku(a);
cout<<"the solved sudoku is:"<<endl;
for(int i=0; i<9; i++){
    if(i==0 || i==3 || i==6){
        for(int k=0; k<19; k++) cout<<"-";
        cout<<endl;
    }
    cout<<"|";
    for(int j=0; j<9; j++){
     cout<<a[i][j]<<"|";
    }
    cout<<endl;
 }
for(int k=0; k<19; k++) cout<<"-";
}
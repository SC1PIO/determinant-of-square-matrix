# include <iostream>
using namespace std;

int det(int A, int B,int C,int D,int E,int F,int G,int H,int I)
{
    int s1, s2;
    s1=A*E*I+D*H*C+B*F*G;
    s2=C*E*G+D*B*I+A*H*F;
    return s1-s2;
}

int main()
{
    int i, j, v[3][3];
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            cin>>v[i][j];
    cout<<det(v[0][0], v[0][1], v[0][2], v[1][0], v[1][1], v[1][2], v[2][0], v[2][1], v[2][2]);
    return 0;
}

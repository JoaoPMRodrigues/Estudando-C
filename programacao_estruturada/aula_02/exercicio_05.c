# include <stdio.h>

int main (void)
{
    float m1,m2,m3,m4;
    float c1,c2,c3,c4;
    int g1,g2,g3,g4;
    int pv1,pv2;
    int nv1, nv2,mv1,mv2,cv1,cv2;
    int gv1,gv2;
    
    scanf("%f %f %f %f %f %f %f %f", &m1,&c1,&m2,&c2,&m3,&c3,&m4,&c4);
    
    // time 1 vs time 2

    g1 = (2*m1*c2)/(m1+m2+c1+c2);
    g2 = (2*m2*c1)/(m1+m2+c1+c2);
 
    printf("Semifinal 1\n");
    printf("(Time 1) %d x %d (Time 2)\n",g1,g2);
    
    if (g1>=g2)
    {
        nv1=1;
        mv1=m1;
        cv1=c1;
        pv1=m1;
        printf("Time 1 se classificou!\n");
    } else
    {  
        nv1=2;
        mv2=m2;
        cv2=c2;
        pv1=m2;
        printf("Time 2 se classificou!\n");
    }
    
    // time 3 vs time 4

    g3 = (2*m3*c4)/(m3+m4+c3+c4);
    g4 = (2*m4*c3)/(m4+m3+c4+c3);

    printf("Semifinal 2\n");
    printf("(Time 3) %d x %d (Time 4)\n",g3,g4);
 
    if (g3>=g4)
    {
        nv2=3;
        mv2=m3;
        cv2=c3;
        pv2=m3;
        printf("Time 3 se classificou!\n");
    } else
    {
        nv2=4;
        mv2=m4;
        cv2=c4;
        pv2=m4;
        printf("Time 4 se classificou!\n");
    }

    // final

    gv1 = (2*mv1*cv2)/(mv1+mv2+cv1+cv2);
    gv2 = (2*mv2*cv1)/(mv1+mv2+cv1+cv2);

    printf("Final\n");
    printf("(Time %d) %d x %d (Time %d)\n",nv1,gv1,gv2,nv2);
    
    if (gv1>gv2)
    {
        printf("Time %d campeão!\n",nv1);
        return 0;
    } else if (gv1<gv2)
    {
        printf("Time %d campeão!\n",nv2);
        return 0;
    }
    printf("Penalidades\n");
    printf("(Time %d) %d x %d (Time %d)\n",nv1,pv1,pv2,nv2);

    if (pv1>=pv2)
        printf("Time %d CAMPEÃO!\n",nv1);
    else
        printf("Time %d CAMPEÃO!\n",nv2);
    
}
ld area(ld x1, ld y1, ld x2, ld y2,
                            ld x3, ld y3)
{
    //trace(x1,y1,x2,y2,x3,y3);
    return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + 
                x3 * (y1 - y2)) / 2.0);
}
 
/* A function to check whether point P(x, y) 
   lies inside the rectangle formed by A(x1, y1), 
   B(x2, y2), C(x3, y3) and D(x4, y4) */
bool check(ld x1, ld y1, ld x2, ld y2, ld x3, 
             ld y3, ld x4, ld y4, ld x, ld y)
{
    /* Calculate area of rectangle ABCD */
    //trace(x,y);
    ld A = area(x1, y1, x2, y2, x3, y3) + 
              area(x1, y1, x4, y4, x3, y3);
 
    /* Calculate area of triangle PAB */
    ld A1 = area(x, y, x1, y1, x2, y2);
 
    /* Calculate area of triangle PBC */
    ld A2 = area(x, y, x2, y2, x3, y3);
 
    /* Calculate area of triangle PCD */
    ld A3 = area(x, y, x3, y3, x4, y4);
 
    /* Calculate area of triangle PAD */
    ld A4 = area(x, y, x1, y1, x4, y4);
 
    /* Check if sum of A1, A2, A3 and A4 
       is same as A */
    //trace(A1,A2,A3,A4);
    //cout<<A<<" "<<A1 << A2 << A3 << A4<<"\n";
    //trace(A1,A2,A3,A4);
     return (A == A1 + A2 + A3 + A4);
}

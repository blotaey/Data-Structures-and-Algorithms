#include<bits/stdc++.h>

using namespace std;


string solve(int A,int B, int C){

   

    // case a => A and B both are positive

    if(A>=0 and B>=0){

        if(A>B) return ">";

        else if(A<B) return "<";

        else return "=";

    }

   

    // case b => A >0 and B < 0;

    else if(A>=0 and B < 0){

        if(C%2==0){

            if(A<abs(B)) return "<";

            else if(A>abs(B)) return ">";

            else return "=";

        }

        else{

            return ">";

        }

    }

    // case c => A < 0 and B > 0

    else if(A<0 and B>=0){

        if(C%2==0){

            if(abs(A)>B) return ">";

            else if(abs(A)<B) return "<";

            else return "=";

        }

        else{

            return "<";

        }

    }

    // case D => A < 0 and B < 0

    else if(A<0 and B<0){

        if(C%2==0){

            A = A * -1;

            B = B * -1;

           

            if(A>B) return ">";

            else if(A<B) return "<";

            else return "=";

        }

        else{

            if(A>B) return ">";

            else if(A<B) return "<";

            else return "=";

        }

    }

   

}
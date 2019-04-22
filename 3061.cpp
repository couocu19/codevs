#include <iostream>

using namespace std;

int main()

{

    long dwA,dwB,dwResult;

    char dwOp;

    cin >> dwA>>dwB;

    cin>>dwOp;

    switch (dwOp) {

        case '+':

            dwResult=dwA+dwB;

            break;

        case '-':

            dwResult=dwA-dwB;

            break;

        case '*':

            dwResult=dwA*dwB;

            break;

        case '/':

            dwResult=dwA/dwB;

            break;

        default:

            dwResult=-1;

            break;

    }

    cout <<dwResult;

    return 0;

}





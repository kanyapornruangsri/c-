#include <iostream>
using namespace std;
int main()
{
    int money;
    int areaneeded = 100000;
    int celemicsize, celemicpiece, celemicprice;
    int aftercelemic;
    int fishtanksize, fishtankprice;
    int totalmoney;
    cout << "please enter your money to build : ";
    cin >> money;
    cout << "please select celemic size: ";
    cin >> celemicsize;
    celemicpiece = areaneeded / celemicsize;
    cout << "number of celemie pieces = " << celemicpiece << endl;
    switch(celemicsize)
    {
        case 100:
            celemicprice = (celemicpiece * 10) + (celemicpiece * 3);
        break;
        case 225:
            celemicprice = (celemicpiece * 15) + (celemicpiece * 5);
        break;
        case 400:
            celemicprice = (celemicpiece * 40) + (celemicpiece * 6);
        break;
        case 625:
            celemicprice = (celemicpiece * 50) + (celemicpiece * 8);
        break;
        case 900:
            celemicprice = (celemicpiece * 75) + (celemicpiece * 10);
        break;
         default:
            celemicprice = 0;
    }
    cout << "total price for celemic = " << celemicprice << endl;
    aftercelemic = money - celemicprice;
    cout << "your money after pay for celemic only = " << aftercelemic << endl;
    if ((aftercelemic / (48+130)) >= 65)
    {
        fishtanksize = aftercelemic / (48+130);
        fishtankprice = fishtanksize * (48+130);
    }
    else if (((aftercelemic / (56+140)) >= 37) && ((aftercelemic / (56+140)) <= 64))
    {
        fishtanksize = aftercelemic / (56+140);
        fishtankprice = fishtanksize * (56+140);
    }
    else if (((aftercelemic / (64+145)) >= 17) && ((aftercelemic / (64+145)) <= 36))
    {
        fishtanksize = aftercelemic / (64+145);
        fishtankprice = fishtanksize * (64+145);
    }
    else if (((aftercelemic / (72+150)) >= 4) && ((aftercelemic / (72+150)) <= 16))
    {
        fishtanksize = aftercelemic / (72+150);
        fishtankprice = fishtanksize * (72+150);
    }
    else
    {
        fishtanksize = 0;
        fishtankprice = 0;
    }
    cout << "your build tank fish size = " << fishtanksize << endl;
    totalmoney = aftercelemic - fishtankprice;
    cout << "your money after pay for celemic and fish tank = " << totalmoney << endl;
    return(0);



}
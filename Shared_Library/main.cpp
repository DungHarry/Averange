#include <QCoreApplication>
#include <Header/Averange.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    
    Averange *lpaObject = new Averange();
    char cCheck;

    do {
        lpaObject->vPut();

        again:
            cout<<"Do you want to enter new value? (y/n) ";
            cin>>cCheck;

            cout<<endl;

            if(cCheck == 'y') {

            }
            else if(cCheck == 'n') {
                goto computation;
            }
            else {
                goto again;
            }

    }   while(1);

    computation:
        lpaObject->vCompute();
        lpaObject->vPrintResult();

    return a.exec();
}

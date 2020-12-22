#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int total = 0;
    char s1[255];
    char vectorCuv[50][110];

    cin.getline(s1, 255);

    char *p = strtok(s1, " ");
    while(p!=NULL)
    {
        strcpy(vectorCuv[total], p);
        total++;
        p=strtok(NULL, " ");
    }

    for(int i = 0; i < total; i++)
    {
        for(int j = i+1; j< total; j++)
        {
            if(strcmp(vectorCuv[i], vectorCuv[j])>0)
            {
                char aux[110];
                strcpy(aux, vectorCuv[i]);
                strcpy(vectorCuv[i], vectorCuv[j]);
                strcpy(vectorCuv[j], aux);
            }
        }
    }
    
    for(int i = 0; i < total; i++)
        cout<<vectorCuv[i]<<endl;

    return 0;
}

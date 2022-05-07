#include <vector>
#include <iostream>

using namespace std;

int indiceMinSubsec(vector<int> v, int l, int r){
    int res;
    vector<int> u;
    for(int i = l; i <= r; i++){ //con este ciclo armo la subsecuencia de v desde l hasta r
        u.push_back(v[i]);
    }
    res = 0;
    for (int k = 0 ; k < u.size() ; k++){
        if (u[res] > u[k]){
            res = k;
        }
    }
    return res + l;
}

int main() {
    /* No hace falta modificar el main */
    // Leo las entradas
    int n; //Longitud del vector a rotar
    cin >> n;
    int i = 0;
    int x;
    vector<int> v;// En v leo el vector
    while (i<n){
        cin >> x;
        v.push_back(x);
        i++;
    }
    
    int l,r;
    cin >> l >> r;
    // Calculo el minimo
    int min = indiceMinSubsec(v,l,r);
    
    // Impimo salida
    cout << min;
        
    return 0;
}

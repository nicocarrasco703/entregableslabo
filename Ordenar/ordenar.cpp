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

void ordenar1(vector<int>& v){
    vector<int> vOrd = v;
    for (int i = 0; i < v.size(); i++){
            int indmenor = indiceMinSubsec(vOrd,0,vOrd.size()-1);
            v[i] = vOrd[indmenor];
            vOrd.erase(vOrd.begin() + indmenor);
    }
}

int main() {
    /* No hace falta modificar el main */
    
    // Leo las entradas
    int n; //Longitud del vector
    cin >> n;
    int i = 0;
    int x;
    vector<int> v;// En v leo el vector
    while (i<n){
        cin >> x;
        v.push_back(x);
        i++;
    }

    // Hago el ordenamiento
    ordenar1(v);
    
    // Imprimo el vector resultado
    i = 0;
    while (i < v.size()){
        cout << v[i] << " ";
        i++;
    }
    
    return 0;
}

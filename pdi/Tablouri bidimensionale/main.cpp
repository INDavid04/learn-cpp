# include <iostream>
using namespace std;

/*

void conturCu0() {
    int N, M;
    cin >> N >> M;
    
    int matrice[1000][1000];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrice[i][j];
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i == 0 || i == N-1 || j == 0 || j == M-1) {
                matrice[i][j] = 0;
            }
        }
    }
    
    cout << "\nMatricea incojurata de zerouri:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << "\n";
    }
}

void simetrica() {
    int N, M;
    cin >> N >> M;
    
    int mat[100][100];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> mat[i][j];
        }
    }
    
    bool eSimetrica = true;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M/2; j++) {
            ///cout << mat[i][j] << " cu " << mat [i][M-j-1] << " (" << i << ", " << j << ") si (" << i << ", " << M-j-1 << ")\n"; 
            if (mat[i][j] != mat[i][M-j-1]) {
                eSimetrica = false;
            }
        }
    }
    
    if (eSimetrica == true) {
        cout << "DA";
    } else {
        cout << "NU";
    }
}

void infectat() {
    int N;
    cin >> N;
    
    /// Trebuie declarata global
    int mat[100][100];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (mat[i][j] == 0) {
                mat[i][j] = N-i-1;
                mat[j][i] = N-i-1;
            }
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}

void bloc() {
    int N;
    cin >> N;
    
    int mat[100][100];
    unsigned int contor = 1;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            mat[i][j] = contor;
            contor++;
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}

*/ /// Citirea si afisarea unei matrici

/*

void parcurgDiagonala() {
    int matrice[105][105], N;
    cin >> N;
    
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            cin >> matrice[i][j];
            
    cout << "\nElementele de pe diagonala principala sunt: ";
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            if(i == j)
                cout << matrice[i][j] << " ";

    cout << "\nElementele de SUB diagonala principala sunt: ";
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            if(i > j)
                cout << matrice[i][j] << " ";

    cout << "\nElementele PESTE diagonala principala sunt: ";
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            if(i < j)
                cout << matrice[i][j] << " ";
                
    cout << "\nElementele de pe diagonala secundara sunt: ";
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            if(i + j == N - 1)
                cout << matrice[i][j] << " ";
                
    cout << "\nElementele de SUB diagonala secundara sunt: ";
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            if(i + j >= N - 1)
                cout << matrice[i][j] << " ";
                
    cout << "\nElementele PESTE diagonala secundara sunt: ";
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            if(i + j <= N - 1)
                cout << matrice[i][j] << " ";
                
    /// Nota: (<; >) nu includ diagonala si (<=; >=) includ diagonala
}

void adaugLiniiSauColoane () {
    
void adaugLiniiSauColoane() {
    int N, M, matrice[105][105];
    cin >> N >> M;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            cin >> matrice[i][j];
    
    /// Adaug 13 pe ultima linie
    N = N + 1; /// Facem loc pentru linie
    for(int j = 0; j < M; j++)
        matrice[N - 1][j] = 13;
        
    /// Adaug 13 pe ultima coloana    
    M = M + 1; /// Facem loc pentru coloana
    for(int i = 0; i < N; i++)
        matrice[i][M - 1] = 13;
        
    /// Adaug linie pe pozitia p
    N = N + 1; // Facem loc pentru linie
    for(int i = N - 1; i > P; i--)
    {
        for(int j = 0; j < M; j++)
            matrice[i][j] = matrice[i - 1][j];
    }
    for(int j = 0; j < M; j++)
        matrice[P][j] = 13;
        
    /// Adaug coloana pe pozitia p
    M = M + 1; /// Facem loc pentru coloana
    for(int j = M - 1; j > P; j--)
    {
        for(int i = 0; i < N; i++)
            matrice[i][j] = matrice[i][j - 1];
    }
    for(int i = 0; i < N; i++)
        matrice[i][P] = 13;
}
    
void stergLiniiSauColoane() {
    int N, M, matrice[105][105];
    cin >> N >> M; /// N linii si M coloane
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            cin >> matrice[i][j];
    
    /// Pt a sterge ultima linie/coloana: N--/M--;
    
    /// Sterg linia cu pozitia P
    for(int i = P; i < N - 1; i++)
    {
        for(int j = 0; j < M; j++)
            matrice[i][j] = matrice[i + 1][j];
    }
    N = N - 1;
    
    /// Sterg coloana cu pozitia P
    for(int j = P; j < M - 1; j++)
    {
        for(int i = 0; i < N; i++)
            matrice[i][j] = matrice[i][j + 1];
    }
    M = M - 1;
}
    
}

void transpusa() {
    int mat[10][10], n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }
    
    int tran[10][10], N, M;
    N = m;
    M = n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            tran[j][i] = mat[i][j];
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << tran[i][j] << " ";
        }
        cout << "\n";
    }
}

void poza() {
    /// Se cere rotirea matricei la 90 grade in sensul acelor de ceas
    int matrice[100][100], n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrice[i][j];
        }
    }
    
    int rotita[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rotita[j][n-i-1] = matrice[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << rotita[i][j] << " ";
        }
        cout << "\n";
    }
}

*/ /// Algoritmi elemetari

void nrCifCuDoWhile() {
    int n;
    cin >> n;
    
    int cifre = 0;
    do {
        n /= 10;
        cifre++;
    } while (n != 0);
    
    cout << cifre;
}

int main() {
    nrCifCuDoWhile();
    
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

// Fungsi DFS dengan Parameter:
// 1. int node: Node yang sedang dikunjungi saat ini
// 2. vector<vector<int>>& adj: Referensi ke daftar tetangga (peta graf)
void dfs(int node, vector<vector<int>>& adj) {
    // Cetak node yang sedang dikunjungi
    cout << node << " ";

    // Telusuri setiap "anak" atau tetangga dari node tersebut
    for (int child : adj[node]) {
        // Panggil fungsi dfs lagi untuk masuk lebih dalam ke anak tersebut
        dfs(child, adj);
    }
}

int main() {
    // Inisialisasi daftar tetangga untuk 5 node
    vector<vector<int>> adj(6);

    // Definisi hubungan sesuai permintaan sebelumnya:
    adj[1] = {2, 3}; // 1 ke 2 dan 3
    adj[2] = {4, 5}; // 2 ke 4 dan 5

    cout << "Urutan DFS: ";
    // Mulai penelusuran mendalam dari node 1
    dfs(1, adj);
    cout << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(int root, vector<vector<int>>& adj) {
    // 1. Antrean untuk menyimpan node yang akan dikunjungi
    queue<int> q;
    
    // 2. Masukkan node awal (root) ke dalam antrean
    q.push(root);

    cout << "Urutan BFS: ";

    // 3. Ulangi proses selama antrean tidak kosong
    while (!q.empty()) {
        // Ambil node paling depan
        int current = q.front();
        q.pop();

        // Cetak node yang sedang diproses
        cout << current << " ";

        // 4. Masukkan semua tetangga/anak dari node saat ini ke antrean
        for (int child : adj[current]) {
            q.push(child);
        }
    }
    cout << endl;
}

int main() {
    // Inisialisasi adjacency list untuk 5 node (indeks 0-5)
    vector<vector<int>> adj(6);

    // Definisi hubungan (Edge) sesuai permintaan:
    adj[1] = {2, 3}; // 1 ke 2 dan 3
    adj[2] = {4, 5}; // 2 ke 4 dan 5

    // Jalankan BFS mulai dari node 1
    bfs(1, adj);

    return 0;
}
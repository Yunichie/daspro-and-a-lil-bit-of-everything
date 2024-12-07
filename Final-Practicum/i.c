#include <stdio.h>

int visited[7][7], count = 0;

void dfs(int x, int y, int n, int m, int map[7][7], int start_x, int start_y, int end_x, int end_y) {
    if (x == end_x && y == end_y) count++;

    visited[x][y] = 1;
    int dx[] = { -1, 1, 0, 0 };
    int dy[] = { 0, 0, -1, 1 };

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny] && map[nx][ny] % 2 != 0) {
            dfs(nx, ny, n, m, map, start_x, start_y, end_x, end_y);
            visited[nx][ny] = 0;
        }
    }
}

int main() {
    int n, m, map[7][7], start_x, start_y, end_x, end_y;
    scanf("%d %d", &n, &m);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &map[i][j]);
            if (map[i][j] == 0) {
                start_x = i;
                start_y = j;
            } else if (map[i][j] == 1) {
                end_x = i;
                end_y = j;
            }
        }
    }
    dfs(start_x, start_y, n, m, map, start_x, start_y, end_x, end_y);

    if (count == 0) printf("Kucing oren tidak bisa pulang ke rumah :(");
    else printf("Terdapat %d jalan untuk kucing oren pulang", count);
}
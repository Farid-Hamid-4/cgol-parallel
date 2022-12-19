int validateDataCmdArgs(int argc, char **argv);
int validateTaskCmdArgs(int argc, char **argv);
int **createGrid(int size);
void swapGrid(int **current_grid, int **next_grid, int size);
int **randomizeGrid(int **grid, int size);
int countLiveNeighbors(int **grid, int size, int a, int b);
int nextGeneration(int live_neighbors, int **current_grid, int i, int j);
void displayGrid(int **grid, int size);
void updateGrid(int **current_grid, int **next_grid, int grid_size, int n_threads, void *arg);
void **deleteGrid(int **grid, int size);
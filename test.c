unsigned int seed;

// initialize the random seed
void my_srand(unsigned int s) {
    seed = s;
}

// generate random numbers
int rand() {
    seed = seed * 1103515245 + 12345;
    return (seed / 65536) % 32768;
}

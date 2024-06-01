//header

int tambah(int a, int b) {
    return a + b;

}

int kurang(int a, int b){
    return a - b;
}

int kali(int a, int b){
    return a * b;
}

int bagi(int a, int b) {
    // //jarang dipakai
    // return (float) a / (float) b;  //type casting
    
    //sering dipakai
    return static_cast<float>(a)/ static_cast<float>(b); //type casting
}
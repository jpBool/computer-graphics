#include <string>
#include <cmath> 
#include <iostream> 
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp> // Necessário para imshow e waitKey
#include <cstdlib> 

using namespace std;

int main(int argc, char* argv[])
{
    // Params size_x, size_y

    if(argc < 3)
    {
        cerr << "Faltou size_x e size_y" << endl;
    }

    int size_x = atoi(argv[1]);
    int size_y = atoi(argv[2]);
    // Caminho corrigido (/home e .png)
    string file_path = "/home/lepec/Documentos/JoaoSantos_CompGraf/aula01/codigo/dados/maps.png";

    // Adicionado o sinal de '='
    cv::Mat imagem_lida = cv::imread(file_path, cv::IMREAD_COLOR);

    int num_linhas = 400;
    int num_cols = 500;

    cv::Mat  img_saida(size_y, size_x, CV_8UC1, cv::Scalar(0));

    for(int i=0; i < img_saida.rows; ++i){
        for(int j=0; j<  img_saida.cols; ++j){
            //cout << i << " " << j << endl;
            int row_entrada = i + size_y / 2;
            int img_saida.at<unsigned char>(i, j) = p;
        }
    }

    // Exibir a imagem
    cv::imshow("Janela da Imagem Sintetica", img_synth);
    cv::waitKey(0);
    cv::destroyAllWindows();    

    cv::imwrite("atividade00.png", img_synth);
    return 0;
}

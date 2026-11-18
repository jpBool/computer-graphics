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

    // Caminho corrigido (/home e .png)
    string file_path = "/home/lepec/Documentos/JoaoSantos_CompGraf/aula01/codigo/dados/maps.png";

    // Adicionado o sinal de '='
    cv::Mat imagem_lida = cv::imread(file_path, cv::IMREAD_COLOR);

    int num_linhas = 400;
    int num_cols = 500;

    cv::Mat img_synth(num_linhas, num_cols, CV_8UC1, cv::Scalar(0));

    for(int i=0; i < img_synth.rows; ++i){
        for(int j=0; j< img_synth.cols; ++j){
            //cout << i << " " << j << endl;
            float prop_linha = static_cast<float>(i) / static_cast<float>(img_synth.rows);
            float prop_cols = (float)j / (float)img_synth.cols;
            unsigned char p = static_cast<unsigned char>(round(255.0f * (prop_linha * 0.5f + prop_cols * 0.5f)));
            img_synth.at<unsigned char>(i, j) = p;
        }
    }

    // Exibir a imagem
    cv::imshow("Janela da Imagem Sintetica", img_synth);
    cv::waitKey(0);
    cv::destroyAllWindows();    

    cv::imwrite("atividade00.png", img_synth);
    return 0;
}

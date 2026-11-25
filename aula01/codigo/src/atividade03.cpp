#include <string>
#include <cmath> 
#include <iostream> 
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp> // Necessário para imshow e waitKey
#include <cstdlib> 

using namespace std;

void desenhaMatriz(cv::Mat &img)
{
    img.at<uchar>>(0,  0) = 100;

    int valor = 255;
    int top = 10;
    int let = 300;
    int sx = 200;
    int sy = 100;
    for(int row = 0; row < sy; ++row)
    {
        for(int col = 0; col < sx; ++col)
        {
            img.at<uchar>(top + row, left + col) = valor
        }
    }


}
int main(int argc, char* argv[])
{

    // Abrindo uma matriz vazia
    cv::Mat imagem orig = cv::imread("Documents/Graphics/computer-graphics/aula01/dados/maps.png", )

    // Gerar imagem em escala de cinza
    cv::Mat hist_orig = calcularHistorama(imagem_orig);
    gravarHistograma(hist_orig);

    //GErar a imagem equalizada



    cv::imwrite("saida.png", imagem);

    // Grava a matriz
    return 0;
}

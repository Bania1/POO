#include "../market/market.h"
#include "../tv/tv.h"
#include "../computer/computer.h"
#include "../client/client.h"
#include "../seller/seller.h"
#include "../basket/basket.h"

using namespace std;

int main(){
    
    Market WALLAPOP("Si no lo usas, subelo.");
   
    Client c1("56X001", "JOSE LUIS","Sevilla","SEVILLA", "ESPAÑA", 22, 43, 2023, 0);
    Client c2("56X002", "MARIA LUISA", "Cordoba","CORDOBA", "ESPAÑA", 32, 3, 2009, 1);
    Client c3("56X003", "MATIAS", "Villa del Rio","CORDOBA", "ESPAÑA", 25, 63, 2022, 6);
    Client c4("56X004", "JUAN MANUEL", "Cordoba","CORDOBA", "ESPAÑA", 22, 4, 2020, 3);
    Client c5("56X005", "BOFIL", "Guadalupe","Culiacan", "MEXICO", 22, 6, 2000, 4);

    if(!WALLAPOP.AddClient(c1)){
        cout<<"ERROR AL AÑADIR CLIENTE "+c1.GetName()<<endl;
    }
    if(!WALLAPOP.AddClient(c2)){
        cout<<"ERROR AL AÑADIR CLIENTE "+c2.GetName()<<endl;
    }
    if(!WALLAPOP.AddClient(c3)){
        cout<<"ERROR AL AÑADIR CLIENTE "+c3.GetName()<<endl;
    }
    if(!WALLAPOP.AddClient(c4)){
        cout<<"ERROR AL AÑADIR CLIENTE "+c4.GetName()<<endl;
    }
    if(!WALLAPOP.AddClient(c5)){
        cout<<"ERROR AL AÑADIR CLIENTE "+c5.GetName()<<endl;
    }
    Seller s1("34X001", "ANTONIO", "Sevilla","SEVILLA", "ESPAÑA",24, 69, 2022, "TV");
    Seller s2("34X002", "RODRIGO", "Cordoba","CORDOBA", "ESPAÑA",45, 9, 2021, "COMPUTADORAS");
    Seller s3("34X003", "ANDRES", "Cordoba","CORDOBA", "ESPAÑA",65, 69, 2023, "COMPUTADORAS");
    Seller s4("34X004", "MARIO", "Cordoba","CORDOBA", "ESPAÑA",55, 69, 2014, "MISCELANEO");
    Seller s5("34X005", "SEGAY", "Moscu","Moscu", "RUSIA",17, 69, 2006, "TV");
    if(!WALLAPOP.AddSeller(s1)){
        cout<<"ERROR AL AÑADIR CLIENTE "+s1.GetName()<<endl;
    }
    if(!WALLAPOP.AddSeller(s2)){
        cout<<"ERROR AL AÑADIR CLIENTE "+s2.GetName()<<endl;
    }
    if(!WALLAPOP.AddSeller(s3)){
        cout<<"ERROR AL AÑADIR CLIENTE "+s3.GetName()<<endl;
    }
    if(!WALLAPOP.AddSeller(s4)){
        cout<<"ERROR AL AÑADIR CLIENTE "+s4.GetName()<<endl;
    }
    if(!WALLAPOP.AddSeller(s5)){
        cout<<"ERROR AL AÑADIR CLIENTE "+s5.GetName()<<endl;
    }
    ComputerType pc1 = static_cast<ComputerType>(5);
    ComputerType pc2 = static_cast<ComputerType>(4);
    
    Tv p1("TVX001", "SAMSUNG HD VERSION 1", 250.00, "SAMSUNNG", "Antonio Rallo", 50.00);
    Tv p2("TVX002", "LG HD VERSION 1", 300.00, "LG ELECTRONICS", "Sergay Eristoff", 40.00);
    Product p3("GrX001", "Mesa de billar profesional", 140.00, "Billar Stars", "Mario Casas");
    Computer p4("PCX001", pc1,"ASUS TUF 2022", 800.00, "ASUS", "Rodrigo Molina");
    Computer p5("PCX002", pc2,"IPAD PRO 3", 800.00, "Apple", "Andres Mendez");
    WALLAPOP.AddProductSeller(p1, s1.GetId());
    WALLAPOP.AddProductSeller(p2, s2.GetId());
    WALLAPOP.AddProductSeller(p3, s3.GetId());
    WALLAPOP.AddProductSeller(p4, s4.GetId());
    WALLAPOP.AddProductSeller(p5, s5.GetId());

    int x = 0;
    string client_id, product_id;
    bool good_addition;
    while(x < 5){
        cout<<"1. Añadir producto en la cesta de un cliente pidiendo su id de cliente y el id del producto."<<endl;
        cout<<"2. Borrar producto de la cesta de un cliente pidiendo su id de cliente y el id del producto."<<endl;
        cout<<"3. Volcar datos al fichero de salida ventas.txt."<<endl;
        cout<<"4. Mostrar datos en pantalla."<<endl;
        cout<<"5. Salir del programa."<<endl;
        cout<<"--->";
        cin>>x;
        switch(x){
            case 1:
                cout<<"Introduzca su ID de cliente"<<endl;
                cout<<"-->";
                getline(cin, client_id);
                getline(cin, client_id);
                cout<<"Introduzca el ID del producto a comprar"<<endl;
                cout<<"-->";
                getline(cin, product_id);
                cout<<product_id<<endl;
                
                if(product_id == p1.GetId()){
                    WALLAPOP.AddProductClient(p1, client_id);
                }
                else if(product_id == p2.GetId()){
                    WALLAPOP.AddProductClient(p2, client_id);
                }
                else if(product_id == p3.GetId()){
                    WALLAPOP.AddProductClient(p3, client_id);
                }
                else if(product_id == p4.GetId()){
                    WALLAPOP.AddProductClient(p4, client_id);
                }
                else if(product_id == p5.GetId()){
                    WALLAPOP.AddProductClient(p5, client_id);
                }
                   
            break;
            case 2:
                cout<<"Introduzca su ID de cliente"<<endl;
                cout<<"-->";
                getline(cin, client_id);
                getline(cin, client_id);
                cout<<"Introduzca el ID del producto a comprar"<<endl;
                cout<<"-->";
                getline(cin, product_id);
                getline(cin, product_id);
                

                if(product_id == p1.GetId()){
                    WALLAPOP.DeleteProductClient(p1, client_id);
                }
                else if(product_id == p2.GetId()){
                    WALLAPOP.DeleteProductClient(p2, client_id);
                }
                else if(product_id == p3.GetId()){
                    WALLAPOP.DeleteProductClient(p3, client_id);
                }
                else if(product_id == p4.GetId()){
                    WALLAPOP.DeleteProductClient(p4, client_id);
                }
                else if(product_id == p5.GetId()){
                    WALLAPOP.DeleteProductClient(p5, client_id);
                }
            break;
            case 3:
                WALLAPOP.DumpMarket(1);
            break;

            case 4:
                WALLAPOP.DumpMarket(0);
            break;
            case 5:
                cout<<"Hasta la proxima"<<endl;
            break;
            default:

            break;
        }
    }
}
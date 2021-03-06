{
    gROOT->Reset(); //Reinicia las variables globales de ROOT
    gRandom->GetSeed(); //Obtiene una semilla para los numeros al azar
    
    Int_t corridas=1000; //Cantidad de series sinteticas a ser utilizadas/generadas

    TCanvas ventana("ventana","Nombre de la ventana",200,10,1000,600); //crea la ventana
    ventana.SetFillColor(42);//Define el color del fondo
    ventana.SetGrid();//Hace que se dibuje una grilla en el histograma
    
    
    TH1F histo("histo","Titulo del histograma",15,0,1.5); //crea el histograma
    histo.SetFillColor(45);//Define de que color se dibuja el area debajo del histo

    //Llena el histogrma
    for(Int_t j=0;j<corridas;j++){
      Double_t U01=gRandom->Uniform(0,1); //genera un numero al azar desde una distribucion uniforme en [0,1]
      histo.Fill(U01); //incrementa en 1 las cuentas del bin que le correspode al valor de U01
    }

    histo.Draw(); //dibuja el histograma
    
    return 0;
}


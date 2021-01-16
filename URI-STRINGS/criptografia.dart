//QUESTÂO 1024 - STRINGS

import 'dart:convert';
import 'dart:io';

void main(){
  int c = int.parse(stdin.readLineSync());
  for (int i = 0; i < c; i++) {
    var entrada1 = stdin.readLineSync();
    
    //extrai o Unicode da string entrada1;
    var texto = entrada1.codeUnits.toList();

    //soma +3 do codigo Unicode extraido da string;
    texto = primeiroPasso(texto);
    
    //reverte o texto - 2º passo; 
    texto = texto.reversed.toList();
    
    //subtrai -1 do codigo Unicode extraido da string;
    texto = terceiroPasso(texto);

    //converte o Unicode em uma string;
    print('${AsciiCodec().decode(texto)}');
  }
}

primeiroPasso(encoder){
  for(var i = 0; i < encoder.length; i++){
    if((encoder[i] >= 65 && encoder[i] <= 90) ||
      (encoder[i] >= 97 && encoder[i] <= 122)){
      encoder[i] += 3;
    }
  }
  return encoder;
}

terceiroPasso(entrada){
  var j = entrada.length/2;
  
  for(int i = j.toInt(); i < entrada.length; i++){
    if(entrada[i] >= 32 && entrada[i] <= 176){
      entrada[i] -= 1;
    }
  }
  return entrada;
}